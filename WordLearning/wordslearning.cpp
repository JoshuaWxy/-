#include "wordslearning.h"
#include "ui_wordslearning.h"

WordsLearning::WordsLearning(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WordsLearning),
    selectedButton(nullptr)
{
    ui->setupUi(this);

    // 设置数据库连接
    db = QSqlDatabase::addDatabase("QSQLITE");

    // 获取可执行文件的目录的数据库文件
    QString appDirPath = QCoreApplication::applicationDirPath() + "/Carlos_dictionary.db";
    db.setDatabaseName(appDirPath);

    if (!db.open())
    {
        // 处理打开数据库失败的情况
        QMessageBox::critical(nullptr, "错误", "无法打开数据库");
        return;
    }

    // 设置并绑定Model
    qryModel=new QSqlQueryModel(this);
    selModel=new QItemSelectionModel(qryModel,this);    //QueryModel 和 ItemSelectionModel进行绑定
    ui->tableView->setModel(qryModel);
    ui->tableView->setSelectionModel(selModel);

    ui->stackedWidget->setCurrentIndex(0);

    currentRow = 0; //构造函数赋初值0，用于判断未到末尾

    ui->CET4WordsBtn->setIcon(QIcon(":/backgroud/images/CET4.jpg"));
    ui->CET4WordsBtn->setIconSize(ui->CET4WordsBtn->size()); // 图标大小与按钮大小相同
    ui->CET4WordsBtn->setText(""); // 不显示文本

    ui->CET6WordsBtn->setIcon(QIcon(":/backgroud/images/CET6.png"));
    ui->CET6WordsBtn->setIconSize(ui->CET6WordsBtn->size());
    ui->CET6WordsBtn->setText("");

    ui->rememberWordsBtn->setIcon(QIcon(":/backgroud/images/Familiar.png"));
    ui->rememberWordsBtn->setIconSize(ui->rememberWordsBtn->size());
    ui->rememberWordsBtn->setText("");

    connect(ui->CET4WordsBtn, &QPushButton::clicked, this, [=]() {
        onButtonClicked(ui->CET4WordsBtn);
    });
    connect(ui->CET6WordsBtn, &QPushButton::clicked, this, [=]() {
        onButtonClicked(ui->CET6WordsBtn);
    });
    connect(ui->rememberWordsBtn, &QPushButton::clicked, this, [=]() {
        onButtonClicked(ui->rememberWordsBtn);
    });

    connect(&card, &wordCards::cardClosed, this, [=] () {
        this->show();
        card.resetTickingCheckBox();   //退出 重置计时模式
    });

    // 连接信号和槽来处理行选择改变
    connect(ui->tableView->selectionModel(), &QItemSelectionModel::currentChanged,
            this, &WordsLearning::onCurrentRowChanged);

    connect(&card, &wordCards::do_upBtn_clicked, this, &WordsLearning::previousWord);
    connect(&card, &wordCards::do_downBtn_clicked, this, &WordsLearning::nextWord);
    connect(&card, &wordCards::do_rememberBtn_clicked, this, &WordsLearning::rememberWord);
    connect(&card, &wordCards::do_forgotBtn_clicked, this, &WordsLearning::forgotWord);

    connect(this, &WordsLearning::toLearnWordPage, &card, &wordCards::toLearnWordPage);
    connect(&card, &wordCards::integrateAdd1, this, [=] ()
            {
                updateTimesAndIntegrate(1, 1);
                nextWord();
            });
    connect(&card, &wordCards::integrateAdd2, this, [=] ()
            {
                updateTimesAndIntegrate(1, 2);
                nextWord();
            });
}

/**
 * @brief 把数据库打开，并设置到ui->tableView
 * @param sqlQuery
 */
void WordsLearning::openWordsSQL(const QString &sqlQuery)
{
    qryModel->setQuery(sqlQuery);
    if(qryModel->lastError().isValid())
    {
        QMessageBox::information(this,"error","数据库读取表格失败！\n"
                                 +qryModel->lastError().text());
        return;
    }

    QSqlRecord rec = qryModel->record();
    qryModel->setHeaderData(rec.indexOf("word"), Qt::Horizontal, "单词");
    qryModel->setHeaderData(rec.indexOf("pronounciation"), Qt::Horizontal, "发音");
    qryModel->setHeaderData(rec.indexOf("translation"), Qt::Horizontal, "释义");
    qryModel->setHeaderData(rec.indexOf("times"), Qt::Horizontal, "已学次数");
    qryModel->setHeaderData(rec.indexOf("integrate"), Qt::Horizontal, "单词熟练度");

    //Qt中用modelView模式来显示数据，将tableView与存储数据的model关联后才有显示的内容
    ui->tableView->setModel(qryModel);
    ui->tableView->verticalHeader()->setVisible(false);//隐藏表格的行号
    //设置选中时为整行选中
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);  //不能编辑
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);//单行，而不是多行
    //列宽随窗口大小改变而改变，每列平均分配，充满整个表，但是此时列宽不能拖动进行改变
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    if (qryModel->rowCount() > 0)
    {
        // 创建选择范围，选中第一行
        QModelIndex firstIndex = qryModel->index(0, 0);     // 获取索引，即列
        QModelIndex lastIndex = qryModel->index(0, qryModel->columnCount() - 1);
        // 一行的第一和最后一个单元格
        QItemSelection selection(firstIndex, lastIndex);
        // 使用selectionModel进行选中
        selModel->select(selection, QItemSelectionModel::Select);
    }

    rowCount = qryModel->rowCount();
}

/**
 * @brief 打开四级单词数据库
 */
void WordsLearning::openSQLCET4()
{
    ui->stackedWidget->setCurrentIndex(1);
    QString sqlQuery = "SELECT word, pronounciation, translation, times, integrate "
                       "FROM wordsCET4 "
                       "LIMIT 200";
    openWordsSQL(sqlQuery);

    sqlQuery = "SELECT COUNT(*) FROM wordsCET4 "
               "WHERE times > 0";
    searchLearnWordNum(sqlQuery);

    QPixmap pixmap(":/backgroud/images/CET4.jpg");
    QSize labelSize = ui->wordIMGLabel->size();
    // 缩放QPixmap以适应QLabel的大小，保持其原始的长宽比
    QPixmap scaledPixmap = pixmap.scaled(labelSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->wordIMGLabel->setPixmap(scaledPixmap);
}

/**
 * @brief 打开六级单词数据库
 */
void WordsLearning::openSQLCET6()
{
    ui->stackedWidget->setCurrentIndex(1);
    QString sqlQuery = "SELECT word, pronounciation, translation, times, integrate "
                       "FROM wordsCET6 "
                       "LIMIT 200";
    openWordsSQL(sqlQuery);

    sqlQuery = "SELECT COUNT(*) FROM wordsCET6 "
               "WHERE times > 0";
    searchLearnWordNum(sqlQuery);

    QPixmap pixmap(":/backgroud/images/CET6.png");
    QSize labelSize = ui->wordIMGLabel->size();
    QPixmap scaledPixmap = pixmap.scaled(labelSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->wordIMGLabel->setPixmap(scaledPixmap);
}

/**
 * @brief 打开熟词数据库
 */
void WordsLearning::openSQLFamiliar()
{
    ui->stackedWidget->setCurrentIndex(1);
    QString sqlQuery = "SELECT word, pronounciation, translation, times, integrate "
                       "FROM wordsFamiliar "
                       "LIMIT 200";
    openWordsSQL(sqlQuery);

    sqlQuery = "SELECT COUNT(*) FROM wordsFamiliar "
               "WHERE times > 0";
    searchLearnWordNum(sqlQuery);

    QPixmap pixmap(":/backgroud/images/Familiar.png");
    QSize labelSize = ui->wordIMGLabel->size();
    QPixmap scaledPixmap = pixmap.scaled(labelSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->wordIMGLabel->setPixmap(scaledPixmap);
}

/**
 * @brief 把查询已学单词总数，并设置到ui->learnedWoldLabel
 * @param sqlQuery
 */
void WordsLearning::searchLearnWordNum(const QString &sqlQuery)
{
    QSqlQuery query;
    if (query.exec(sqlQuery))
    {
        if (query.next())
        {
            int count = query.value(0).toInt();

            // 获取当前QLabel的文本，并附加查询结果
            QString labelText = ui->learnedWoldLabel->text();   // 获取当前文本
            labelText.remove(QRegularExpression("[0-9]+\\s*$"));// 移除labelText中可能存在的最后的数字及其前面的空格
            labelText.append(QString::number(count));           // 附加查询结果
            ui->learnedWoldLabel->setText(labelText);           // 设置新的文本
        }
    }
}

/**
 * @brief 根据index选择tableView的当前行
 */
void WordsLearning::selectRow()
{
    QModelIndex index = qryModel->index(currentRow, 0); // 获取当前行的索引
    ui->tableView->setCurrentIndex(index);  // 设置当前行为选中行
    ui->tableView->scrollTo(index);         // 滚动到当前行

    ui->tableView->selectRow(currentRow);   // 高亮显示当前行

    QSqlRecord record = qryModel->record(currentRow);
    card.setData(record.value(0).toString(),
                 record.value(1).toString(),
                 record.value(2).toString());

}

/**
 * @brief 设置当前button的选中样式
 * @param button    传入QPushButton对象，修改其样式
 */
void WordsLearning::onButtonClicked(QPushButton *button) {
    // 如果当前有选中的按钮且不是当前按钮，则取消选中
    if (selectedButton && selectedButton != button) {
        selectedButton->setStyleSheet("");
    }

    // 设置当前按钮为选中状态
    selectedButton = button;
    button->setStyleSheet("QPushButton {"
                          "border: 3px solid pink;" // 加粗边框，并改变颜色为粉蓝色
                          "border-radius: 10px;"
                          "padding: 5px 10px;"      // 用于增加按钮内部的间距，保持与之前样式一致
                          "}");
}

/**
 * @brief 设置当前button的初始样式
 * @param button
 */
void WordsLearning::setDefaultButtonStyle(QPushButton *button)
{   //设置初始样式后，没有悬浮效果
    button->setStyleSheet("QPushButton {"
                          "border: 2px solid blue;"
                          "border-radius: 10px;"
                          "padding: 5px 10px;"      //用于增加按钮内部的间距
                          "}");
}

/**
 * @brief 更新当前button的样式
 */
void WordsLearning::updateStyle()
{
    // 选中状态的样式
    if (isSelected)
    {
            setStyleSheet("QPushButton {"
                      "font: 25 9pt '微软雅黑 Light';"
                          "color: rgb(31,31,31);"
                      "padding-left: 20px;"
                      "background-color: rgb(255, 255, 255);"
                      "border: 3px solid rgb(255, 0, 0);"   // 红色粗边框表示选中
                          "border-radius: 14px;"            // 调整半径以匹配新边框宽度
                          "}");
    }
    // 非选中状态的样式（这里可以恢复为初始样式或设置其他样式）
    else
    {
            setStyleSheet("QPushButton {"
                      "font: 25 9pt '微软雅黑 Light';"
                          "color: rgb(31,31,31);"
                      "padding-left: 20px;"
                      "background-color: rgb(255, 255, 255);"
                      "border: 2px solid rgb(20,196,188);"  // 初始边框样式
                          "border-radius: 15px;"            // 恢复初始半径
                          "}");
    }
}


/**
 * @brief “已记住”单词按钮：点击更新数据，并进入下一个单词
 */
void WordsLearning::rememberWord()
{
    // 更新words表的integrate和times列：默认模式积分+ 1
    updateTimesAndIntegrate(1, 1);
    nextWord();
}

/**
 * @brief 更新数据：学习次数和单词熟练度。
 *        单词熟练度小于10时，将数据更新到wordsFamiliar表
 * @param p_times, p_integrates 需要更新的次数和单词熟练度
 */
void WordsLearning::updateTimesAndIntegrate(int p_times, int p_integrates)
{
    // 获取当前选中的模型项
    selModel = ui->tableView->selectionModel();
    QModelIndexList selected = selModel->selectedRows();
    if (selected.empty())
    {
        // 没有选中任何行，处理错误或返回
        return;
    }

    QModelIndex currentIndex = selected.first();
    QSqlRecord currentRecord = qryModel->record(currentIndex.row());

    QString sqlQuery = QString("UPDATE %1 "
                               "SET integrate = integrate + :integrates, times = times + :times "
                               "WHERE word = :word").arg(currentTableName);

    QSqlQuery query;
    query.prepare(sqlQuery);
    query.bindValue(":word", currentRecord.value("word").toString());
    query.bindValue(":times", p_times);
    query.bindValue(":integrates", p_integrates);

    if (!query.exec())
    {
        QMessageBox::critical(this, "错误", "更新数据库失败：" + query.lastError().text());
        return;
    }

    updateOrInsertWord();
}

/**
 * @brief 更新数据：学习次数和单词熟练度。
 *        单词熟练度大于10时，将数据更新到wordsFamiliar表
 */
void WordsLearning::updateOrInsertWord()
{
    //获取Model
    selModel = ui->tableView->selectionModel();
    QModelIndexList selected = selModel->selectedRows();
    if (selected.empty())
    {
        // 没有选中任何行，处理错误或返回
        return;
    }

    QModelIndex currentIndex = selected.first();
    QSqlRecord currentRecord = qryModel->record(currentIndex.row());
    // 检查分数是否大于或等于10
    int score = currentRecord.value("integrate").toInt();

    if (score >= 10)
    {
        //调用判断是否创建表函数
        createTable(score);

        // 检查表中是否存在相同的单词
        QSqlQuery checkWordQuery;
        checkWordQuery.prepare("SELECT * FROM wordsFamiliar WHERE word = :word");
        checkWordQuery.bindValue(":word", currentRecord.value("word").toString());
        if (checkWordQuery.exec() && checkWordQuery.next())
        {
            // 如果存在相同的单词，则更新times和integrate
            QSqlQuery updateQuery;
            updateQuery.prepare("UPDATE wordsFamiliar SET times = :times, integrate = :integrate WHERE word = :word");
            updateQuery.bindValue(":times", currentRecord.value("times").toInt());
            updateQuery.bindValue(":integrate", currentRecord.value("integrate").toInt());
            if (!updateQuery.exec()) {
                QMessageBox::critical(this, "错误", "更新wordsFamiliar表失败：" + updateQuery.lastError().text());
            }
        }
        else
        {
            // 如果不存在相同的单词，则插入新记录
            QSqlQuery insertQuery;
            insertQuery.prepare("INSERT INTO wordsFamiliar (word, pronounciation, translation, times, integrate) "
                                "VALUES (:word, :pronounciation, :translation, :times, :integrate)");

            insertQuery.bindValue(":word", currentRecord.value("word").toString());
            insertQuery.bindValue(":pronounciation", currentRecord.value("pronounciation").toString());
            insertQuery.bindValue(":translation", currentRecord.value("translation").toString());
            insertQuery.bindValue(":times", currentRecord.value("times").toInt());
            insertQuery.bindValue(":integrate", currentRecord.value("integrate").toInt());
            if (!insertQuery.exec())
            {
                QMessageBox::critical(this, "错误", "插入数据到wordsFamiliar表失败：" + insertQuery.lastError().text());
            }
        }
    }
}

/**
 * @brief 单词熟练度大于10时，检查是否存在wordsFamiliar表，没有则创建
 * @param score 单词熟练度
 */
void WordsLearning::createTable(int score)
{
    if (score >= 10)
    {
        // 检查wordsFamiliar表是否存在，如果不存在则创建它
        QSqlQuery checkTableQuery;
        checkTableQuery.exec("SELECT name FROM sqlite_master "
                             "WHERE type='table' AND name='wordsFamiliar';");

        if (checkTableQuery.next() == false)
        {
            // 若表不存在，创建
            QSqlQuery createTableQuery;
            createTableQuery.exec("CREATE TABLE wordsFamiliar "
                                  "(word TEXT PRIMARY KEY, pronounciation TEXT, "
                                  "translation varchar(255), "
                                  "audio varchar(255), "
                                  "times INT, "
                                  "integrate INTEGER)");
            if (createTableQuery.lastError().isValid())
            {
                QMessageBox::critical(this, "错误", "创建wordsFamiliar表失败：" + createTableQuery.lastError().text());
                return;
            }
        }
    }
}

/**
 * @brief “忘记了”单词按钮：点击更新数据，并进入单词翻译页面
 */
void WordsLearning::forgotWord()
{
    // 获取当前选中的模型项
    selModel = ui->tableView->selectionModel();
    QModelIndexList selected = selModel->selectedRows();
    if (selected.empty())
    {
        // 没有选中任何行，处理错误或返回
        return;
    }

    QModelIndex currentIndex = selected.first();
    QSqlRecord currentRecord = qryModel->record(currentIndex.row());

    // 更新words表的integrate和times列：每次学习times + 1, integrate <= 0 时，不操作
    QSqlQuery query;
    //换行前，必须注意有空格；否则相当于直接拼接。
    QString sqlQuery = QString("UPDATE %1 SET times = times + 1, "
                  "integrate = CASE WHEN integrate > 0 THEN integrate - 1 ELSE integrate END "
                  "WHERE word = :word").arg(currentTableName);

    query.prepare(sqlQuery);
    query.bindValue(":word", currentRecord.value("word").toString());
    if (!query.exec())
    {
        QMessageBox::critical(this, "错误", "更新数据库失败：" + query.lastError().text());
        return;
    }

    card.forgotToTranslation() ;
}

/**
 * @brief 更新当前选中的行
 */
void WordsLearning::onCurrentRowChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous);
    currentRow = current.row();
}


WordsLearning::~WordsLearning()
{
    db.close();      //关闭数据库
    delete ui;
}

/**
 * @brief 实现上一词，并更新ui->tableView选中行
 */
void WordsLearning::previousWord()
{
    if (currentRow > 0)
    {
        currentRow--; // 减少当前行号
    }
    else
    {
        QMessageBox::warning(this, "提醒", "已经是第一个单词了！\n即将跳转到最后一个单词。");
        currentRow = rowCount - 1;
    }

    selectRow();
    emit toLearnWordPage();

    card.restoreForgotBtn();
}

/**
 * @brief 实现下一词，并更新ui->tableView选中行
 */
void WordsLearning::nextWord()
{
    if (currentRow < rowCount - 1)
    {
        currentRow++;
    }
    else
    {
        QMessageBox::warning(this, "提醒", "你太棒啦！已经学习到最后一个单词了！\n即将重新复习一遍。");
        currentRow = 0;
    }

    selectRow();
    emit toLearnWordPage();

    card.restoreForgotBtn();
}

/**
 * @brief 单词本页面与单词卡页面切换，并从ui->tableView设置数据到单词卡
 */
void WordsLearning::on_learnWordBtn_clicked()
{

    card.show();
    card.raise(); //只能同时存在一个对话框，再按增加按钮会让对话框显示到最上层
    this->hide();

    // 获取选中的索引
    QItemSelectionModel *selectionModel = ui->tableView->selectionModel();
    QModelIndexList selectedIndexes = selectionModel->selectedIndexes();

    if (selectedIndexes.isEmpty()) {
        QMessageBox::information(this, "提示", "请先选择一行数据。");
        return;
    }

    // 假设我们只需要第一列的索引（通常是单词）
    QModelIndex wordIndex;
    for (const QModelIndex &index : selectedIndexes) {
        if (index.column() == 0)    // 单词在第一列
        {
            wordIndex = index;
            break;                  // 只需要一个单词，找到后就退出循环
        }
    }

    if (!wordIndex.isValid()) {
        QMessageBox::information(this, "提示", "选中的行未包含有效的单词数据。");
        return;
    }

    // 获取单词和发音（发音在第二列）
    QString word = ui->tableView->model()->data(wordIndex).toString();  //利用已知的 QModelIndex 来获取数据，这在已经有一个指向特定单元格的索引时很有用。
    QString pronounciation = ui->tableView->model()->data(wordIndex.sibling(wordIndex.row(), 1)).toString();    //需要基于现有索引在同一行内导航到其他列时很有用。
    QString translation = ui->tableView->model()->data(wordIndex.sibling(wordIndex.row(), 2)).toString();

    // 设置数据到 wordCards
    card.setData(word, pronounciation, translation);
}

/**
 * @brief “搜索单词”按钮，调整到搜索函数
 */
void WordsLearning::on_searchWordBtn_clicked()
{
    if (selectedButton)
    {
        searchWord();
    }
}

/**
 * @brief 根据选择的单词本，选择不同的表搜索单词
 */
void WordsLearning::searchWord()
{
    QString searchWord = ui->searchLineEdit->text();

    QString queryStr = QString("SELECT word, pronounciation, translation FROM %1 WHERE word = :word").arg(currentTableName);

    // 使用QSqlQuery准备查询
    QSqlQuery query;
    query.prepare(queryStr);
    query.bindValue(":word", searchWord);

    // 执行查询
    if (query.exec())
    {
        if (query.next())
        {
            // 如果找到匹配的单词，获取它的数据
            QString word = query.value(0).toString();
            QString pronounciation = query.value(1).toString();
            QString translation = query.value(2).toString();

            // 显示单词卡并设置数据
            card.setSearchData(word, pronounciation, translation);
            card.show();
        }
        else
        {
            // 如果没有找到匹配的单词，提示用户
            QMessageBox::information(this, "未找到", "未找到单词：" + searchWord);
        }
    }
    else
    {
        QMessageBox::critical(this, "错误", "查询数据库时发生错误：" + query.lastError().text());
    }
}

/**
 * @brief 根据选择的单词本，打开不同的数据库
 */
void WordsLearning::on_toLearnBtn_clicked()
{
    if (selectedButton)
    {
        if (selectedButton == ui->CET4WordsBtn)
        {
            // 打开四级单词数据库
            openSQLCET4();
            currentTableName = "wordsCET4";
        }
        else if (selectedButton == ui->CET6WordsBtn)
        {
            // 打开六级单词数据库
            openSQLCET6();
            currentTableName = "wordsCET6";
        }
        else if (selectedButton == ui->rememberWordsBtn)
        {
            // 打开熟词数据库
            openSQLFamiliar();
            currentTableName = "wordsFamiliar";
        }
    }
    else
    {
        // 如果没有选中任何按钮
        QMessageBox::information(this, "提示", "请先选择一本词汇表！");
    }
}

/**
 * @brief 返回 选择单词本的按钮
 */
void WordsLearning::on_returnWordsBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}




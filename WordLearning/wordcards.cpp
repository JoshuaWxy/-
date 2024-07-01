#include "wordcards.h"
#include "ui_wordcards.h"

#include <QMessageBox>

wordCards::wordCards(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wordCards)
{
    ui->setupUi(this);

    // 初始化时设置默认显示的页面
    ui->stackedWidget->setCurrentIndex(0);
    ui->wordLcdNumber->hide();
    ui->tipsLineEdit->hide();

    // 创建计时器并初始化
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &wordCards::updateCountdown);
    remainingTime = 15;
    isCountdownRunning = false;
}

wordCards::~wordCards()
{
    delete timer;
    delete ui;
}

/**
 * @brief 单词界面与翻译界面 切换按钮
 */
void wordCards::on_explainBtn_clicked()
{
    int currentIndex = ui->stackedWidget->currentIndex(); // 获取当前索引

    if (currentIndex == 0)
    {
        ui->stackedWidget->setCurrentIndex(1); // 如果当前索引是0，改为1
    }
    else if (currentIndex == 1)
    {
        ui->stackedWidget->setCurrentIndex(0); // 如果当前索引是1，改为0
    }
}

/**
 * @brief 关闭事件，发射信号到WordsLearning处理
 */
void wordCards::closeEvent(QCloseEvent *event)
{
    emit cardClosed();          // 在窗口关闭时发出信号
    QWidget::closeEvent(event); // 调用基类的关闭事件处理函数
}

/**
 * @brief 翻译界面是否显示单词 按钮
 */
void wordCards::on_wordVisibleCheckBox_clicked(bool checked)
{
    ui->wordLabelP2->setVisible(checked);
    ui->wordLineEditP2->setVisible(checked);
}

/**
 * @brief 函数接口：设置单词、发音和翻译到wordCards的学习页面
 * @param word, pronounciation, translation  单词、发音和翻译
 */
void wordCards::setData(const QString &word, const QString &pronounciation, const QString &translation)
{
    setWindowTitle("单词卡");
    ui->wordLineEditP1->setText(word);
    ui->wordLineEditP2->setText(word);
    ui->pronounciationLineEdit->setText(pronounciation);
    ui->translationTextEdit->setText(translation);

    ui->wordLineEditP1->setReadOnly(true);
    ui->wordLineEditP2->setReadOnly(true);
    ui->pronounciationLineEdit->setReadOnly(true);
    ui->translationTextEdit->setReadOnly(true);

    ui->wordVisibleCheckBox->show();
    ui->splitter->show();
    ui->tickingCheckBox->show();
}

/**
 * @brief 函数接口：设置单词、发音和翻译到wordCards的查词页面
 * @param word, pronounciation, translation  单词、发音和翻译
 */
void wordCards::setSearchData(const QString &word, const QString &pronounciation, const QString &translation)
{
    setWindowTitle("查找单词");
    ui->wordLineEditP1->setText(word);
    ui->wordLineEditP2->setText(word);
    ui->pronounciationLineEdit->setText(pronounciation);
    ui->translationTextEdit->setText(translation);

    ui->wordLineEditP1->setReadOnly(true);
    ui->wordLineEditP2->setReadOnly(true);
    ui->pronounciationLineEdit->setReadOnly(true);
    ui->translationTextEdit->setReadOnly(true);

    ui->wordVisibleCheckBox->hide();
    ui->tickingCheckBox->hide();
    ui->stackedWidget->setCurrentIndex(1);
    ui->splitter->hide();
}

/**
 * @brief 函数接口：设置 下一词按钮 不可见
 */
void wordCards::setDownBtn()
{
    ui->downBtn->setChecked(false);
}

/**
 * @brief 函数接口：重置计时器
 */
void wordCards::resetTickingCheckBox()
{
    ui->tickingCheckBox->setChecked(false);
    ui->wordLcdNumber->hide();
    ui->tipsLineEdit->hide();

    //重置计时器
    stopCountdown();
    isOneRoundFinished = true; // 标记计时完成
}

/**
 * @brief 点击忘记按钮后，设置不可见并切换到翻译页面
 */
void wordCards::forgotToTranslation()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->forgotBtn->setEnabled(false);
    ui->rememberBtn->setEnabled(false);
}

/**
 * @brief 重置 忘记按钮 可见
 */
void wordCards::restoreForgotBtn()
{
    ui->forgotBtn->setEnabled(true);
}

/**
 * @brief 重置 忘记按钮 可见
 */
void wordCards::toLearnWordPage()
{
    ui->stackedWidget->setCurrentIndex(0);
}

/**
 * @brief 开始计时 函数
 */
void wordCards::startCountdown()
{
    if (!isCountdownRunning)
    {
        remainingTime = 15;     // 重置倒计时时间
            timer->start(1000); // 每秒触发一次timeout信号
            isCountdownRunning = true;
    }
}

/**
 * @brief 停止计时 函数
 */
void wordCards::stopCountdown()
{
    if (isCountdownRunning)
    {
        timer->stop();
        isCountdownRunning = false;
    }
}

/**
 * @brief 上一词 按钮，发射信号到WordsLearning处理
 */
void wordCards::on_upBtn_clicked()
{
    emit do_upBtn_clicked();
    ui->rememberBtn->setEnabled(true);
}

/**
 * @brief 下一词 按钮，发射信号到WordsLearning处理。进入计时模式后，重置计时器
 */
void wordCards::on_downBtn_clicked()
{
    emit do_downBtn_clicked();
    ui->rememberBtn->setEnabled(true);
    if (isTickingMode)
    {
        remainingTime = 15;         // 重置倒计时

        isOneRoundFinished = true;  // 设置为true，以便开始新的倒计时
        newRoundCountdown();
    }
}

/**
 * @brief 忘记了 按钮，发射信号到WordsLearning处理。进入计时模式后，重置计时器
 */
void wordCards::on_forgotBtn_clicked()
{
    emit do_forgotBtn_clicked();
    if (isTickingMode)
    {
        stopCountdown();
        // 重置isRememberBtnClicked标志，防止在停止计时后意外加分
        isRememberBtnClicked = false;
        ui->rememberBtn->setEnabled(false);
    }
}

/**
 * @brief 记住了 按钮，普通模式发射信号到WordsLearning处理。计时模式根据倒计时处理按钮
 */
void wordCards::on_rememberBtn_clicked()
{
    if (!isTickingMode)
    {
        emit do_rememberBtn_clicked();
    }
    else
    {
        // 只有在倒计时运行时并且剩余时间在5秒到0秒之间才设置标志
        if (isCountdownRunning && remainingTime <= 15 && remainingTime > 0)
            isRememberBtnClicked = true;
    }
}

/**
 * @brief 计时模式 勾选按钮，根据是否勾选设置不同的状态
 */
void wordCards::on_tickingCheckBox_clicked(bool checked)
{
    if (checked)
    {
        isTickingMode = true;
        ui->stackedWidget->setCurrentIndex(0);
        ui->tipsLineEdit->show();

        ui->wordLcdNumber->show();
        ui->upBtn->hide();

        restoreForgotBtn();
        startCountdown();
    }
    else
    {
        isTickingMode = false;
        ui->tipsLineEdit->hide();

        ui->wordLcdNumber->hide();
        ui->upBtn->show();

        restoreForgotBtn();
        stopCountdown();
    }
}

/**
 * @brief 更新计时器
 */
void wordCards::updateCountdown()
{
    if (remainingTime > 0 && isCountdownRunning)
    {
        ui->wordLcdNumber->display(QString::number(remainingTime));
        remainingTime--;

        // 检查是否在5秒内点击了remember按钮
        if (remainingTime >= 9 && isRememberBtnClicked)
        {
            remainingTime = 15;             // 重置倒计时
            isRememberBtnClicked = false;   // 重置按钮点击状态
            emit integrateAdd2();
        }
        // 检查是否在10秒到0秒内点击了remember按钮
        else if (remainingTime <= 8 && remainingTime > 0 && isRememberBtnClicked)
        {
            remainingTime = 15;             // 重置倒计时
            isRememberBtnClicked = false;   // 重置按钮点击状态
            emit integrateAdd1();
        }
        // 如果倒计时结束
        else if (remainingTime == 0)
        {
            stopCountdown();
            isOneRoundFinished = true;      // 标记第一轮计时完成
            emit do_forgotBtn_clicked();
        }
    }
}

/**
 * @brief 新一轮计时
 */
void wordCards::newRoundCountdown()
{
    if (isOneRoundFinished)
    {
        startCountdown();                   // 开始新的倒计时
        isOneRoundFinished = false;         // 重置第一轮完成的标志
    }
}

/**
 * @brief 返回 按钮，发射信号到WordsLearning处理
 */
void wordCards::on_BackBtn_clicked()
{
    close();    // 调用close()方法，发送一个关闭事件给窗口
}


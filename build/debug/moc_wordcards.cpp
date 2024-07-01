/****************************************************************************
** Meta object code from reading C++ file 'wordcards.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../WordLearning/wordcards.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wordcards.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_wordCards_t {
    const uint offsetsAndSize[38];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_wordCards_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_wordCards_t qt_meta_stringdata_wordCards = {
    {
QT_MOC_LITERAL(0, 9), // "wordCards"
QT_MOC_LITERAL(10, 10), // "cardClosed"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 16), // "do_upBtn_clicked"
QT_MOC_LITERAL(39, 18), // "do_downBtn_clicked"
QT_MOC_LITERAL(58, 20), // "do_forgotBtn_clicked"
QT_MOC_LITERAL(79, 22), // "do_rememberBtn_clicked"
QT_MOC_LITERAL(102, 13), // "integrateAdd1"
QT_MOC_LITERAL(116, 13), // "integrateAdd2"
QT_MOC_LITERAL(130, 21), // "on_explainBtn_clicked"
QT_MOC_LITERAL(152, 30), // "on_wordVisibleCheckBox_clicked"
QT_MOC_LITERAL(183, 7), // "checked"
QT_MOC_LITERAL(191, 16), // "on_upBtn_clicked"
QT_MOC_LITERAL(208, 18), // "on_downBtn_clicked"
QT_MOC_LITERAL(227, 20), // "on_forgotBtn_clicked"
QT_MOC_LITERAL(248, 22), // "on_rememberBtn_clicked"
QT_MOC_LITERAL(271, 26), // "on_tickingCheckBox_clicked"
QT_MOC_LITERAL(298, 15), // "updateCountdown"
QT_MOC_LITERAL(314, 18) // "on_BackBtn_clicked"

    },
    "wordCards\0cardClosed\0\0do_upBtn_clicked\0"
    "do_downBtn_clicked\0do_forgotBtn_clicked\0"
    "do_rememberBtn_clicked\0integrateAdd1\0"
    "integrateAdd2\0on_explainBtn_clicked\0"
    "on_wordVisibleCheckBox_clicked\0checked\0"
    "on_upBtn_clicked\0on_downBtn_clicked\0"
    "on_forgotBtn_clicked\0on_rememberBtn_clicked\0"
    "on_tickingCheckBox_clicked\0updateCountdown\0"
    "on_BackBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wordCards[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x06,    1 /* Public */,
       3,    0,  111,    2, 0x06,    2 /* Public */,
       4,    0,  112,    2, 0x06,    3 /* Public */,
       5,    0,  113,    2, 0x06,    4 /* Public */,
       6,    0,  114,    2, 0x06,    5 /* Public */,
       7,    0,  115,    2, 0x06,    6 /* Public */,
       8,    0,  116,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,  117,    2, 0x08,    8 /* Private */,
      10,    1,  118,    2, 0x08,    9 /* Private */,
      12,    0,  121,    2, 0x08,   11 /* Private */,
      13,    0,  122,    2, 0x08,   12 /* Private */,
      14,    0,  123,    2, 0x08,   13 /* Private */,
      15,    0,  124,    2, 0x08,   14 /* Private */,
      16,    1,  125,    2, 0x08,   15 /* Private */,
      17,    0,  128,    2, 0x08,   17 /* Private */,
      18,    0,  129,    2, 0x08,   18 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void wordCards::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<wordCards *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cardClosed(); break;
        case 1: _t->do_upBtn_clicked(); break;
        case 2: _t->do_downBtn_clicked(); break;
        case 3: _t->do_forgotBtn_clicked(); break;
        case 4: _t->do_rememberBtn_clicked(); break;
        case 5: _t->integrateAdd1(); break;
        case 6: _t->integrateAdd2(); break;
        case 7: _t->on_explainBtn_clicked(); break;
        case 8: _t->on_wordVisibleCheckBox_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->on_upBtn_clicked(); break;
        case 10: _t->on_downBtn_clicked(); break;
        case 11: _t->on_forgotBtn_clicked(); break;
        case 12: _t->on_rememberBtn_clicked(); break;
        case 13: _t->on_tickingCheckBox_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->updateCountdown(); break;
        case 15: _t->on_BackBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (wordCards::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&wordCards::cardClosed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (wordCards::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&wordCards::do_upBtn_clicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (wordCards::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&wordCards::do_downBtn_clicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (wordCards::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&wordCards::do_forgotBtn_clicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (wordCards::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&wordCards::do_rememberBtn_clicked)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (wordCards::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&wordCards::integrateAdd1)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (wordCards::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&wordCards::integrateAdd2)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject wordCards::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_wordCards.offsetsAndSize,
    qt_meta_data_wordCards,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_wordCards_t
, QtPrivate::TypeAndForceComplete<wordCards, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *wordCards::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wordCards::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_wordCards.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int wordCards::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void wordCards::cardClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void wordCards::do_upBtn_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void wordCards::do_downBtn_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void wordCards::do_forgotBtn_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void wordCards::do_rememberBtn_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void wordCards::integrateAdd1()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void wordCards::integrateAdd2()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'showsharedscreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../showsharedscreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'showsharedscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShowSharedScreen_t {
    const uint offsetsAndSize[24];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ShowSharedScreen_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ShowSharedScreen_t qt_meta_stringdata_ShowSharedScreen = {
    {
QT_MOC_LITERAL(0, 16), // "ShowSharedScreen"
QT_MOC_LITERAL(17, 4), // "info"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 12), // "QHostAddress"
QT_MOC_LITERAL(36, 12), // "groupAddress"
QT_MOC_LITERAL(49, 17), // "QNetworkInterface"
QT_MOC_LITERAL(67, 5), // "iface"
QT_MOC_LITERAL(73, 9), // "groupPort"
QT_MOC_LITERAL(83, 10), // "stopShared"
QT_MOC_LITERAL(94, 20), // "enableBtnJoinMeeting"
QT_MOC_LITERAL(115, 21), // "do_multicastGroupInfo"
QT_MOC_LITERAL(137, 13) // "do_readyClean"

    },
    "ShowSharedScreen\0info\0\0QHostAddress\0"
    "groupAddress\0QNetworkInterface\0iface\0"
    "groupPort\0stopShared\0enableBtnJoinMeeting\0"
    "do_multicastGroupInfo\0do_readyClean"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShowSharedScreen[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   44,    2, 0x06,    1 /* Public */,
       8,    0,   51,    2, 0x06,    5 /* Public */,
       9,    0,   52,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    3,   53,    2, 0x0a,    7 /* Public */,
      11,    0,   60,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::UShort,    4,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::UShort,    4,    6,    7,
    QMetaType::Void,

       0        // eod
};

void ShowSharedScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShowSharedScreen *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->info((*reinterpret_cast< std::add_pointer_t<QHostAddress>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QNetworkInterface>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[3]))); break;
        case 1: _t->stopShared(); break;
        case 2: _t->enableBtnJoinMeeting(); break;
        case 3: _t->do_multicastGroupInfo((*reinterpret_cast< std::add_pointer_t<QHostAddress>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QNetworkInterface>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[3]))); break;
        case 4: _t->do_readyClean(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkInterface >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkInterface >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShowSharedScreen::*)(const QHostAddress & , const QNetworkInterface & , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShowSharedScreen::info)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ShowSharedScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShowSharedScreen::stopShared)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ShowSharedScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShowSharedScreen::enableBtnJoinMeeting)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ShowSharedScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ShowSharedScreen.offsetsAndSize,
    qt_meta_data_ShowSharedScreen,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ShowSharedScreen_t
, QtPrivate::TypeAndForceComplete<ShowSharedScreen, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QHostAddress &, std::false_type>, QtPrivate::TypeAndForceComplete<const QNetworkInterface &, std::false_type>, QtPrivate::TypeAndForceComplete<quint16, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QHostAddress &, std::false_type>, QtPrivate::TypeAndForceComplete<const QNetworkInterface &, std::false_type>, QtPrivate::TypeAndForceComplete<quint16, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ShowSharedScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShowSharedScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShowSharedScreen.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ShowSharedScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ShowSharedScreen::info(const QHostAddress & _t1, const QNetworkInterface & _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ShowSharedScreen::stopShared()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ShowSharedScreen::enableBtnJoinMeeting()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

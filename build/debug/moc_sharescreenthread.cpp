/****************************************************************************
** Meta object code from reading C++ file 'sharescreenthread.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../sharescreenthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sharescreenthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShareScreenThread_t {
    const uint offsetsAndSize[20];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ShareScreenThread_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ShareScreenThread_t qt_meta_stringdata_ShareScreenThread = {
    {
QT_MOC_LITERAL(0, 17), // "ShareScreenThread"
QT_MOC_LITERAL(18, 11), // "stateChange"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 10), // "cleanLabel"
QT_MOC_LITERAL(42, 7), // "getInfo"
QT_MOC_LITERAL(50, 12), // "QHostAddress"
QT_MOC_LITERAL(63, 12), // "groupAddress"
QT_MOC_LITERAL(76, 17), // "QNetworkInterface"
QT_MOC_LITERAL(94, 5), // "iface"
QT_MOC_LITERAL(100, 9) // "groupPort"

    },
    "ShareScreenThread\0stateChange\0\0"
    "cleanLabel\0getInfo\0QHostAddress\0"
    "groupAddress\0QNetworkInterface\0iface\0"
    "groupPort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShareScreenThread[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,
       3,    0,   33,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    3,   34,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7, QMetaType::UShort,    6,    8,    9,

       0        // eod
};

void ShareScreenThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShareScreenThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stateChange(); break;
        case 1: _t->cleanLabel(); break;
        case 2: _t->getInfo((*reinterpret_cast< std::add_pointer_t<QHostAddress>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QNetworkInterface>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
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
            using _t = void (ShareScreenThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareScreenThread::stateChange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ShareScreenThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShareScreenThread::cleanLabel)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ShareScreenThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_ShareScreenThread.offsetsAndSize,
    qt_meta_data_ShareScreenThread,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ShareScreenThread_t
, QtPrivate::TypeAndForceComplete<ShareScreenThread, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QHostAddress &, std::false_type>, QtPrivate::TypeAndForceComplete<const QNetworkInterface &, std::false_type>, QtPrivate::TypeAndForceComplete<quint16, std::false_type>


>,
    nullptr
} };


const QMetaObject *ShareScreenThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShareScreenThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShareScreenThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ShareScreenThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ShareScreenThread::stateChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ShareScreenThread::cleanLabel()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

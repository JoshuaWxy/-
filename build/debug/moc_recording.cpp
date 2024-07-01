/****************************************************************************
** Meta object code from reading C++ file 'recording.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../recording.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recording.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Recording_t {
    const uint offsetsAndSize[26];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Recording_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Recording_t qt_meta_stringdata_Recording = {
    {
QT_MOC_LITERAL(0, 9), // "Recording"
QT_MOC_LITERAL(10, 16), // "recordingSetting"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 4), // "rate"
QT_MOC_LITERAL(33, 4), // "size"
QT_MOC_LITERAL(38, 7), // "qyulity"
QT_MOC_LITERAL(46, 29), // "on_but_startRecording_clicked"
QT_MOC_LITERAL(76, 12), // "StateChanged"
QT_MOC_LITERAL(89, 21), // "ReadThread::PlayState"
QT_MOC_LITERAL(111, 5), // "state"
QT_MOC_LITERAL(117, 11), // "hadSavePath"
QT_MOC_LITERAL(129, 10), // "do_timeout"
QT_MOC_LITERAL(140, 20) // "on_btn_close_clicked"

    },
    "Recording\0recordingSetting\0\0rate\0size\0"
    "qyulity\0on_but_startRecording_clicked\0"
    "StateChanged\0ReadThread::PlayState\0"
    "state\0hadSavePath\0do_timeout\0"
    "on_btn_close_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Recording[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   57,    2, 0x08,    5 /* Private */,
       7,    1,   58,    2, 0x08,    6 /* Private */,
      10,    0,   61,    2, 0x08,    8 /* Private */,
      11,    0,   62,    2, 0x08,    9 /* Private */,
      12,    0,   63,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Recording::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Recording *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->recordingSetting((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->on_but_startRecording_clicked(); break;
        case 2: _t->StateChanged((*reinterpret_cast< std::add_pointer_t<ReadThread::PlayState>>(_a[1]))); break;
        case 3: { bool _r = _t->hadSavePath();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->do_timeout(); break;
        case 5: _t->on_btn_close_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Recording::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Recording::recordingSetting)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Recording::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Recording.offsetsAndSize,
    qt_meta_data_Recording,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Recording_t
, QtPrivate::TypeAndForceComplete<Recording, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ReadThread::PlayState, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Recording::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Recording::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Recording.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Recording::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Recording::recordingSetting(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

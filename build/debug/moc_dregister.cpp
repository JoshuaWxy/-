/****************************************************************************
** Meta object code from reading C++ file 'dregister.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MyLogin/dregister.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dregister.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dregister_t {
    const uint offsetsAndSize[22];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Dregister_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Dregister_t qt_meta_stringdata_Dregister = {
    {
QT_MOC_LITERAL(0, 9), // "Dregister"
QT_MOC_LITERAL(10, 19), // "on_Next1Btn_clicked"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 19), // "on_back1Btn_clicked"
QT_MOC_LITERAL(51, 19), // "on_Next2Btn_clicked"
QT_MOC_LITERAL(71, 19), // "on_back2Btn_clicked"
QT_MOC_LITERAL(91, 20), // "on_finishBtn_clicked"
QT_MOC_LITERAL(112, 20), // "on_returnBtn_clicked"
QT_MOC_LITERAL(133, 6), // "myslot"
QT_MOC_LITERAL(140, 19), // "on_emailBtn_clicked"
QT_MOC_LITERAL(160, 16) // "on_fwBtn_clicked"

    },
    "Dregister\0on_Next1Btn_clicked\0\0"
    "on_back1Btn_clicked\0on_Next2Btn_clicked\0"
    "on_back2Btn_clicked\0on_finishBtn_clicked\0"
    "on_returnBtn_clicked\0myslot\0"
    "on_emailBtn_clicked\0on_fwBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dregister[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dregister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dregister *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Next1Btn_clicked(); break;
        case 1: _t->on_back1Btn_clicked(); break;
        case 2: _t->on_Next2Btn_clicked(); break;
        case 3: _t->on_back2Btn_clicked(); break;
        case 4: _t->on_finishBtn_clicked(); break;
        case 5: _t->on_returnBtn_clicked(); break;
        case 6: _t->myslot(); break;
        case 7: _t->on_emailBtn_clicked(); break;
        case 8: _t->on_fwBtn_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject Dregister::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Dregister.offsetsAndSize,
    qt_meta_data_Dregister,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Dregister_t
, QtPrivate::TypeAndForceComplete<Dregister, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Dregister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dregister::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dregister.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dregister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

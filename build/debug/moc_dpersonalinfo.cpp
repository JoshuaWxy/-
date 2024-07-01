/****************************************************************************
** Meta object code from reading C++ file 'dpersonalinfo.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MyLogin/dpersonalinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dpersonalinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DpersonalInfo_t {
    const uint offsetsAndSize[14];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DpersonalInfo_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DpersonalInfo_t qt_meta_stringdata_DpersonalInfo = {
    {
QT_MOC_LITERAL(0, 13), // "DpersonalInfo"
QT_MOC_LITERAL(14, 7), // "getInfo"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(45, 18), // "on_saveBtn_clicked"
QT_MOC_LITERAL(64, 18), // "on_backBtn_clicked"
QT_MOC_LITERAL(83, 22) // "on_choosetxBtn_clicked"

    },
    "DpersonalInfo\0getInfo\0\0on_pushButton_clicked\0"
    "on_saveBtn_clicked\0on_backBtn_clicked\0"
    "on_choosetxBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DpersonalInfo[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x0a,    1 /* Public */,
       3,    0,   49,    2, 0x08,    4 /* Private */,
       4,    0,   50,    2, 0x08,    5 /* Private */,
       5,    0,   51,    2, 0x08,    6 /* Private */,
       6,    0,   52,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DpersonalInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DpersonalInfo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->getInfo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_saveBtn_clicked(); break;
        case 3: _t->on_backBtn_clicked(); break;
        case 4: _t->on_choosetxBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject DpersonalInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DpersonalInfo.offsetsAndSize,
    qt_meta_data_DpersonalInfo,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DpersonalInfo_t
, QtPrivate::TypeAndForceComplete<DpersonalInfo, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *DpersonalInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DpersonalInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DpersonalInfo.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DpersonalInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

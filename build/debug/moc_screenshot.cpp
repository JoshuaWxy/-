/****************************************************************************
** Meta object code from reading C++ file 'screenshot.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../screenshot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screenshot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScreenShot_t {
    const uint offsetsAndSize[28];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ScreenShot_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ScreenShot_t qt_meta_stringdata_ScreenShot = {
    {
QT_MOC_LITERAL(0, 10), // "ScreenShot"
QT_MOC_LITERAL(11, 10), // "playPixmap"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 6), // "pixmap"
QT_MOC_LITERAL(30, 12), // "on_triggered"
QT_MOC_LITERAL(43, 8), // "QAction*"
QT_MOC_LITERAL(52, 6), // "action"
QT_MOC_LITERAL(59, 10), // "on_newGrab"
QT_MOC_LITERAL(70, 12), // "on_saveImage"
QT_MOC_LITERAL(83, 13), // "on_clearImage"
QT_MOC_LITERAL(97, 13), // "on_selectRect"
QT_MOC_LITERAL(111, 4), // "rect"
QT_MOC_LITERAL(116, 10), // "grabPixmap"
QT_MOC_LITERAL(127, 12) // "on_getPixmap"

    },
    "ScreenShot\0playPixmap\0\0pixmap\0"
    "on_triggered\0QAction*\0action\0on_newGrab\0"
    "on_saveImage\0on_clearImage\0on_selectRect\0"
    "rect\0grabPixmap\0on_getPixmap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenShot[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   65,    2, 0x08,    3 /* Private */,
       7,    0,   68,    2, 0x08,    5 /* Private */,
       8,    0,   69,    2, 0x08,    6 /* Private */,
       9,    0,   70,    2, 0x08,    7 /* Private */,
      10,    1,   71,    2, 0x08,    8 /* Private */,
      12,    1,   74,    2, 0x08,   10 /* Private */,
      13,    1,   77,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect,   11,
    QMetaType::Void, QMetaType::QRect,   11,
    QMetaType::Void, QMetaType::QPixmap,    2,

       0        // eod
};

void ScreenShot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScreenShot *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->playPixmap((*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[1]))); break;
        case 1: _t->on_triggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 2: _t->on_newGrab(); break;
        case 3: _t->on_saveImage(); break;
        case 4: _t->on_clearImage(); break;
        case 5: _t->on_selectRect((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1]))); break;
        case 6: _t->grabPixmap((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1]))); break;
        case 7: _t->on_getPixmap((*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScreenShot::*)(const QPixmap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenShot::playPixmap)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ScreenShot::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ScreenShot.offsetsAndSize,
    qt_meta_data_ScreenShot,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ScreenShot_t
, QtPrivate::TypeAndForceComplete<ScreenShot, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAction *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QRect, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QRect, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>


>,
    nullptr
} };


const QMetaObject *ScreenShot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenShot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenShot.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ScreenShot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ScreenShot::playPixmap(const QPixmap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

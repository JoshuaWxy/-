/****************************************************************************
** Meta object code from reading C++ file 'dlogin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MyLogin/dlogin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dlogin_t {
    const uint offsetsAndSize[24];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Dlogin_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Dlogin_t qt_meta_stringdata_Dlogin = {
    {
QT_MOC_LITERAL(0, 6), // "Dlogin"
QT_MOC_LITERAL(7, 7), // "stuInfo"
QT_MOC_LITERAL(15, 0), // ""
QT_MOC_LITERAL(16, 15), // "LoginToMainInfo"
QT_MOC_LITERAL(32, 14), // "DpersonalInfo*"
QT_MOC_LITERAL(47, 14), // "d_dpersonalIfo"
QT_MOC_LITERAL(62, 18), // "on_miniBtn_clicked"
QT_MOC_LITERAL(81, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(101, 22), // "on_registerBtn_clicked"
QT_MOC_LITERAL(124, 19), // "on_loginBtn_clicked"
QT_MOC_LITERAL(144, 20), // "on_forgetBtn_clicked"
QT_MOC_LITERAL(165, 10) // "printfText"

    },
    "Dlogin\0stuInfo\0\0LoginToMainInfo\0"
    "DpersonalInfo*\0d_dpersonalIfo\0"
    "on_miniBtn_clicked\0on_closeBtn_clicked\0"
    "on_registerBtn_clicked\0on_loginBtn_clicked\0"
    "on_forgetBtn_clicked\0printfText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dlogin[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x06,    1 /* Public */,
       3,    1,   67,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   70,    2, 0x08,    6 /* Private */,
       7,    0,   71,    2, 0x08,    7 /* Private */,
       8,    0,   72,    2, 0x08,    8 /* Private */,
       9,    0,   73,    2, 0x08,    9 /* Private */,
      10,    0,   74,    2, 0x08,   10 /* Private */,
      11,    0,   75,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dlogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dlogin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stuInfo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->LoginToMainInfo((*reinterpret_cast< std::add_pointer_t<DpersonalInfo*>>(_a[1]))); break;
        case 2: _t->on_miniBtn_clicked(); break;
        case 3: _t->on_closeBtn_clicked(); break;
        case 4: _t->on_registerBtn_clicked(); break;
        case 5: _t->on_loginBtn_clicked(); break;
        case 6: _t->on_forgetBtn_clicked(); break;
        case 7: _t->printfText(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< DpersonalInfo* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Dlogin::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dlogin::stuInfo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Dlogin::*)(DpersonalInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dlogin::LoginToMainInfo)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Dlogin::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Dlogin.offsetsAndSize,
    qt_meta_data_Dlogin,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Dlogin_t
, QtPrivate::TypeAndForceComplete<Dlogin, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<DpersonalInfo *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Dlogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dlogin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dlogin.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dlogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Dlogin::stuInfo(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dlogin::LoginToMainInfo(DpersonalInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

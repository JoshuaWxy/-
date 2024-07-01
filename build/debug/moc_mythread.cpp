/****************************************************************************
** Meta object code from reading C++ file 'mythread.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mythread.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mythread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataSendProcess_t {
    const uint offsetsAndSize[10];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DataSendProcess_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DataSendProcess_t qt_meta_stringdata_DataSendProcess = {
    {
QT_MOC_LITERAL(0, 15), // "DataSendProcess"
QT_MOC_LITERAL(16, 15), // "picDataFinished"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 18), // "streamDataFinished"
QT_MOC_LITERAL(52, 10) // "streamData"

    },
    "DataSendProcess\0picDataFinished\0\0"
    "streamDataFinished\0streamData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataSendProcess[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,
       3,    1,   29,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    4,

       0        // eod
};

void DataSendProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataSendProcess *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->picDataFinished((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->streamDataFinished((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataSendProcess::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataSendProcess::picDataFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataSendProcess::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataSendProcess::streamDataFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DataSendProcess::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataSendProcess.offsetsAndSize,
    qt_meta_data_DataSendProcess,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DataSendProcess_t
, QtPrivate::TypeAndForceComplete<DataSendProcess, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>



>,
    nullptr
} };


const QMetaObject *DataSendProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataSendProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataSendProcess.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataSendProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DataSendProcess::picDataFinished(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataSendProcess::streamDataFinished(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_DataReceivedProcess_t {
    const uint offsetsAndSize[8];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DataReceivedProcess_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DataReceivedProcess_t qt_meta_stringdata_DataReceivedProcess = {
    {
QT_MOC_LITERAL(0, 19), // "DataReceivedProcess"
QT_MOC_LITERAL(20, 8), // "finished"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 11) // "QByteArray&"

    },
    "DataReceivedProcess\0finished\0\0QByteArray&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataReceivedProcess[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void DataReceivedProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataReceivedProcess *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< std::add_pointer_t<QByteArray&>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataReceivedProcess::*)(QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataReceivedProcess::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DataReceivedProcess::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataReceivedProcess.offsetsAndSize,
    qt_meta_data_DataReceivedProcess,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DataReceivedProcess_t
, QtPrivate::TypeAndForceComplete<DataReceivedProcess, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray &, std::false_type>



>,
    nullptr
} };


const QMetaObject *DataReceivedProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataReceivedProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataReceivedProcess.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataReceivedProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void DataReceivedProcess::finished(QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_DataImgLoadProcess_t {
    const uint offsetsAndSize[16];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DataImgLoadProcess_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DataImgLoadProcess_t qt_meta_stringdata_DataImgLoadProcess = {
    {
QT_MOC_LITERAL(0, 18), // "DataImgLoadProcess"
QT_MOC_LITERAL(19, 13), // "imageFinished"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 7), // "QImage&"
QT_MOC_LITERAL(42, 1), // "d"
QT_MOC_LITERAL(44, 13), // "videoFinished"
QT_MOC_LITERAL(58, 11), // "pixFinished"
QT_MOC_LITERAL(70, 3) // "pix"

    },
    "DataImgLoadProcess\0imageFinished\0\0"
    "QImage&\0d\0videoFinished\0pixFinished\0"
    "pix"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataImgLoadProcess[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,
       5,    1,   35,    2, 0x06,    3 /* Public */,
       6,    1,   38,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QPixmap,    7,

       0        // eod
};

void DataImgLoadProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataImgLoadProcess *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->imageFinished((*reinterpret_cast< std::add_pointer_t<QImage&>>(_a[1]))); break;
        case 1: _t->videoFinished((*reinterpret_cast< std::add_pointer_t<QImage&>>(_a[1]))); break;
        case 2: _t->pixFinished((*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataImgLoadProcess::*)(QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataImgLoadProcess::imageFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataImgLoadProcess::*)(QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataImgLoadProcess::videoFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataImgLoadProcess::*)(const QPixmap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataImgLoadProcess::pixFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject DataImgLoadProcess::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataImgLoadProcess.offsetsAndSize,
    qt_meta_data_DataImgLoadProcess,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DataImgLoadProcess_t
, QtPrivate::TypeAndForceComplete<DataImgLoadProcess, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>



>,
    nullptr
} };


const QMetaObject *DataImgLoadProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataImgLoadProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataImgLoadProcess.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataImgLoadProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DataImgLoadProcess::imageFinished(QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataImgLoadProcess::videoFinished(QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataImgLoadProcess::pixFinished(const QPixmap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_CaptureImgSaveProcess_t {
    const uint offsetsAndSize[8];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CaptureImgSaveProcess_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CaptureImgSaveProcess_t qt_meta_stringdata_CaptureImgSaveProcess = {
    {
QT_MOC_LITERAL(0, 21), // "CaptureImgSaveProcess"
QT_MOC_LITERAL(22, 14), // "captureImgData"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 11) // "QByteArray&"

    },
    "CaptureImgSaveProcess\0captureImgData\0"
    "\0QByteArray&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CaptureImgSaveProcess[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void CaptureImgSaveProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CaptureImgSaveProcess *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->captureImgData((*reinterpret_cast< std::add_pointer_t<QByteArray&>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CaptureImgSaveProcess::*)(QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CaptureImgSaveProcess::captureImgData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CaptureImgSaveProcess::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CaptureImgSaveProcess.offsetsAndSize,
    qt_meta_data_CaptureImgSaveProcess,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CaptureImgSaveProcess_t
, QtPrivate::TypeAndForceComplete<CaptureImgSaveProcess, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray &, std::false_type>



>,
    nullptr
} };


const QMetaObject *CaptureImgSaveProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureImgSaveProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CaptureImgSaveProcess.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CaptureImgSaveProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void CaptureImgSaveProcess::captureImgData(QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

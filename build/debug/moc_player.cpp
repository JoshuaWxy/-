/****************************************************************************
** Meta object code from reading C++ file 'player.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PlayVideo/player.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Player_t {
    const uint offsetsAndSize[52];
    char stringdata0[390];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Player_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Player_t qt_meta_stringdata_Player = {
    {
QT_MOC_LITERAL(0, 6), // "Player"
QT_MOC_LITERAL(7, 14), // "itIsFullScreen"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 17), // "itIsNotFullScreen"
QT_MOC_LITERAL(41, 4), // "open"
QT_MOC_LITERAL(46, 4), // "stop"
QT_MOC_LITERAL(51, 4), // "seek"
QT_MOC_LITERAL(56, 7), // "msecond"
QT_MOC_LITERAL(64, 15), // "durationChanged"
QT_MOC_LITERAL(80, 8), // "duration"
QT_MOC_LITERAL(89, 15), // "positionChanged"
QT_MOC_LITERAL(105, 8), // "progress"
QT_MOC_LITERAL(114, 15), // "skip_to_current"
QT_MOC_LITERAL(130, 11), // "video_pause"
QT_MOC_LITERAL(142, 10), // "seekPosion"
QT_MOC_LITERAL(153, 21), // "do_mediaStatusChanged"
QT_MOC_LITERAL(175, 25), // "QMediaPlayer::MediaStatus"
QT_MOC_LITERAL(201, 6), // "status"
QT_MOC_LITERAL(208, 23), // "on_btn_openFile_clicked"
QT_MOC_LITERAL(232, 26), // "on_btn_speedFoward_clicked"
QT_MOC_LITERAL(259, 24), // "on_btn_speedBack_clicked"
QT_MOC_LITERAL(284, 33), // "on_combo_speed_currentTextCha..."
QT_MOC_LITERAL(318, 4), // "arg1"
QT_MOC_LITERAL(323, 25), // "on_btn_fullScreen_clicked"
QT_MOC_LITERAL(349, 21), // "on_btn_volumn_clicked"
QT_MOC_LITERAL(371, 18) // "updatePlayerVolume"

    },
    "Player\0itIsFullScreen\0\0itIsNotFullScreen\0"
    "open\0stop\0seek\0msecond\0durationChanged\0"
    "duration\0positionChanged\0progress\0"
    "skip_to_current\0video_pause\0seekPosion\0"
    "do_mediaStatusChanged\0QMediaPlayer::MediaStatus\0"
    "status\0on_btn_openFile_clicked\0"
    "on_btn_speedFoward_clicked\0"
    "on_btn_speedBack_clicked\0"
    "on_combo_speed_currentTextChanged\0"
    "arg1\0on_btn_fullScreen_clicked\0"
    "on_btn_volumn_clicked\0updatePlayerVolume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Player[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x06,    1 /* Public */,
       3,    0,  123,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  124,    2, 0x08,    3 /* Private */,
       5,    0,  125,    2, 0x08,    4 /* Private */,
       6,    1,  126,    2, 0x08,    5 /* Private */,
       8,    1,  129,    2, 0x08,    7 /* Private */,
      10,    1,  132,    2, 0x08,    9 /* Private */,
      12,    0,  135,    2, 0x08,   11 /* Private */,
      13,    0,  136,    2, 0x08,   12 /* Private */,
      14,    0,  137,    2, 0x08,   13 /* Private */,
      15,    1,  138,    2, 0x08,   14 /* Private */,
      18,    0,  141,    2, 0x08,   16 /* Private */,
      19,    0,  142,    2, 0x08,   17 /* Private */,
      20,    0,  143,    2, 0x08,   18 /* Private */,
      21,    1,  144,    2, 0x08,   19 /* Private */,
      23,    0,  147,    2, 0x08,   21 /* Private */,
      24,    0,  148,    2, 0x08,   22 /* Private */,
      25,    1,  149,    2, 0x08,   23 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Player *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itIsFullScreen(); break;
        case 1: _t->itIsNotFullScreen(); break;
        case 2: _t->open(); break;
        case 3: _t->stop(); break;
        case 4: _t->seek((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->durationChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 6: _t->positionChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 7: _t->skip_to_current(); break;
        case 8: _t->video_pause(); break;
        case 9: _t->seekPosion(); break;
        case 10: _t->do_mediaStatusChanged((*reinterpret_cast< std::add_pointer_t<QMediaPlayer::MediaStatus>>(_a[1]))); break;
        case 11: _t->on_btn_openFile_clicked(); break;
        case 12: _t->on_btn_speedFoward_clicked(); break;
        case 13: _t->on_btn_speedBack_clicked(); break;
        case 14: _t->on_combo_speed_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->on_btn_fullScreen_clicked(); break;
        case 16: _t->on_btn_volumn_clicked(); break;
        case 17: _t->updatePlayerVolume((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Player::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Player::itIsFullScreen)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Player::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Player::itIsNotFullScreen)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Player::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Player.offsetsAndSize,
    qt_meta_data_Player,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Player_t
, QtPrivate::TypeAndForceComplete<Player, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMediaPlayer::MediaStatus, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Player::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Player.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Player::itIsFullScreen()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Player::itIsNotFullScreen()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

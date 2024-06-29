/****************************************************************************
** Meta object code from reading C++ file 'gamewindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../gamewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameWindow_t {
    const uint offsetsAndSize[22];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_GameWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_GameWindow_t qt_meta_stringdata_GameWindow = {
    {
QT_MOC_LITERAL(0, 10), // "GameWindow"
QT_MOC_LITERAL(11, 16), // "backToMainWindow"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 14), // "feedTamagotchi"
QT_MOC_LITERAL(44, 13), // "hugTamagotchi"
QT_MOC_LITERAL(58, 14), // "walkTamagotchi"
QT_MOC_LITERAL(73, 12), // "updateStatus"
QT_MOC_LITERAL(86, 9), // "liveCycle"
QT_MOC_LITERAL(96, 8), // "saveGame"
QT_MOC_LITERAL(105, 10), // "backToMenu"
QT_MOC_LITERAL(116, 16) // "progressBarColor"

    },
    "GameWindow\0backToMainWindow\0\0"
    "feedTamagotchi\0hugTamagotchi\0"
    "walkTamagotchi\0updateStatus\0liveCycle\0"
    "saveGame\0backToMenu\0progressBarColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
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

void GameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->backToMainWindow(); break;
        case 1: _t->feedTamagotchi(); break;
        case 2: _t->hugTamagotchi(); break;
        case 3: _t->walkTamagotchi(); break;
        case 4: _t->updateStatus(); break;
        case 5: _t->liveCycle(); break;
        case 6: _t->saveGame(); break;
        case 7: _t->backToMenu(); break;
        case 8: _t->progressBarColor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameWindow::backToMainWindow)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject GameWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GameWindow.offsetsAndSize,
    qt_meta_data_GameWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_GameWindow_t
, QtPrivate::TypeAndForceComplete<GameWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *GameWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GameWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void GameWindow::backToMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

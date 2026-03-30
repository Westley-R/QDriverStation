/****************************************************************************
** Meta object code from reading C++ file 'SDL_Joysticks.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lib/QJoysticks/src/QJoysticks/SDL_Joysticks.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SDL_Joysticks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN13SDL_JoysticksE_t {};
} // unnamed namespace

template <> constexpr inline auto SDL_Joysticks::qt_create_metaobjectdata<qt_meta_tag_ZN13SDL_JoysticksE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SDL_Joysticks",
        "countChanged",
        "",
        "POVEvent",
        "QJoystickPOVEvent",
        "event",
        "axisEvent",
        "QJoystickAxisEvent",
        "buttonEvent",
        "QJoystickButtonEvent",
        "rumble",
        "QJoystickRumble",
        "request",
        "update",
        "configureJoystick",
        "const SDL_Event*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'countChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'POVEvent'
        QtMocHelpers::SignalData<void(const QJoystickPOVEvent &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Signal 'axisEvent'
        QtMocHelpers::SignalData<void(const QJoystickAxisEvent &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 5 },
        }}),
        // Signal 'buttonEvent'
        QtMocHelpers::SignalData<void(const QJoystickButtonEvent &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 5 },
        }}),
        // Slot 'rumble'
        QtMocHelpers::SlotData<void(const QJoystickRumble &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'configureJoystick'
        QtMocHelpers::SlotData<void(const SDL_Event *)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SDL_Joysticks, qt_meta_tag_ZN13SDL_JoysticksE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SDL_Joysticks::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SDL_JoysticksE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SDL_JoysticksE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13SDL_JoysticksE_t>.metaTypes,
    nullptr
} };

void SDL_Joysticks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SDL_Joysticks *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->POVEvent((*reinterpret_cast<std::add_pointer_t<QJoystickPOVEvent>>(_a[1]))); break;
        case 2: _t->axisEvent((*reinterpret_cast<std::add_pointer_t<QJoystickAxisEvent>>(_a[1]))); break;
        case 3: _t->buttonEvent((*reinterpret_cast<std::add_pointer_t<QJoystickButtonEvent>>(_a[1]))); break;
        case 4: _t->rumble((*reinterpret_cast<std::add_pointer_t<QJoystickRumble>>(_a[1]))); break;
        case 5: _t->update(); break;
        case 6: _t->configureJoystick((*reinterpret_cast<std::add_pointer_t<const SDL_Event*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SDL_Joysticks::*)()>(_a, &SDL_Joysticks::countChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SDL_Joysticks::*)(const QJoystickPOVEvent & )>(_a, &SDL_Joysticks::POVEvent, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SDL_Joysticks::*)(const QJoystickAxisEvent & )>(_a, &SDL_Joysticks::axisEvent, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SDL_Joysticks::*)(const QJoystickButtonEvent & )>(_a, &SDL_Joysticks::buttonEvent, 3))
            return;
    }
}

const QMetaObject *SDL_Joysticks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDL_Joysticks::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SDL_JoysticksE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SDL_Joysticks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SDL_Joysticks::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SDL_Joysticks::POVEvent(const QJoystickPOVEvent & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void SDL_Joysticks::axisEvent(const QJoystickAxisEvent & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void SDL_Joysticks::buttonEvent(const QJoystickButtonEvent & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP

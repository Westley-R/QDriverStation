/****************************************************************************
** Meta object code from reading C++ file 'VirtualJoystick.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lib/QJoysticks/src/QJoysticks/VirtualJoystick.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VirtualJoystick.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15VirtualJoystickE_t {};
} // unnamed namespace

template <> constexpr inline auto VirtualJoystick::qt_create_metaobjectdata<qt_meta_tag_ZN15VirtualJoystickE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VirtualJoystick",
        "enabledChanged",
        "",
        "povEvent",
        "QJoystickPOVEvent",
        "event",
        "axisEvent",
        "QJoystickAxisEvent",
        "buttonEvent",
        "QJoystickButtonEvent",
        "setJoystickID",
        "id",
        "setAxisRange",
        "range",
        "setJoystickEnabled",
        "enabled",
        "setAxisSensibility",
        "sensibility",
        "readAxes",
        "key",
        "pressed",
        "updateAxis",
        "readPOVs",
        "readButtons",
        "processKeyEvent",
        "QKeyEvent*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'povEvent'
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
        // Slot 'setJoystickID'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Slot 'setAxisRange'
        QtMocHelpers::SlotData<void(qreal)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 13 },
        }}),
        // Slot 'setJoystickEnabled'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'setAxisSensibility'
        QtMocHelpers::SlotData<void(qreal)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 17 },
        }}),
        // Slot 'readAxes'
        QtMocHelpers::SlotData<void(int, bool)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 19 }, { QMetaType::Bool, 20 },
        }}),
        // Slot 'updateAxis'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'readPOVs'
        QtMocHelpers::SlotData<void(int, bool)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 19 }, { QMetaType::Bool, 20 },
        }}),
        // Slot 'readButtons'
        QtMocHelpers::SlotData<void(int, bool)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 19 }, { QMetaType::Bool, 20 },
        }}),
        // Slot 'processKeyEvent'
        QtMocHelpers::SlotData<void(QKeyEvent *, bool)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 25, 5 }, { QMetaType::Bool, 20 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VirtualJoystick, qt_meta_tag_ZN15VirtualJoystickE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VirtualJoystick::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15VirtualJoystickE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15VirtualJoystickE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15VirtualJoystickE_t>.metaTypes,
    nullptr
} };

void VirtualJoystick::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VirtualJoystick *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->enabledChanged(); break;
        case 1: _t->povEvent((*reinterpret_cast<std::add_pointer_t<QJoystickPOVEvent>>(_a[1]))); break;
        case 2: _t->axisEvent((*reinterpret_cast<std::add_pointer_t<QJoystickAxisEvent>>(_a[1]))); break;
        case 3: _t->buttonEvent((*reinterpret_cast<std::add_pointer_t<QJoystickButtonEvent>>(_a[1]))); break;
        case 4: _t->setJoystickID((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setAxisRange((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 6: _t->setJoystickEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setAxisSensibility((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 8: _t->readAxes((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 9: _t->updateAxis(); break;
        case 10: _t->readPOVs((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 11: _t->readButtons((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 12: _t->processKeyEvent((*reinterpret_cast<std::add_pointer_t<QKeyEvent*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VirtualJoystick::*)()>(_a, &VirtualJoystick::enabledChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualJoystick::*)(const QJoystickPOVEvent & )>(_a, &VirtualJoystick::povEvent, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualJoystick::*)(const QJoystickAxisEvent & )>(_a, &VirtualJoystick::axisEvent, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (VirtualJoystick::*)(const QJoystickButtonEvent & )>(_a, &VirtualJoystick::buttonEvent, 3))
            return;
    }
}

const QMetaObject *VirtualJoystick::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualJoystick::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15VirtualJoystickE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VirtualJoystick::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void VirtualJoystick::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VirtualJoystick::povEvent(const QJoystickPOVEvent & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void VirtualJoystick::axisEvent(const QJoystickAxisEvent & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void VirtualJoystick::buttonEvent(const QJoystickButtonEvent & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP

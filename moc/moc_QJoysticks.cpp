/****************************************************************************
** Meta object code from reading C++ file 'QJoysticks.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lib/QJoysticks/src/QJoysticks.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QJoysticks.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10QJoysticksE_t {};
} // unnamed namespace

template <> constexpr inline auto QJoysticks::qt_create_metaobjectdata<qt_meta_tag_ZN10QJoysticksE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QJoysticks",
        "countChanged",
        "",
        "enabledChanged",
        "enabled",
        "POVEvent",
        "QJoystickPOVEvent",
        "event",
        "axisEvent",
        "QJoystickAxisEvent",
        "buttonEvent",
        "QJoystickButtonEvent",
        "povChanged",
        "js",
        "pov",
        "angle",
        "axisChanged",
        "axis",
        "value",
        "buttonChanged",
        "button",
        "pressed",
        "updateInterfaces",
        "setVirtualJoystickRange",
        "range",
        "setVirtualJoystickEnabled",
        "setVirtualJoystickAxisSensibility",
        "sensibility",
        "setSortJoysticksByBlacklistState",
        "sort",
        "setBlacklisted",
        "index",
        "blacklisted",
        "resetJoysticks",
        "addInputDevice",
        "QJoystickDevice*",
        "device",
        "onPOVEvent",
        "e",
        "onAxisEvent",
        "onButtonEvent",
        "getPOV",
        "getAxis",
        "getButton",
        "getNumAxes",
        "getNumPOVs",
        "getNumButtons",
        "isBlacklisted",
        "joystickExists",
        "getName",
        "count",
        "nonBlacklistedCount",
        "deviceNames"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'countChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void(const bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'POVEvent'
        QtMocHelpers::SignalData<void(const QJoystickPOVEvent &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'axisEvent'
        QtMocHelpers::SignalData<void(const QJoystickAxisEvent &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 7 },
        }}),
        // Signal 'buttonEvent'
        QtMocHelpers::SignalData<void(const QJoystickButtonEvent &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 7 },
        }}),
        // Signal 'povChanged'
        QtMocHelpers::SignalData<void(const int, const int, const int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 }, { QMetaType::Int, 14 }, { QMetaType::Int, 15 },
        }}),
        // Signal 'axisChanged'
        QtMocHelpers::SignalData<void(const int, const int, const qreal)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 }, { QMetaType::Int, 17 }, { QMetaType::QReal, 18 },
        }}),
        // Signal 'buttonChanged'
        QtMocHelpers::SignalData<void(const int, const int, const bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 }, { QMetaType::Int, 20 }, { QMetaType::Bool, 21 },
        }}),
        // Slot 'updateInterfaces'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setVirtualJoystickRange'
        QtMocHelpers::SlotData<void(qreal)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 24 },
        }}),
        // Slot 'setVirtualJoystickEnabled'
        QtMocHelpers::SlotData<void(bool)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Slot 'setVirtualJoystickAxisSensibility'
        QtMocHelpers::SlotData<void(qreal)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 27 },
        }}),
        // Slot 'setSortJoysticksByBlacklistState'
        QtMocHelpers::SlotData<void(bool)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 29 },
        }}),
        // Slot 'setBlacklisted'
        QtMocHelpers::SlotData<void(int, bool)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 31 }, { QMetaType::Bool, 32 },
        }}),
        // Slot 'resetJoysticks'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addInputDevice'
        QtMocHelpers::SlotData<void(QJoystickDevice *)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 35, 36 },
        }}),
        // Slot 'onPOVEvent'
        QtMocHelpers::SlotData<void(const QJoystickPOVEvent &)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 38 },
        }}),
        // Slot 'onAxisEvent'
        QtMocHelpers::SlotData<void(const QJoystickAxisEvent &)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 9, 38 },
        }}),
        // Slot 'onButtonEvent'
        QtMocHelpers::SlotData<void(const QJoystickButtonEvent &)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 38 },
        }}),
        // Method 'getPOV'
        QtMocHelpers::MethodData<int(const int, const int)>(41, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::Int, 31 }, { QMetaType::Int, 14 },
        }}),
        // Method 'getAxis'
        QtMocHelpers::MethodData<double(const int, const int)>(42, 2, QMC::AccessPublic, QMetaType::Double, {{
            { QMetaType::Int, 31 }, { QMetaType::Int, 17 },
        }}),
        // Method 'getButton'
        QtMocHelpers::MethodData<bool(const int, const int)>(43, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 31 }, { QMetaType::Int, 20 },
        }}),
        // Method 'getNumAxes'
        QtMocHelpers::MethodData<int(const int)>(44, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::Int, 31 },
        }}),
        // Method 'getNumPOVs'
        QtMocHelpers::MethodData<int(const int)>(45, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::Int, 31 },
        }}),
        // Method 'getNumButtons'
        QtMocHelpers::MethodData<int(const int)>(46, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::Int, 31 },
        }}),
        // Method 'isBlacklisted'
        QtMocHelpers::MethodData<bool(const int)>(47, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 31 },
        }}),
        // Method 'joystickExists'
        QtMocHelpers::MethodData<bool(const int)>(48, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 31 },
        }}),
        // Method 'getName'
        QtMocHelpers::MethodData<QString(const int)>(49, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 31 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'count'
        QtMocHelpers::PropertyData<int>(50, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'nonBlacklistedCount'
        QtMocHelpers::PropertyData<int>(51, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'deviceNames'
        QtMocHelpers::PropertyData<QStringList>(52, QMetaType::QStringList, QMC::DefaultPropertyFlags, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QJoysticks, qt_meta_tag_ZN10QJoysticksE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QJoysticks::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10QJoysticksE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10QJoysticksE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10QJoysticksE_t>.metaTypes,
    nullptr
} };

void QJoysticks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QJoysticks *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->enabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->POVEvent((*reinterpret_cast<std::add_pointer_t<QJoystickPOVEvent>>(_a[1]))); break;
        case 3: _t->axisEvent((*reinterpret_cast<std::add_pointer_t<QJoystickAxisEvent>>(_a[1]))); break;
        case 4: _t->buttonEvent((*reinterpret_cast<std::add_pointer_t<QJoystickButtonEvent>>(_a[1]))); break;
        case 5: _t->povChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 6: _t->axisChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qreal>>(_a[3]))); break;
        case 7: _t->buttonChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 8: _t->updateInterfaces(); break;
        case 9: _t->setVirtualJoystickRange((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 10: _t->setVirtualJoystickEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->setVirtualJoystickAxisSensibility((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 12: _t->setSortJoysticksByBlacklistState((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->setBlacklisted((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 14: _t->resetJoysticks(); break;
        case 15: _t->addInputDevice((*reinterpret_cast<std::add_pointer_t<QJoystickDevice*>>(_a[1]))); break;
        case 16: _t->onPOVEvent((*reinterpret_cast<std::add_pointer_t<QJoystickPOVEvent>>(_a[1]))); break;
        case 17: _t->onAxisEvent((*reinterpret_cast<std::add_pointer_t<QJoystickAxisEvent>>(_a[1]))); break;
        case 18: _t->onButtonEvent((*reinterpret_cast<std::add_pointer_t<QJoystickButtonEvent>>(_a[1]))); break;
        case 19: { int _r = _t->getPOV((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 20: { double _r = _t->getAxis((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->getButton((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 22: { int _r = _t->getNumAxes((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 23: { int _r = _t->getNumPOVs((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 24: { int _r = _t->getNumButtons((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->isBlacklisted((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->joystickExists((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { QString _r = _t->getName((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QJoysticks::*)()>(_a, &QJoysticks::countChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QJoysticks::*)(const bool )>(_a, &QJoysticks::enabledChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QJoysticks::*)(const QJoystickPOVEvent & )>(_a, &QJoysticks::POVEvent, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QJoysticks::*)(const QJoystickAxisEvent & )>(_a, &QJoysticks::axisEvent, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (QJoysticks::*)(const QJoystickButtonEvent & )>(_a, &QJoysticks::buttonEvent, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (QJoysticks::*)(const int , const int , const int )>(_a, &QJoysticks::povChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (QJoysticks::*)(const int , const int , const qreal )>(_a, &QJoysticks::axisChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (QJoysticks::*)(const int , const int , const bool )>(_a, &QJoysticks::buttonChanged, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->nonBlacklistedCount(); break;
        case 2: *reinterpret_cast<QStringList*>(_v) = _t->deviceNames(); break;
        default: break;
        }
    }
}

const QMetaObject *QJoysticks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QJoysticks::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10QJoysticksE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QJoysticks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QJoysticks::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QJoysticks::enabledChanged(const bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QJoysticks::POVEvent(const QJoystickPOVEvent & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void QJoysticks::axisEvent(const QJoystickAxisEvent & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void QJoysticks::buttonEvent(const QJoystickButtonEvent & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void QJoysticks::povChanged(const int _t1, const int _t2, const int _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2, _t3);
}

// SIGNAL 6
void QJoysticks::axisChanged(const int _t1, const int _t2, const qreal _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2, _t3);
}

// SIGNAL 7
void QJoysticks::buttonChanged(const int _t1, const int _t2, const bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP

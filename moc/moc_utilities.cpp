/****************************************************************************
** Meta object code from reading C++ file 'utilities.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/utilities.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'utilities.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9UtilitiesE_t {};
} // unnamed namespace

template <> constexpr inline auto Utilities::qt_create_metaobjectdata<qt_meta_tag_ZN9UtilitiesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Utilities",
        "cpuUsageChanged",
        "",
        "batteryLevelChanged",
        "connectedToACChanged",
        "copy",
        "QVariant",
        "data",
        "setAutoScaleEnabled",
        "enabled",
        "updateCpuUsage",
        "updateBatteryLevel",
        "updateConnectedToAC",
        "calculateScaleRatio",
        "readCpuUsageProcess",
        "exit_code",
        "readBatteryLevelProcess",
        "readConnectedToACProcess",
        "cpuUsage",
        "batteryLevel",
        "connectedToAC",
        "scaleRatio"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'cpuUsageChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'batteryLevelChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'connectedToACChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'copy'
        QtMocHelpers::SlotData<void(const QVariant &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'setAutoScaleEnabled'
        QtMocHelpers::SlotData<void(const bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Slot 'updateCpuUsage'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateBatteryLevel'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateConnectedToAC'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'calculateScaleRatio'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'readCpuUsageProcess'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'readCpuUsageProcess'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'readBatteryLevelProcess'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'readBatteryLevelProcess'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'readConnectedToACProcess'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'readConnectedToACProcess'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'cpuUsage'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'batteryLevel'
        QtMocHelpers::PropertyData<int>(19, QMetaType::Int, QMC::DefaultPropertyFlags, 1),
        // property 'connectedToAC'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'scaleRatio'
        QtMocHelpers::PropertyData<qreal>(21, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Utilities, qt_meta_tag_ZN9UtilitiesE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Utilities::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9UtilitiesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9UtilitiesE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9UtilitiesE_t>.metaTypes,
    nullptr
} };

void Utilities::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Utilities *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->cpuUsageChanged(); break;
        case 1: _t->batteryLevelChanged(); break;
        case 2: _t->connectedToACChanged(); break;
        case 3: _t->copy((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 4: _t->setAutoScaleEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->updateCpuUsage(); break;
        case 6: _t->updateBatteryLevel(); break;
        case 7: _t->updateConnectedToAC(); break;
        case 8: _t->calculateScaleRatio(); break;
        case 9: _t->readCpuUsageProcess((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->readCpuUsageProcess(); break;
        case 11: _t->readBatteryLevelProcess((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->readBatteryLevelProcess(); break;
        case 13: _t->readConnectedToACProcess((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->readConnectedToACProcess(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Utilities::*)()>(_a, &Utilities::cpuUsageChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Utilities::*)()>(_a, &Utilities::batteryLevelChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Utilities::*)()>(_a, &Utilities::connectedToACChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->cpuUsage(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->batteryLevel(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isConnectedToAC(); break;
        case 3: *reinterpret_cast<qreal*>(_v) = _t->scaleRatio(); break;
        default: break;
        }
    }
}

const QMetaObject *Utilities::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utilities::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9UtilitiesE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Utilities::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Utilities::cpuUsageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Utilities::batteryLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Utilities::connectedToACChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'dashboards.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/dashboards.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dashboards.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10DashboardsE_t {};
} // unnamed namespace

template <> constexpr inline auto Dashboards::qt_create_metaobjectdata<qt_meta_tag_ZN10DashboardsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Dashboards",
        "openDashboard",
        "",
        "dashboard",
        "dashboardList",
        "DashboardTypes",
        "kNone",
        "kSFXDashboard",
        "kSmartDashboard",
        "kShuffleboard",
        "kLabVIEWDashboard"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'openDashboard'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Method 'dashboardList'
        QtMocHelpers::MethodData<QStringList()>(4, 2, QMC::AccessPublic, QMetaType::QStringList),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'DashboardTypes'
        QtMocHelpers::EnumData<enum DashboardTypes>(5, 5, QMC::EnumFlags{}).add({
            {    6, DashboardTypes::kNone },
            {    7, DashboardTypes::kSFXDashboard },
            {    8, DashboardTypes::kSmartDashboard },
            {    9, DashboardTypes::kShuffleboard },
            {   10, DashboardTypes::kLabVIEWDashboard },
        }),
    };
    return QtMocHelpers::metaObjectData<Dashboards, qt_meta_tag_ZN10DashboardsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Dashboards::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10DashboardsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10DashboardsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10DashboardsE_t>.metaTypes,
    nullptr
} };

void Dashboards::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Dashboards *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->openDashboard((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: { QStringList _r = _t->dashboardList();
            if (_a[0]) *reinterpret_cast<QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *Dashboards::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dashboards::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10DashboardsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Dashboards::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'DriverStation.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lib/LibDS/wrappers/Qt/DriverStation.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DriverStation.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13DriverStationE_t {};
} // unnamed namespace

template <> constexpr inline auto DriverStation::qt_create_metaobjectdata<qt_meta_tag_ZN13DriverStationE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DriverStation",
        "stationChanged",
        "",
        "gameDataChanged",
        "protocolChanged",
        "fmsAddressChanged",
        "radioAddressChanged",
        "robotAddressChanged",
        "joystickCountChanged",
        "canUsageChanged",
        "usage",
        "cpuUsageChanged",
        "ramUsageChanged",
        "diskUsageChanged",
        "enabledChanged",
        "enabled",
        "newMessage",
        "message",
        "teamNumberChanged",
        "number",
        "statusChanged",
        "status",
        "voltageChanged",
        "voltage",
        "robotCodeChanged",
        "robotCode",
        "controlModeChanged",
        "Control",
        "mode",
        "allianceChanged",
        "Alliance",
        "alliance",
        "positionChanged",
        "Position",
        "position",
        "elapsedTimeChanged",
        "string",
        "fmsCommunicationsChanged",
        "connected",
        "radioCommunicationsChanged",
        "robotCommunicationsChanged",
        "emergencyStoppedChanged",
        "emergencyStopped",
        "start",
        "rebootRobot",
        "resetJoysticks",
        "restartRobotCode",
        "setEnabled",
        "setTeamNumber",
        "setGameData",
        "data",
        "loadProtocol",
        "DS_Protocol",
        "protocol",
        "setControlMode",
        "setProtocol",
        "Protocol",
        "setTeamStation",
        "Station",
        "station",
        "setTeamAlliance",
        "setTeamPosition",
        "setEmergencyStopped",
        "stopped",
        "setCustomFMSAddress",
        "address",
        "setCustomRadioAddress",
        "setCustomRobotAddress",
        "sendNetConsoleMessage",
        "addJoystick",
        "axes",
        "hats",
        "buttons",
        "setJoystickHat",
        "joystick",
        "hat",
        "angle",
        "setJoystickAxis",
        "axis",
        "value",
        "setJoystickButton",
        "button",
        "pressed",
        "quitDS",
        "processEvents",
        "resetElapsedTime",
        "updateElapsedTime",
        "sentFMSBytes",
        "sentRadioBytes",
        "sentRobotBytes",
        "receivedFMSBytes",
        "receivedRadioBytes",
        "receivedRobotBytes",
        "getNumAxes",
        "getNumHats",
        "getNumButtons",
        "joystickCount",
        "cpuUsage",
        "canUsage",
        "ramUsage",
        "diskUsage",
        "teamNumber",
        "maximumBatteryVoltage",
        "controlMode",
        "connectedToFMS",
        "connectedToRadio",
        "connectedToRobot",
        "emergencyStop",
        "voltageString",
        "appliedFMSAddress",
        "appliedRadioAddress",
        "appliedRobotAddress",
        "defaultFMSAddress",
        "defaultRadioAddress",
        "defaultRobotAddress",
        "customFMSAddress",
        "customRadioAddress",
        "customRobotAddress",
        "elapsedTime",
        "stations",
        "protocols",
        "libDSVersion",
        "buildDate",
        "buildTime",
        "fmsPacketLoss",
        "radioPacketLoss",
        "robotPacketLoss",
        "isTestMode",
        "isAutonomous",
        "isTeleoperated",
        "canBeEnabled",
        "gameData",
        "ControlTest",
        "ControlAutonomous",
        "ControlTeleoperated",
        "Protocol2020",
        "Protocol2016",
        "Protocol2015",
        "Protocol2014",
        "AllianceRed",
        "AllianceBlue",
        "Position1",
        "Position2",
        "Position3",
        "StationRed1",
        "StationRed2",
        "StationRed3",
        "StationBlue1",
        "StationBlue2",
        "StationBlue3"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'stationChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gameDataChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'protocolChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fmsAddressChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'radioAddressChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'robotAddressChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'joystickCountChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'canUsageChanged'
        QtMocHelpers::SignalData<void(const int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Signal 'cpuUsageChanged'
        QtMocHelpers::SignalData<void(const int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Signal 'ramUsageChanged'
        QtMocHelpers::SignalData<void(const int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Signal 'diskUsageChanged'
        QtMocHelpers::SignalData<void(const int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Signal 'enabledChanged'
        QtMocHelpers::SignalData<void(const bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Signal 'newMessage'
        QtMocHelpers::SignalData<void(const QString &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Signal 'teamNumberChanged'
        QtMocHelpers::SignalData<void(const int)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Signal 'statusChanged'
        QtMocHelpers::SignalData<void(const QString &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 21 },
        }}),
        // Signal 'voltageChanged'
        QtMocHelpers::SignalData<void(const float)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 23 },
        }}),
        // Signal 'robotCodeChanged'
        QtMocHelpers::SignalData<void(const bool)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 25 },
        }}),
        // Signal 'controlModeChanged'
        QtMocHelpers::SignalData<void(const Control)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Signal 'allianceChanged'
        QtMocHelpers::SignalData<void(const Alliance)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 30, 31 },
        }}),
        // Signal 'positionChanged'
        QtMocHelpers::SignalData<void(const Position)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 33, 34 },
        }}),
        // Signal 'elapsedTimeChanged'
        QtMocHelpers::SignalData<void(const QString &)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 36 },
        }}),
        // Signal 'fmsCommunicationsChanged'
        QtMocHelpers::SignalData<void(const bool)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 38 },
        }}),
        // Signal 'radioCommunicationsChanged'
        QtMocHelpers::SignalData<void(const bool)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 38 },
        }}),
        // Signal 'robotCommunicationsChanged'
        QtMocHelpers::SignalData<void(const bool)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 38 },
        }}),
        // Signal 'emergencyStoppedChanged'
        QtMocHelpers::SignalData<void(const bool)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 42 },
        }}),
        // Slot 'start'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rebootRobot'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetJoysticks'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'restartRobotCode'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setEnabled'
        QtMocHelpers::SlotData<void(const bool)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'setTeamNumber'
        QtMocHelpers::SlotData<void(const int)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Slot 'setGameData'
        QtMocHelpers::SlotData<void(const QString &)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 50 },
        }}),
        // Slot 'loadProtocol'
        QtMocHelpers::SlotData<void(const DS_Protocol &)>(51, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 52, 53 },
        }}),
        // Slot 'setControlMode'
        QtMocHelpers::SlotData<void(const Control)>(54, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Slot 'setProtocol'
        QtMocHelpers::SlotData<void(const Protocol)>(55, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 56, 53 },
        }}),
        // Slot 'setTeamStation'
        QtMocHelpers::SlotData<void(const Station)>(57, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 58, 59 },
        }}),
        // Slot 'setTeamAlliance'
        QtMocHelpers::SlotData<void(const Alliance)>(60, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 30, 31 },
        }}),
        // Slot 'setTeamPosition'
        QtMocHelpers::SlotData<void(const Position)>(61, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 33, 34 },
        }}),
        // Slot 'setEmergencyStopped'
        QtMocHelpers::SlotData<void(const bool)>(62, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 63 },
        }}),
        // Slot 'setCustomFMSAddress'
        QtMocHelpers::SlotData<void(const QString &)>(64, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 65 },
        }}),
        // Slot 'setCustomRadioAddress'
        QtMocHelpers::SlotData<void(const QString &)>(66, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 65 },
        }}),
        // Slot 'setCustomRobotAddress'
        QtMocHelpers::SlotData<void(const QString &)>(67, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 65 },
        }}),
        // Slot 'sendNetConsoleMessage'
        QtMocHelpers::SlotData<void(const QString &)>(68, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'addJoystick'
        QtMocHelpers::SlotData<void(int, int, int)>(69, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 70 }, { QMetaType::Int, 71 }, { QMetaType::Int, 72 },
        }}),
        // Slot 'setJoystickHat'
        QtMocHelpers::SlotData<void(int, int, int)>(73, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 74 }, { QMetaType::Int, 75 }, { QMetaType::Int, 76 },
        }}),
        // Slot 'setJoystickAxis'
        QtMocHelpers::SlotData<void(int, int, float)>(77, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 74 }, { QMetaType::Int, 78 }, { QMetaType::Float, 79 },
        }}),
        // Slot 'setJoystickButton'
        QtMocHelpers::SlotData<void(int, int, bool)>(80, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 74 }, { QMetaType::Int, 81 }, { QMetaType::Bool, 82 },
        }}),
        // Slot 'quitDS'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'processEvents'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resetElapsedTime'
        QtMocHelpers::SlotData<void()>(85, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateElapsedTime'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPrivate, QMetaType::Void),
        // Method 'sentFMSBytes'
        QtMocHelpers::MethodData<unsigned long() const>(87, 2, QMC::AccessPublic, QMetaType::ULong),
        // Method 'sentRadioBytes'
        QtMocHelpers::MethodData<unsigned long() const>(88, 2, QMC::AccessPublic, QMetaType::ULong),
        // Method 'sentRobotBytes'
        QtMocHelpers::MethodData<unsigned long() const>(89, 2, QMC::AccessPublic, QMetaType::ULong),
        // Method 'receivedFMSBytes'
        QtMocHelpers::MethodData<unsigned long() const>(90, 2, QMC::AccessPublic, QMetaType::ULong),
        // Method 'receivedRadioBytes'
        QtMocHelpers::MethodData<unsigned long() const>(91, 2, QMC::AccessPublic, QMetaType::ULong),
        // Method 'receivedRobotBytes'
        QtMocHelpers::MethodData<unsigned long() const>(92, 2, QMC::AccessPublic, QMetaType::ULong),
        // Method 'getNumAxes'
        QtMocHelpers::MethodData<int(const int) const>(93, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::Int, 74 },
        }}),
        // Method 'getNumHats'
        QtMocHelpers::MethodData<int(const int) const>(94, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::Int, 74 },
        }}),
        // Method 'getNumButtons'
        QtMocHelpers::MethodData<int(const int) const>(95, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::Int, 74 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'joystickCount'
        QtMocHelpers::PropertyData<int>(96, QMetaType::Int, QMC::DefaultPropertyFlags, 6),
        // property 'cpuUsage'
        QtMocHelpers::PropertyData<int>(97, QMetaType::Int, QMC::DefaultPropertyFlags, 8),
        // property 'canUsage'
        QtMocHelpers::PropertyData<int>(98, QMetaType::Int, QMC::DefaultPropertyFlags, 7),
        // property 'ramUsage'
        QtMocHelpers::PropertyData<int>(99, QMetaType::Int, QMC::DefaultPropertyFlags, 9),
        // property 'diskUsage'
        QtMocHelpers::PropertyData<int>(100, QMetaType::Int, QMC::DefaultPropertyFlags, 10),
        // property 'teamNumber'
        QtMocHelpers::PropertyData<int>(101, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'enabled'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'status'
        QtMocHelpers::PropertyData<QString>(21, QMetaType::QString, QMC::DefaultPropertyFlags, 14),
        // property 'voltage'
        QtMocHelpers::PropertyData<float>(23, QMetaType::Float, QMC::DefaultPropertyFlags, 15),
        // property 'maximumBatteryVoltage'
        QtMocHelpers::PropertyData<qreal>(102, QMetaType::QReal, QMC::DefaultPropertyFlags, 2),
        // property 'robotCode'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags, 16),
        // property 'controlMode'
        QtMocHelpers::PropertyData<enum Control>(103, 0x80000000 | 27, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 17),
        // property 'station'
        QtMocHelpers::PropertyData<enum Station>(59, 0x80000000 | 58, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag, 0),
        // property 'alliance'
        QtMocHelpers::PropertyData<enum Alliance>(31, 0x80000000 | 30, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag, 18),
        // property 'position'
        QtMocHelpers::PropertyData<enum Position>(34, 0x80000000 | 33, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag, 19),
        // property 'connectedToFMS'
        QtMocHelpers::PropertyData<bool>(104, QMetaType::Bool, QMC::DefaultPropertyFlags, 21),
        // property 'connectedToRadio'
        QtMocHelpers::PropertyData<bool>(105, QMetaType::Bool, QMC::DefaultPropertyFlags, 22),
        // property 'connectedToRobot'
        QtMocHelpers::PropertyData<bool>(106, QMetaType::Bool, QMC::DefaultPropertyFlags, 23),
        // property 'emergencyStop'
        QtMocHelpers::PropertyData<bool>(107, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable, 24),
        // property 'voltageString'
        QtMocHelpers::PropertyData<QString>(108, QMetaType::QString, QMC::DefaultPropertyFlags, 15),
        // property 'appliedFMSAddress'
        QtMocHelpers::PropertyData<QString>(109, QMetaType::QString, QMC::DefaultPropertyFlags, 3),
        // property 'appliedRadioAddress'
        QtMocHelpers::PropertyData<QString>(110, QMetaType::QString, QMC::DefaultPropertyFlags, 5),
        // property 'appliedRobotAddress'
        QtMocHelpers::PropertyData<QString>(111, QMetaType::QString, QMC::DefaultPropertyFlags, 5),
        // property 'defaultFMSAddress'
        QtMocHelpers::PropertyData<QString>(112, QMetaType::QString, QMC::DefaultPropertyFlags, 3),
        // property 'defaultRadioAddress'
        QtMocHelpers::PropertyData<QString>(113, QMetaType::QString, QMC::DefaultPropertyFlags, 5),
        // property 'defaultRobotAddress'
        QtMocHelpers::PropertyData<QString>(114, QMetaType::QString, QMC::DefaultPropertyFlags, 5),
        // property 'customFMSAddress'
        QtMocHelpers::PropertyData<QString>(115, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'customRadioAddress'
        QtMocHelpers::PropertyData<QString>(116, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'customRobotAddress'
        QtMocHelpers::PropertyData<QString>(117, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'elapsedTime'
        QtMocHelpers::PropertyData<QString>(118, QMetaType::QString, QMC::DefaultPropertyFlags, 20),
        // property 'stations'
        QtMocHelpers::PropertyData<QStringList>(119, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'protocols'
        QtMocHelpers::PropertyData<QStringList>(120, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'libDSVersion'
        QtMocHelpers::PropertyData<QString>(121, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'buildDate'
        QtMocHelpers::PropertyData<QString>(122, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'buildTime'
        QtMocHelpers::PropertyData<QString>(123, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'fmsPacketLoss'
        QtMocHelpers::PropertyData<int>(124, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'radioPacketLoss'
        QtMocHelpers::PropertyData<int>(125, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'robotPacketLoss'
        QtMocHelpers::PropertyData<int>(126, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'isTestMode'
        QtMocHelpers::PropertyData<bool>(127, QMetaType::Bool, QMC::DefaultPropertyFlags, 17),
        // property 'isAutonomous'
        QtMocHelpers::PropertyData<bool>(128, QMetaType::Bool, QMC::DefaultPropertyFlags, 17),
        // property 'isTeleoperated'
        QtMocHelpers::PropertyData<bool>(129, QMetaType::Bool, QMC::DefaultPropertyFlags, 17),
        // property 'canBeEnabled'
        QtMocHelpers::PropertyData<bool>(130, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'gameData'
        QtMocHelpers::PropertyData<QString>(131, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Control'
        QtMocHelpers::EnumData<enum Control>(27, 27, QMC::EnumFlags{}).add({
            {  132, Control::ControlTest },
            {  133, Control::ControlAutonomous },
            {  134, Control::ControlTeleoperated },
        }),
        // enum 'Protocol'
        QtMocHelpers::EnumData<enum Protocol>(56, 56, QMC::EnumFlags{}).add({
            {  135, Protocol::Protocol2020 },
            {  136, Protocol::Protocol2016 },
            {  137, Protocol::Protocol2015 },
            {  138, Protocol::Protocol2014 },
        }),
        // enum 'Alliance'
        QtMocHelpers::EnumData<enum Alliance>(30, 30, QMC::EnumFlags{}).add({
            {  139, Alliance::AllianceRed },
            {  140, Alliance::AllianceBlue },
        }),
        // enum 'Position'
        QtMocHelpers::EnumData<enum Position>(33, 33, QMC::EnumFlags{}).add({
            {  141, Position::Position1 },
            {  142, Position::Position2 },
            {  143, Position::Position3 },
        }),
        // enum 'Station'
        QtMocHelpers::EnumData<enum Station>(58, 58, QMC::EnumFlags{}).add({
            {  144, Station::StationRed1 },
            {  145, Station::StationRed2 },
            {  146, Station::StationRed3 },
            {  147, Station::StationBlue1 },
            {  148, Station::StationBlue2 },
            {  149, Station::StationBlue3 },
        }),
    };
    return QtMocHelpers::metaObjectData<DriverStation, qt_meta_tag_ZN13DriverStationE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DriverStation::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13DriverStationE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13DriverStationE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13DriverStationE_t>.metaTypes,
    nullptr
} };

void DriverStation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DriverStation *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->stationChanged(); break;
        case 1: _t->gameDataChanged(); break;
        case 2: _t->protocolChanged(); break;
        case 3: _t->fmsAddressChanged(); break;
        case 4: _t->radioAddressChanged(); break;
        case 5: _t->robotAddressChanged(); break;
        case 6: _t->joystickCountChanged(); break;
        case 7: _t->canUsageChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->cpuUsageChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->ramUsageChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->diskUsageChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->enabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->newMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->teamNumberChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->statusChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->voltageChanged((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 16: _t->robotCodeChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->controlModeChanged((*reinterpret_cast<std::add_pointer_t<enum Control>>(_a[1]))); break;
        case 18: _t->allianceChanged((*reinterpret_cast<std::add_pointer_t<enum Alliance>>(_a[1]))); break;
        case 19: _t->positionChanged((*reinterpret_cast<std::add_pointer_t<enum Position>>(_a[1]))); break;
        case 20: _t->elapsedTimeChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->fmsCommunicationsChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->radioCommunicationsChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->robotCommunicationsChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->emergencyStoppedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->start(); break;
        case 26: _t->rebootRobot(); break;
        case 27: _t->resetJoysticks(); break;
        case 28: _t->restartRobotCode(); break;
        case 29: _t->setEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->setTeamNumber((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 31: _t->setGameData((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 32: _t->loadProtocol((*reinterpret_cast<std::add_pointer_t<DS_Protocol>>(_a[1]))); break;
        case 33: _t->setControlMode((*reinterpret_cast<std::add_pointer_t<enum Control>>(_a[1]))); break;
        case 34: _t->setProtocol((*reinterpret_cast<std::add_pointer_t<enum Protocol>>(_a[1]))); break;
        case 35: _t->setTeamStation((*reinterpret_cast<std::add_pointer_t<enum Station>>(_a[1]))); break;
        case 36: _t->setTeamAlliance((*reinterpret_cast<std::add_pointer_t<enum Alliance>>(_a[1]))); break;
        case 37: _t->setTeamPosition((*reinterpret_cast<std::add_pointer_t<enum Position>>(_a[1]))); break;
        case 38: _t->setEmergencyStopped((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 39: _t->setCustomFMSAddress((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 40: _t->setCustomRadioAddress((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 41: _t->setCustomRobotAddress((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 42: _t->sendNetConsoleMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 43: _t->addJoystick((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 44: _t->setJoystickHat((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 45: _t->setJoystickAxis((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<float>>(_a[3]))); break;
        case 46: _t->setJoystickButton((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 47: _t->quitDS(); break;
        case 48: _t->processEvents(); break;
        case 49: _t->resetElapsedTime(); break;
        case 50: _t->updateElapsedTime(); break;
        case 51: { ulong _r = _t->sentFMSBytes();
            if (_a[0]) *reinterpret_cast<ulong*>(_a[0]) = std::move(_r); }  break;
        case 52: { ulong _r = _t->sentRadioBytes();
            if (_a[0]) *reinterpret_cast<ulong*>(_a[0]) = std::move(_r); }  break;
        case 53: { ulong _r = _t->sentRobotBytes();
            if (_a[0]) *reinterpret_cast<ulong*>(_a[0]) = std::move(_r); }  break;
        case 54: { ulong _r = _t->receivedFMSBytes();
            if (_a[0]) *reinterpret_cast<ulong*>(_a[0]) = std::move(_r); }  break;
        case 55: { ulong _r = _t->receivedRadioBytes();
            if (_a[0]) *reinterpret_cast<ulong*>(_a[0]) = std::move(_r); }  break;
        case 56: { ulong _r = _t->receivedRobotBytes();
            if (_a[0]) *reinterpret_cast<ulong*>(_a[0]) = std::move(_r); }  break;
        case 57: { int _r = _t->getNumAxes((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 58: { int _r = _t->getNumHats((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 59: { int _r = _t->getNumButtons((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)()>(_a, &DriverStation::stationChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)()>(_a, &DriverStation::gameDataChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)()>(_a, &DriverStation::protocolChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)()>(_a, &DriverStation::fmsAddressChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)()>(_a, &DriverStation::radioAddressChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)()>(_a, &DriverStation::robotAddressChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)()>(_a, &DriverStation::joystickCountChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const int )>(_a, &DriverStation::canUsageChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const int )>(_a, &DriverStation::cpuUsageChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const int )>(_a, &DriverStation::ramUsageChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const int )>(_a, &DriverStation::diskUsageChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const bool )>(_a, &DriverStation::enabledChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const QString & )>(_a, &DriverStation::newMessage, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const int )>(_a, &DriverStation::teamNumberChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const QString & )>(_a, &DriverStation::statusChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const float )>(_a, &DriverStation::voltageChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const bool )>(_a, &DriverStation::robotCodeChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const Control )>(_a, &DriverStation::controlModeChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const Alliance )>(_a, &DriverStation::allianceChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const Position )>(_a, &DriverStation::positionChanged, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const QString & )>(_a, &DriverStation::elapsedTimeChanged, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const bool )>(_a, &DriverStation::fmsCommunicationsChanged, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const bool )>(_a, &DriverStation::radioCommunicationsChanged, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const bool )>(_a, &DriverStation::robotCommunicationsChanged, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (DriverStation::*)(const bool )>(_a, &DriverStation::emergencyStoppedChanged, 24))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->joystickCount(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->cpuUsage(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->canUsage(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->ramUsage(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->diskUsage(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->teamNumber(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isEnabled(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->generalStatus(); break;
        case 8: *reinterpret_cast<float*>(_v) = _t->voltage(); break;
        case 9: *reinterpret_cast<qreal*>(_v) = _t->maximumBatteryVoltage(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->hasRobotCode(); break;
        case 11: *reinterpret_cast<enum Control*>(_v) = _t->controlMode(); break;
        case 12: *reinterpret_cast<enum Station*>(_v) = _t->teamStation(); break;
        case 13: *reinterpret_cast<enum Alliance*>(_v) = _t->teamAlliance(); break;
        case 14: *reinterpret_cast<enum Position*>(_v) = _t->teamPosition(); break;
        case 15: *reinterpret_cast<bool*>(_v) = _t->connectedToFMS(); break;
        case 16: *reinterpret_cast<bool*>(_v) = _t->connectedToRadio(); break;
        case 17: *reinterpret_cast<bool*>(_v) = _t->connectedToRobot(); break;
        case 18: *reinterpret_cast<bool*>(_v) = _t->emergencyStopped(); break;
        case 19: *reinterpret_cast<QString*>(_v) = _t->voltageString(); break;
        case 20: *reinterpret_cast<QString*>(_v) = _t->appliedFMSAddress(); break;
        case 21: *reinterpret_cast<QString*>(_v) = _t->appliedRadioAddress(); break;
        case 22: *reinterpret_cast<QString*>(_v) = _t->appliedRobotAddress(); break;
        case 23: *reinterpret_cast<QString*>(_v) = _t->defaultFMSAddress(); break;
        case 24: *reinterpret_cast<QString*>(_v) = _t->defaultRadioAddress(); break;
        case 25: *reinterpret_cast<QString*>(_v) = _t->defaultRobotAddress(); break;
        case 26: *reinterpret_cast<QString*>(_v) = _t->customFMSAddress(); break;
        case 27: *reinterpret_cast<QString*>(_v) = _t->customRadioAddress(); break;
        case 28: *reinterpret_cast<QString*>(_v) = _t->customRobotAddress(); break;
        case 29: *reinterpret_cast<QString*>(_v) = _t->elapsedTime(); break;
        case 30: *reinterpret_cast<QStringList*>(_v) = _t->stations(); break;
        case 31: *reinterpret_cast<QStringList*>(_v) = _t->protocols(); break;
        case 32: *reinterpret_cast<QString*>(_v) = _t->libDSVersion(); break;
        case 33: *reinterpret_cast<QString*>(_v) = _t->buildDate(); break;
        case 34: *reinterpret_cast<QString*>(_v) = _t->buildTime(); break;
        case 35: *reinterpret_cast<int*>(_v) = _t->fmsPacketLoss(); break;
        case 36: *reinterpret_cast<int*>(_v) = _t->radioPacketLoss(); break;
        case 37: *reinterpret_cast<int*>(_v) = _t->robotPacketLoss(); break;
        case 38: *reinterpret_cast<bool*>(_v) = _t->isTestMode(); break;
        case 39: *reinterpret_cast<bool*>(_v) = _t->isAutonomous(); break;
        case 40: *reinterpret_cast<bool*>(_v) = _t->isTeleoperated(); break;
        case 41: *reinterpret_cast<bool*>(_v) = _t->canBeEnabled(); break;
        case 42: *reinterpret_cast<QString*>(_v) = _t->gameData(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setTeamNumber(*reinterpret_cast<int*>(_v)); break;
        case 6: _t->setEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 11: _t->setControlMode(*reinterpret_cast<enum Control*>(_v)); break;
        case 12: _t->setTeamStation(*reinterpret_cast<enum Station*>(_v)); break;
        case 13: _t->setTeamAlliance(*reinterpret_cast<enum Alliance*>(_v)); break;
        case 14: _t->setTeamPosition(*reinterpret_cast<enum Position*>(_v)); break;
        case 18: _t->setEmergencyStopped(*reinterpret_cast<bool*>(_v)); break;
        case 26: _t->setCustomFMSAddress(*reinterpret_cast<QString*>(_v)); break;
        case 27: _t->setCustomRadioAddress(*reinterpret_cast<QString*>(_v)); break;
        case 28: _t->setCustomRobotAddress(*reinterpret_cast<QString*>(_v)); break;
        case 42: _t->setGameData(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *DriverStation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DriverStation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13DriverStationE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DriverStation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 60)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 60;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    return _id;
}

// SIGNAL 0
void DriverStation::stationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DriverStation::gameDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DriverStation::protocolChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DriverStation::fmsAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DriverStation::radioAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DriverStation::robotAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DriverStation::joystickCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void DriverStation::canUsageChanged(const int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void DriverStation::cpuUsageChanged(const int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void DriverStation::ramUsageChanged(const int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void DriverStation::diskUsageChanged(const int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void DriverStation::enabledChanged(const bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void DriverStation::newMessage(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void DriverStation::teamNumberChanged(const int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void DriverStation::statusChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void DriverStation::voltageChanged(const float _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void DriverStation::robotCodeChanged(const bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void DriverStation::controlModeChanged(const Control _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void DriverStation::allianceChanged(const Alliance _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void DriverStation::positionChanged(const Position _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void DriverStation::elapsedTimeChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1);
}

// SIGNAL 21
void DriverStation::fmsCommunicationsChanged(const bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1);
}

// SIGNAL 22
void DriverStation::radioCommunicationsChanged(const bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 22, nullptr, _t1);
}

// SIGNAL 23
void DriverStation::robotCommunicationsChanged(const bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 23, nullptr, _t1);
}

// SIGNAL 24
void DriverStation::emergencyStoppedChanged(const bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 24, nullptr, _t1);
}
QT_WARNING_POP

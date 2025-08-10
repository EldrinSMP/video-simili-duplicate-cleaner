/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "deleteTemporaryFiles",
        "",
        "closeEvent",
        "QCloseEvent*",
        "event",
        "dragEnterEvent",
        "QDragEnterEvent*",
        "dropEvent",
        "QDropEvent*",
        "loadExtensions",
        "setComparisonMode",
        "mode",
        "on_selectThumbnails_activated",
        "index",
        "on_selectPhash_clicked",
        "checked",
        "on_selectSSIM_clicked",
        "on_blocksizeCombo_activated",
        "on_differentDurationCombo_activated",
        "on_sameDurationCombo_activated",
        "on_thresholdSlider_valueChanged",
        "value",
        "setMatchSimilarityThreshold",
        "setUseCacheOption",
        "Prefs::USE_CACHE_OPTION",
        "opt",
        "on_directoryBox_textChanged",
        "arg1",
        "on_browseFolders_clicked",
        "on_browseApplePhotos_clicked",
        "on_directoryBox_returnPressed",
        "on_findDuplicates_clicked",
        "findVideos",
        "QDir&",
        "dir",
        "processVideos",
        "videoSummary",
        "addStatusMessage",
        "message",
        "addVideo",
        "Video*",
        "addMe",
        "removeVideo",
        "deleteMe",
        "errorMsg",
        "on_actionAbout_triggered",
        "on_actionCredits_triggered",
        "on_actionContact_triggered",
        "on_actionChange_trash_folder_triggered",
        "on_actionEnable_direct_deletion_instead_of_trash_triggered",
        "on_actionRestoreMoveToTrash_triggered",
        "on_actionEmpty_cache_triggered",
        "on_actionSet_custom_cache_location_triggered",
        "on_actionRestore_default_cache_location_triggered",
        "on_verboseCheckbox_stateChanged",
        "on_actionRestore_all_settings_triggered",
        "on_radio_UseCacheNo_clicked",
        "on_radio_UseCacheYes_clicked",
        "on_radio_UseCacheOnly_clicked",
        "on_actionDelete_log_files_triggered",
        "on_actionOpen_logs_folder_triggered"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'deleteTemporaryFiles'
        QtMocHelpers::SlotData<void() const>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'closeEvent'
        QtMocHelpers::SlotData<void(QCloseEvent *)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'dragEnterEvent'
        QtMocHelpers::SlotData<void(QDragEnterEvent *)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 7, 5 },
        }}),
        // Slot 'dropEvent'
        QtMocHelpers::SlotData<void(QDropEvent *)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 9, 5 },
        }}),
        // Slot 'loadExtensions'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setComparisonMode'
        QtMocHelpers::SlotData<void(const int &)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'on_selectThumbnails_activated'
        QtMocHelpers::SlotData<void(const int &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
        // Slot 'on_selectPhash_clicked'
        QtMocHelpers::SlotData<void(const bool &)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Slot 'on_selectSSIM_clicked'
        QtMocHelpers::SlotData<void(const bool &)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Slot 'on_blocksizeCombo_activated'
        QtMocHelpers::SlotData<void(const int &)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
        // Slot 'on_differentDurationCombo_activated'
        QtMocHelpers::SlotData<void(const int &)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
        // Slot 'on_sameDurationCombo_activated'
        QtMocHelpers::SlotData<void(const int &)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
        // Slot 'on_thresholdSlider_valueChanged'
        QtMocHelpers::SlotData<void(const int &)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'setMatchSimilarityThreshold'
        QtMocHelpers::SlotData<void(const int &)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'setUseCacheOption'
        QtMocHelpers::SlotData<void(Prefs::USE_CACHE_OPTION)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Slot 'on_directoryBox_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 28 },
        }}),
        // Slot 'on_browseFolders_clicked'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_browseApplePhotos_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_directoryBox_returnPressed'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_findDuplicates_clicked'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'findVideos'
        QtMocHelpers::SlotData<void(QDir &)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 34, 35 },
        }}),
        // Slot 'processVideos'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'videoSummary'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addStatusMessage'
        QtMocHelpers::SlotData<void(const QString &) const>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 39 },
        }}),
        // Slot 'addVideo'
        QtMocHelpers::SlotData<void(Video *)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 41, 42 },
        }}),
        // Slot 'removeVideo'
        QtMocHelpers::SlotData<void(Video *, QString)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 41, 44 }, { QMetaType::QString, 45 },
        }}),
        // Slot 'on_actionAbout_triggered'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCredits_triggered'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionContact_triggered'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionChange_trash_folder_triggered'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEnable_direct_deletion_instead_of_trash_triggered'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRestoreMoveToTrash_triggered'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEmpty_cache_triggered'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSet_custom_cache_location_triggered'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRestore_default_cache_location_triggered'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_verboseCheckbox_stateChanged'
        QtMocHelpers::SlotData<void(int)>(55, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 28 },
        }}),
        // Slot 'on_actionRestore_all_settings_triggered'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_radio_UseCacheNo_clicked'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_radio_UseCacheYes_clicked'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_radio_UseCacheOnly_clicked'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDelete_log_files_triggered'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOpen_logs_folder_triggered'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->deleteTemporaryFiles(); break;
        case 1: _t->closeEvent((*reinterpret_cast< std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 2: _t->dragEnterEvent((*reinterpret_cast< std::add_pointer_t<QDragEnterEvent*>>(_a[1]))); break;
        case 3: _t->dropEvent((*reinterpret_cast< std::add_pointer_t<QDropEvent*>>(_a[1]))); break;
        case 4: _t->loadExtensions(); break;
        case 5: _t->setComparisonMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_selectThumbnails_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_selectPhash_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_selectSSIM_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->on_blocksizeCombo_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_differentDurationCombo_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_sameDurationCombo_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_thresholdSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->setMatchSimilarityThreshold((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->setUseCacheOption((*reinterpret_cast< std::add_pointer_t<Prefs::USE_CACHE_OPTION>>(_a[1]))); break;
        case 15: _t->on_directoryBox_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->on_browseFolders_clicked(); break;
        case 17: _t->on_browseApplePhotos_clicked(); break;
        case 18: _t->on_directoryBox_returnPressed(); break;
        case 19: _t->on_findDuplicates_clicked(); break;
        case 20: _t->findVideos((*reinterpret_cast< std::add_pointer_t<QDir&>>(_a[1]))); break;
        case 21: _t->processVideos(); break;
        case 22: _t->videoSummary(); break;
        case 23: _t->addStatusMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->addVideo((*reinterpret_cast< std::add_pointer_t<Video*>>(_a[1]))); break;
        case 25: _t->removeVideo((*reinterpret_cast< std::add_pointer_t<Video*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 26: _t->on_actionAbout_triggered(); break;
        case 27: _t->on_actionCredits_triggered(); break;
        case 28: _t->on_actionContact_triggered(); break;
        case 29: _t->on_actionChange_trash_folder_triggered(); break;
        case 30: _t->on_actionEnable_direct_deletion_instead_of_trash_triggered(); break;
        case 31: _t->on_actionRestoreMoveToTrash_triggered(); break;
        case 32: _t->on_actionEmpty_cache_triggered(); break;
        case 33: _t->on_actionSet_custom_cache_location_triggered(); break;
        case 34: _t->on_actionRestore_default_cache_location_triggered(); break;
        case 35: _t->on_verboseCheckbox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 36: _t->on_actionRestore_all_settings_triggered(); break;
        case 37: _t->on_radio_UseCacheNo_clicked(); break;
        case 38: _t->on_radio_UseCacheYes_clicked(); break;
        case 39: _t->on_radio_UseCacheOnly_clicked(); break;
        case 40: _t->on_actionDelete_log_files_triggered(); break;
        case 41: _t->on_actionOpen_logs_folder_triggered(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Video* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Video* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}
QT_WARNING_POP

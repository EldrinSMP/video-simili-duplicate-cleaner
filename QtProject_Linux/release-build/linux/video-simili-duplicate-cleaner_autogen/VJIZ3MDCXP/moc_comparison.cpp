/****************************************************************************
** Meta object code from reading C++ file 'comparison.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../app/comparison.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'comparison.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10ComparisonE_t {};
} // unnamed namespace

template <> constexpr inline auto Comparison::qt_create_metaobjectdata<qt_meta_tag_ZN10ComparisonE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Comparison",
        "sendStatusMessage",
        "",
        "message",
        "switchComparisonMode",
        "mode",
        "adjustThresholdSlider",
        "value",
        "reportMatchingVideos",
        "dragEnterEvent",
        "QDragEnterEvent*",
        "event",
        "dropEvent",
        "QDropEvent*",
        "confirmToExit",
        "on_prevVideo_clicked",
        "on_nextVideo_clicked",
        "bothVideosMatch",
        "const Video*",
        "left",
        "right",
        "phashSimilarity",
        "nthHash",
        "showVideo",
        "side",
        "readableDuration",
        "int64_t",
        "milliseconds",
        "readableFileSize",
        "filesize",
        "readableBitRate",
        "kbps",
        "highlightBetterProperties",
        "updateUI",
        "comparisonsSoFar",
        "on_selectPhash_clicked",
        "checked",
        "on_selectSSIM_clicked",
        "on_leftImage_clicked",
        "on_rightImage_clicked",
        "openMedia",
        "filenamepath",
        "on_leftFileName_clicked",
        "on_rightFileName_clicked",
        "openFileManager",
        "filename",
        "on_leftDelete_clicked",
        "on_rightDelete_clicked",
        "deleteVideo",
        "auto_trash_mode",
        "on_leftMove_clicked",
        "on_rightMove_clicked",
        "moveVideo",
        "from",
        "to",
        "on_swapFilenames_clicked",
        "on_thresholdSlider_valueChanged",
        "resizeEvent",
        "QResizeEvent*",
        "wheelEvent",
        "QWheelEvent*",
        "sigma",
        "cv::Mat",
        "m",
        "i",
        "j",
        "block_size",
        "covariance",
        "m0",
        "m1",
        "ssim",
        "on_identicalFilesAutoTrash_clicked",
        "on_autoDelOnlySizeDiffersButton_clicked",
        "on_pushButton_onlyTimeDiffersAutoTrash_clicked",
        "on_pushButton_importantFoldersAdd_clicked",
        "on_lockedFolderButton_clicked",
        "showImportantFolderContextMenu",
        "showLockedFolderContextMenu",
        "eraseImportantFolderItem",
        "eraseLockedFolderItem",
        "clearImportantFolderList",
        "clearLockedFolderList",
        "isFileInProtectedFolder",
        "filePathName",
        "displayApplePhotosAlbumDeletionMessage",
        "on_settingNamesInAnotherCheckbox_stateChanged",
        "arg1",
        "on_ignoreDuplicatePairButton_clicked",
        "initSortOrder",
        "onSortOrderChanged",
        "index",
        "applySortOrder"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'sendStatusMessage'
        QtMocHelpers::SignalData<void(const QString &) const>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'switchComparisonMode'
        QtMocHelpers::SignalData<void(const int &) const>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'adjustThresholdSlider'
        QtMocHelpers::SignalData<void(const int &) const>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'reportMatchingVideos'
        QtMocHelpers::SlotData<int()>(8, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'dragEnterEvent'
        QtMocHelpers::SlotData<void(QDragEnterEvent *)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Slot 'dropEvent'
        QtMocHelpers::SlotData<void(QDropEvent *)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 11 },
        }}),
        // Slot 'confirmToExit'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_prevVideo_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nextVideo_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'bothVideosMatch'
        QtMocHelpers::SlotData<bool(const Video *, const Video *)>(17, 2, QMC::AccessPrivate, QMetaType::Bool, {{
            { 0x80000000 | 18, 19 }, { 0x80000000 | 18, 20 },
        }}),
        // Slot 'phashSimilarity'
        QtMocHelpers::SlotData<int(const Video *, const Video *, const int &)>(21, 2, QMC::AccessPrivate, QMetaType::Int, {{
            { 0x80000000 | 18, 19 }, { 0x80000000 | 18, 20 }, { QMetaType::Int, 22 },
        }}),
        // Slot 'showVideo'
        QtMocHelpers::SlotData<void(const QString &)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 24 },
        }}),
        // Slot 'readableDuration'
        QtMocHelpers::SlotData<QString(const int64_t &) const>(25, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { 0x80000000 | 26, 27 },
        }}),
        // Slot 'readableFileSize'
        QtMocHelpers::SlotData<QString(const int64_t &) const>(28, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { 0x80000000 | 26, 29 },
        }}),
        // Slot 'readableBitRate'
        QtMocHelpers::SlotData<QString(const double &) const>(30, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { QMetaType::Double, 31 },
        }}),
        // Slot 'highlightBetterProperties'
        QtMocHelpers::SlotData<void() const>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateUI'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'comparisonsSoFar'
        QtMocHelpers::SlotData<int() const>(34, 2, QMC::AccessPrivate, QMetaType::Int),
        // Slot 'on_selectPhash_clicked'
        QtMocHelpers::SlotData<void(const bool &)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 36 },
        }}),
        // Slot 'on_selectSSIM_clicked'
        QtMocHelpers::SlotData<void(const bool &)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 36 },
        }}),
        // Slot 'on_leftImage_clicked'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_rightImage_clicked'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openMedia'
        QtMocHelpers::SlotData<void(const QString)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 41 },
        }}),
        // Slot 'on_leftFileName_clicked'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_rightFileName_clicked'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openFileManager'
        QtMocHelpers::SlotData<void(const QString &)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 45 },
        }}),
        // Slot 'on_leftDelete_clicked'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_rightDelete_clicked'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deleteVideo'
        QtMocHelpers::SlotData<void(const int &, const bool)>(48, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 24 }, { QMetaType::Bool, 49 },
        }}),
        // Slot 'deleteVideo'
        QtMocHelpers::SlotData<void(const int &)>(48, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Slot 'on_leftMove_clicked'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_rightMove_clicked'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'moveVideo'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(52, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 53 }, { QMetaType::QString, 54 },
        }}),
        // Slot 'on_swapFilenames_clicked'
        QtMocHelpers::SlotData<void() const>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_thresholdSlider_valueChanged'
        QtMocHelpers::SlotData<void(const int &)>(56, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'resizeEvent'
        QtMocHelpers::SlotData<void(QResizeEvent *)>(57, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 58, 11 },
        }}),
        // Slot 'wheelEvent'
        QtMocHelpers::SlotData<void(QWheelEvent *)>(59, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 60, 11 },
        }}),
        // Slot 'sigma'
        QtMocHelpers::SlotData<double(const cv::Mat &, const int &, const int &, const int &) const>(61, 2, QMC::AccessPrivate, QMetaType::Double, {{
            { 0x80000000 | 62, 63 }, { QMetaType::Int, 64 }, { QMetaType::Int, 65 }, { QMetaType::Int, 66 },
        }}),
        // Slot 'covariance'
        QtMocHelpers::SlotData<double(const cv::Mat &, const cv::Mat &, const int &, const int &, const int &) const>(67, 2, QMC::AccessPrivate, QMetaType::Double, {{
            { 0x80000000 | 62, 68 }, { 0x80000000 | 62, 69 }, { QMetaType::Int, 64 }, { QMetaType::Int, 65 },
            { QMetaType::Int, 66 },
        }}),
        // Slot 'ssim'
        QtMocHelpers::SlotData<double(const cv::Mat &, const cv::Mat &, const int &) const>(70, 2, QMC::AccessPrivate, QMetaType::Double, {{
            { 0x80000000 | 62, 68 }, { 0x80000000 | 62, 69 }, { QMetaType::Int, 66 },
        }}),
        // Slot 'on_identicalFilesAutoTrash_clicked'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_autoDelOnlySizeDiffersButton_clicked'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_onlyTimeDiffersAutoTrash_clicked'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_importantFoldersAdd_clicked'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_lockedFolderButton_clicked'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showImportantFolderContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(76, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QPoint, 2 },
        }}),
        // Slot 'showLockedFolderContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(77, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QPoint, 2 },
        }}),
        // Slot 'eraseImportantFolderItem'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'eraseLockedFolderItem'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearImportantFolderList'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearLockedFolderList'
        QtMocHelpers::SlotData<void()>(81, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'isFileInProtectedFolder'
        QtMocHelpers::SlotData<bool(const QString) const>(82, 2, QMC::AccessPrivate, QMetaType::Bool, {{
            { QMetaType::QString, 83 },
        }}),
        // Slot 'displayApplePhotosAlbumDeletionMessage'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_settingNamesInAnotherCheckbox_stateChanged'
        QtMocHelpers::SlotData<void(int)>(85, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 86 },
        }}),
        // Slot 'on_ignoreDuplicatePairButton_clicked'
        QtMocHelpers::SlotData<void()>(87, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'initSortOrder'
        QtMocHelpers::SlotData<void()>(88, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSortOrderChanged'
        QtMocHelpers::SlotData<void(int)>(89, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 90 },
        }}),
        // Slot 'applySortOrder'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Comparison, qt_meta_tag_ZN10ComparisonE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Comparison::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ComparisonE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ComparisonE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10ComparisonE_t>.metaTypes,
    nullptr
} };

void Comparison::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Comparison *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sendStatusMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->switchComparisonMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->adjustThresholdSlider((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: { int _r = _t->reportMatchingVideos();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->dragEnterEvent((*reinterpret_cast< std::add_pointer_t<QDragEnterEvent*>>(_a[1]))); break;
        case 5: _t->dropEvent((*reinterpret_cast< std::add_pointer_t<QDropEvent*>>(_a[1]))); break;
        case 6: _t->confirmToExit(); break;
        case 7: _t->on_prevVideo_clicked(); break;
        case 8: _t->on_nextVideo_clicked(); break;
        case 9: { bool _r = _t->bothVideosMatch((*reinterpret_cast< std::add_pointer_t<const Video*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<const Video*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { int _r = _t->phashSimilarity((*reinterpret_cast< std::add_pointer_t<const Video*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<const Video*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->showVideo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: { QString _r = _t->readableDuration((*reinterpret_cast< std::add_pointer_t<int64_t>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->readableFileSize((*reinterpret_cast< std::add_pointer_t<int64_t>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->readableBitRate((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->highlightBetterProperties(); break;
        case 16: _t->updateUI(); break;
        case 17: { int _r = _t->comparisonsSoFar();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->on_selectPhash_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->on_selectSSIM_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->on_leftImage_clicked(); break;
        case 21: _t->on_rightImage_clicked(); break;
        case 22: _t->openMedia((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->on_leftFileName_clicked(); break;
        case 24: _t->on_rightFileName_clicked(); break;
        case 25: _t->openFileManager((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->on_leftDelete_clicked(); break;
        case 27: _t->on_rightDelete_clicked(); break;
        case 28: _t->deleteVideo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 29: _t->deleteVideo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->on_leftMove_clicked(); break;
        case 31: _t->on_rightMove_clicked(); break;
        case 32: _t->moveVideo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 33: _t->on_swapFilenames_clicked(); break;
        case 34: _t->on_thresholdSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 35: _t->resizeEvent((*reinterpret_cast< std::add_pointer_t<QResizeEvent*>>(_a[1]))); break;
        case 36: _t->wheelEvent((*reinterpret_cast< std::add_pointer_t<QWheelEvent*>>(_a[1]))); break;
        case 37: { double _r = _t->sigma((*reinterpret_cast< std::add_pointer_t<cv::Mat>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 38: { double _r = _t->covariance((*reinterpret_cast< std::add_pointer_t<cv::Mat>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<cv::Mat>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 39: { double _r = _t->ssim((*reinterpret_cast< std::add_pointer_t<cv::Mat>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<cv::Mat>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->on_identicalFilesAutoTrash_clicked(); break;
        case 41: _t->on_autoDelOnlySizeDiffersButton_clicked(); break;
        case 42: _t->on_pushButton_onlyTimeDiffersAutoTrash_clicked(); break;
        case 43: _t->on_pushButton_importantFoldersAdd_clicked(); break;
        case 44: _t->on_lockedFolderButton_clicked(); break;
        case 45: _t->showImportantFolderContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 46: _t->showLockedFolderContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 47: _t->eraseImportantFolderItem(); break;
        case 48: _t->eraseLockedFolderItem(); break;
        case 49: _t->clearImportantFolderList(); break;
        case 50: _t->clearLockedFolderList(); break;
        case 51: { bool _r = _t->isFileInProtectedFolder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 52: _t->displayApplePhotosAlbumDeletionMessage(); break;
        case 53: _t->on_settingNamesInAnotherCheckbox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 54: _t->on_ignoreDuplicatePairButton_clicked(); break;
        case 55: _t->initSortOrder(); break;
        case 56: _t->onSortOrderChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 57: _t->applySortOrder(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Comparison::*)(const QString & ) const>(_a, &Comparison::sendStatusMessage, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Comparison::*)(const int & ) const>(_a, &Comparison::switchComparisonMode, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Comparison::*)(const int & ) const>(_a, &Comparison::adjustThresholdSlider, 2))
            return;
    }
}

const QMetaObject *Comparison::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Comparison::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ComparisonE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Comparison::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 58;
    }
    return _id;
}

// SIGNAL 0
void Comparison::sendStatusMessage(const QString & _t1)const
{
    QMetaObject::activate<void>(const_cast< Comparison *>(this), &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Comparison::switchComparisonMode(const int & _t1)const
{
    QMetaObject::activate<void>(const_cast< Comparison *>(this), &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Comparison::adjustThresholdSlider(const int & _t1)const
{
    QMetaObject::activate<void>(const_cast< Comparison *>(this), &staticMetaObject, 2, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN14ClickableLabelE_t {};
} // unnamed namespace

template <> constexpr inline auto ClickableLabel::qt_create_metaobjectdata<qt_meta_tag_ZN14ClickableLabelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ClickableLabel",
        "clicked",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'clicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ClickableLabel, qt_meta_tag_ZN14ClickableLabelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ClickableLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14ClickableLabelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14ClickableLabelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14ClickableLabelE_t>.metaTypes,
    nullptr
} };

void ClickableLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ClickableLabel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ClickableLabel::*)()>(_a, &ClickableLabel::clicked, 0))
            return;
    }
}

const QMetaObject *ClickableLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClickableLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14ClickableLabelE_t>.strings))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int ClickableLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ClickableLabel::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP

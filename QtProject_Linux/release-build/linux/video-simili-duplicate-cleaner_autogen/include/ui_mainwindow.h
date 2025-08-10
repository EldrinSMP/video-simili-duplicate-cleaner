/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionEmpty_cache;
    QAction *actionCredits;
    QAction *actionContact;
    QAction *actionChange_trash_folder;
    QAction *actionRestoreMoveToTrash;
    QAction *actionSet_custom_cache_location;
    QAction *actionRestore_default_cache_location;
    QAction *actionEnable_direct_deletion_instead_of_trash;
    QAction *actionRestore_all_settings;
    QAction *actionOpen_logs_folder;
    QAction *actionDelete_log_files;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *selectThumbnails;
    QGroupBox *groupBox_UseCache;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radio_UseCacheNo;
    QRadioButton *radio_UseCacheYes;
    QRadioButton *radio_UseCacheOnly;
    QCheckBox *verboseCheckbox;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *selectPhash;
    QRadioButton *selectSSIM;
    QLabel *label_3;
    QComboBox *blocksizeCombo;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSlider *thresholdSlider;
    QLabel *threshPercent;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QLabel *sameDurationModifierLabel;
    QComboBox *sameDurationCombo;
    QComboBox *differentDurationCombo;
    QLabel *differentDurationModifierLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *directoryBox;
    QPushButton *browseFolders;
    QPushButton *browseApplePhotos;
    QPushButton *findDuplicates;
    QTextEdit *statusBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *processedFiles;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QMenu *menuGeneral;
    QMenu *menuTools;
    QMenu *menuInfo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(859, 642);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAcceptDrops(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionEmpty_cache = new QAction(MainWindow);
        actionEmpty_cache->setObjectName("actionEmpty_cache");
        actionEmpty_cache->setEnabled(true);
        actionCredits = new QAction(MainWindow);
        actionCredits->setObjectName("actionCredits");
        actionContact = new QAction(MainWindow);
        actionContact->setObjectName("actionContact");
        actionChange_trash_folder = new QAction(MainWindow);
        actionChange_trash_folder->setObjectName("actionChange_trash_folder");
        actionRestoreMoveToTrash = new QAction(MainWindow);
        actionRestoreMoveToTrash->setObjectName("actionRestoreMoveToTrash");
        actionRestoreMoveToTrash->setEnabled(false);
        actionSet_custom_cache_location = new QAction(MainWindow);
        actionSet_custom_cache_location->setObjectName("actionSet_custom_cache_location");
        actionRestore_default_cache_location = new QAction(MainWindow);
        actionRestore_default_cache_location->setObjectName("actionRestore_default_cache_location");
        actionRestore_default_cache_location->setEnabled(true);
        actionEnable_direct_deletion_instead_of_trash = new QAction(MainWindow);
        actionEnable_direct_deletion_instead_of_trash->setObjectName("actionEnable_direct_deletion_instead_of_trash");
        actionEnable_direct_deletion_instead_of_trash->setEnabled(true);
        actionRestore_all_settings = new QAction(MainWindow);
        actionRestore_all_settings->setObjectName("actionRestore_all_settings");
        actionOpen_logs_folder = new QAction(MainWindow);
        actionOpen_logs_folder->setObjectName("actionOpen_logs_folder");
        actionDelete_log_files = new QAction(MainWindow);
        actionDelete_log_files->setObjectName("actionDelete_log_files");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, 0, 0, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 0, 0, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label_2);

        selectThumbnails = new QComboBox(centralWidget);
        selectThumbnails->setObjectName("selectThumbnails");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(selectThumbnails->sizePolicy().hasHeightForWidth());
        selectThumbnails->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(selectThumbnails);


        verticalLayout_2->addLayout(horizontalLayout_2);

        groupBox_UseCache = new QGroupBox(centralWidget);
        groupBox_UseCache->setObjectName("groupBox_UseCache");
        horizontalLayout_6 = new QHBoxLayout(groupBox_UseCache);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        radio_UseCacheNo = new QRadioButton(groupBox_UseCache);
        radio_UseCacheNo->setObjectName("radio_UseCacheNo");

        horizontalLayout_6->addWidget(radio_UseCacheNo);

        radio_UseCacheYes = new QRadioButton(groupBox_UseCache);
        radio_UseCacheYes->setObjectName("radio_UseCacheYes");
        radio_UseCacheYes->setChecked(true);

        horizontalLayout_6->addWidget(radio_UseCacheYes);

        radio_UseCacheOnly = new QRadioButton(groupBox_UseCache);
        radio_UseCacheOnly->setObjectName("radio_UseCacheOnly");

        horizontalLayout_6->addWidget(radio_UseCacheOnly);


        verticalLayout_2->addWidget(groupBox_UseCache);

        verboseCheckbox = new QCheckBox(centralWidget);
        verboseCheckbox->setObjectName("verboseCheckbox");
        verboseCheckbox->setToolTipDuration(-1);
        verboseCheckbox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        verticalLayout_2->addWidget(verboseCheckbox);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        selectPhash = new QRadioButton(groupBox);
        selectPhash->setObjectName("selectPhash");
        sizePolicy3.setHeightForWidth(selectPhash->sizePolicy().hasHeightForWidth());
        selectPhash->setSizePolicy(sizePolicy3);
        selectPhash->setChecked(true);

        verticalLayout_6->addWidget(selectPhash);

        selectSSIM = new QRadioButton(groupBox);
        selectSSIM->setObjectName("selectSSIM");
        sizePolicy3.setHeightForWidth(selectSSIM->sizePolicy().hasHeightForWidth());
        selectSSIM->setSizePolicy(sizePolicy3);

        verticalLayout_6->addWidget(selectSSIM);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout_6->addWidget(label_3);

        blocksizeCombo = new QComboBox(groupBox);
        blocksizeCombo->setObjectName("blocksizeCombo");
        sizePolicy3.setHeightForWidth(blocksizeCombo->sizePolicy().hasHeightForWidth());
        blocksizeCombo->setSizePolicy(sizePolicy3);

        verticalLayout_6->addWidget(blocksizeCombo);


        horizontalLayout_4->addWidget(groupBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 10);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label);

        thresholdSlider = new QSlider(centralWidget);
        thresholdSlider->setObjectName("thresholdSlider");
        sizePolicy3.setHeightForWidth(thresholdSlider->sizePolicy().hasHeightForWidth());
        thresholdSlider->setSizePolicy(sizePolicy3);
        thresholdSlider->setMinimumSize(QSize(200, 1));
        thresholdSlider->setMinimum(1);
        thresholdSlider->setMaximum(100);
        thresholdSlider->setPageStep(8);
        thresholdSlider->setValue(100);
        thresholdSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(thresholdSlider);

        threshPercent = new QLabel(centralWidget);
        threshPercent->setObjectName("threshPercent");
        threshPercent->setMinimumSize(QSize(30, 0));
        threshPercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(threshPercent);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);


        verticalLayout_3->addLayout(horizontalLayout_5);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(6);
        sameDurationModifierLabel = new QLabel(centralWidget);
        sameDurationModifierLabel->setObjectName("sameDurationModifierLabel");
        sameDurationModifierLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(sameDurationModifierLabel, 1, 0, 1, 1);

        sameDurationCombo = new QComboBox(centralWidget);
        sameDurationCombo->setObjectName("sameDurationCombo");
        sizePolicy.setHeightForWidth(sameDurationCombo->sizePolicy().hasHeightForWidth());
        sameDurationCombo->setSizePolicy(sizePolicy);
        sameDurationCombo->setMinimumSize(QSize(0, 0));
        sameDurationCombo->setMaximumSize(QSize(50, 16777215));
        sameDurationCombo->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(sameDurationCombo, 1, 1, 1, 1);

        differentDurationCombo = new QComboBox(centralWidget);
        differentDurationCombo->setObjectName("differentDurationCombo");
        differentDurationCombo->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(differentDurationCombo, 0, 1, 1, 1);

        differentDurationModifierLabel = new QLabel(centralWidget);
        differentDurationModifierLabel->setObjectName("differentDurationModifierLabel");
        differentDurationModifierLabel->setLayoutDirection(Qt::LeftToRight);
        differentDurationModifierLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(differentDurationModifierLabel, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        directoryBox = new QLineEdit(centralWidget);
        directoryBox->setObjectName("directoryBox");
        directoryBox->setClearButtonEnabled(true);

        horizontalLayout->addWidget(directoryBox);

        browseFolders = new QPushButton(centralWidget);
        browseFolders->setObjectName("browseFolders");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(browseFolders->sizePolicy().hasHeightForWidth());
        browseFolders->setSizePolicy(sizePolicy4);
        browseFolders->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(browseFolders);

        browseApplePhotos = new QPushButton(centralWidget);
        browseApplePhotos->setObjectName("browseApplePhotos");
        browseApplePhotos->setEnabled(true);
        sizePolicy4.setHeightForWidth(browseApplePhotos->sizePolicy().hasHeightForWidth());
        browseApplePhotos->setSizePolicy(sizePolicy4);
        browseApplePhotos->setMaximumSize(QSize(40, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/static-ressources/apple-photos-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        browseApplePhotos->setIcon(icon);

        horizontalLayout->addWidget(browseApplePhotos);

        findDuplicates = new QPushButton(centralWidget);
        findDuplicates->setObjectName("findDuplicates");

        horizontalLayout->addWidget(findDuplicates);


        verticalLayout->addLayout(horizontalLayout);

        statusBox = new QTextEdit(centralWidget);
        statusBox->setObjectName("statusBox");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(statusBox->sizePolicy().hasHeightForWidth());
        statusBox->setSizePolicy(sizePolicy5);
        statusBox->setMinimumSize(QSize(0, 281));
        statusBox->setReadOnly(true);

        verticalLayout->addWidget(statusBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        processedFiles = new QLabel(centralWidget);
        processedFiles->setObjectName("processedFiles");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(processedFiles->sizePolicy().hasHeightForWidth());
        processedFiles->setSizePolicy(sizePolicy6);
        processedFiles->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(processedFiles);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(0);

        horizontalLayout_3->addWidget(progressBar);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 859, 37));
        menuGeneral = new QMenu(menuBar);
        menuGeneral->setObjectName("menuGeneral");
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName("menuTools");
        menuInfo = new QMenu(menuBar);
        menuInfo->setObjectName("menuInfo");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuGeneral->menuAction());
        menuBar->addAction(menuInfo->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuGeneral->addAction(actionAbout);
        menuTools->addAction(actionEmpty_cache);
        menuTools->addAction(actionSet_custom_cache_location);
        menuTools->addAction(actionRestore_default_cache_location);
        menuTools->addSeparator();
        menuTools->addAction(actionChange_trash_folder);
        menuTools->addAction(actionEnable_direct_deletion_instead_of_trash);
        menuTools->addAction(actionRestoreMoveToTrash);
        menuTools->addSeparator();
        menuTools->addAction(actionOpen_logs_folder);
        menuTools->addAction(actionDelete_log_files);
        menuTools->addSeparator();
        menuTools->addAction(actionRestore_all_settings);
        menuInfo->addAction(actionCredits);
        menuInfo->addAction(actionContact);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Video simili duplicate cleaner", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionEmpty_cache->setText(QCoreApplication::translate("MainWindow", "Empty cache", nullptr));
        actionCredits->setText(QCoreApplication::translate("MainWindow", "Credits", nullptr));
        actionContact->setText(QCoreApplication::translate("MainWindow", "Contact", nullptr));
        actionChange_trash_folder->setText(QCoreApplication::translate("MainWindow", "Select folder instead of trash", nullptr));
        actionRestoreMoveToTrash->setText(QCoreApplication::translate("MainWindow", "Restore move to trash behavior", nullptr));
        actionSet_custom_cache_location->setText(QCoreApplication::translate("MainWindow", "Set custom cache location", nullptr));
        actionRestore_default_cache_location->setText(QCoreApplication::translate("MainWindow", "Restore default cache location", nullptr));
        actionEnable_direct_deletion_instead_of_trash->setText(QCoreApplication::translate("MainWindow", "Enable direct deletion instead of trash", nullptr));
        actionRestore_all_settings->setText(QCoreApplication::translate("MainWindow", "Restore all settings", nullptr));
        actionOpen_logs_folder->setText(QCoreApplication::translate("MainWindow", "Open logs folder", nullptr));
        actionDelete_log_files->setText(QCoreApplication::translate("MainWindow", "Delete log files", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Thumbnails:", nullptr));
#if QT_CONFIG(tooltip)
        selectThumbnails->setToolTip(QCoreApplication::translate("MainWindow", "<nobr>CutEnds finds videos where beginning or end is cut off</nobr><br><nobr>2x2 is usually enough to find identical videos, but</nobr>\n"
"<br><nobr>every mode will have slightly different results. More = slower</nobr>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_UseCache->setTitle(QCoreApplication::translate("MainWindow", "Use cache", nullptr));
#if QT_CONFIG(tooltip)
        radio_UseCacheNo->setToolTip(QCoreApplication::translate("MainWindow", "Videos will not be stored or loaded from cache", nullptr));
#endif // QT_CONFIG(tooltip)
        radio_UseCacheNo->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
#if QT_CONFIG(tooltip)
        radio_UseCacheYes->setToolTip(QCoreApplication::translate("MainWindow", "New videos will be cached and already cached ones will be used", nullptr));
#endif // QT_CONFIG(tooltip)
        radio_UseCacheYes->setText(QCoreApplication::translate("MainWindow", "Yes", nullptr));
#if QT_CONFIG(tooltip)
        radio_UseCacheOnly->setToolTip(QCoreApplication::translate("MainWindow", "Only videos already cached will be compared", nullptr));
#endif // QT_CONFIG(tooltip)
        radio_UseCacheOnly->setText(QCoreApplication::translate("MainWindow", "Only", nullptr));
#if QT_CONFIG(tooltip)
        verboseCheckbox->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>List all processed video names.  </p><p>Errors will be listed in any case.</p><p>All logs will be kept in log files.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        verboseCheckbox->setText(QCoreApplication::translate("MainWindow", "Verbose logs", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Similarity algorithm", nullptr));
#if QT_CONFIG(tooltip)
        selectPhash->setToolTip(QCoreApplication::translate("MainWindow", "Perceptual hashing algorithm", nullptr));
#endif // QT_CONFIG(tooltip)
        selectPhash->setText(QCoreApplication::translate("MainWindow", "pHash", nullptr));
#if QT_CONFIG(tooltip)
        selectSSIM->setToolTip(QCoreApplication::translate("MainWindow", "Structural similarity algorithm. Slighly more accurate, much slower", nullptr));
#endif // QT_CONFIG(tooltip)
        selectSSIM->setText(QCoreApplication::translate("MainWindow", "SSIM", nullptr));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("MainWindow", "SSIM block size:", nullptr));
#if QT_CONFIG(tooltip)
        blocksizeCombo->setToolTip(QCoreApplication::translate("MainWindow", "Smaller block size is more accurate, but slower", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "Comparison threshold:", nullptr));
        threshPercent->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        sameDurationModifierLabel->setText(QCoreApplication::translate("MainWindow", "If both durations within 1s, lower threshold by", nullptr));
#if QT_CONFIG(tooltip)
        sameDurationCombo->setToolTip(QCoreApplication::translate("MainWindow", "<nobr>How important it is that same length videos should match</nobr><br><nobr>Avoid false positives by increasing comparison threshold</nobr><br><nobr>at the same time you increase this value</nobr>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        differentDurationCombo->setToolTip(QCoreApplication::translate("MainWindow", "<nobr>How important it is that different length videos should not match</nobr>", nullptr));
#endif // QT_CONFIG(tooltip)
        differentDurationModifierLabel->setText(QCoreApplication::translate("MainWindow", "If both durations differ 1s, raise threshold by", nullptr));
        directoryBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Folders to search, separated by semicolon. Drag and drop supported.", nullptr));
        browseFolders->setText(QString());
#if QT_CONFIG(tooltip)
        browseApplePhotos->setToolTip(QCoreApplication::translate("MainWindow", "Select Apple Photos Library", nullptr));
#endif // QT_CONFIG(tooltip)
        browseApplePhotos->setText(QString());
        findDuplicates->setText(QCoreApplication::translate("MainWindow", "Find duplicates", nullptr));
#if QT_CONFIG(tooltip)
        statusBox->setToolTip(QCoreApplication::translate("MainWindow", "Print all found video names", nullptr));
#endif // QT_CONFIG(tooltip)
        processedFiles->setText(QCoreApplication::translate("MainWindow", "Processed files", nullptr));
        menuGeneral->setTitle(QCoreApplication::translate("MainWindow", "General", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuInfo->setTitle(QCoreApplication::translate("MainWindow", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

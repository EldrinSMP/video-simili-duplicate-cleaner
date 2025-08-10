/********************************************************************************
** Form generated from reading UI file 'comparison.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPARISON_H
#define UI_COMPARISON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Comparison
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_sortBy;
    QComboBox *comboBox_sortBy;
    QSpacerItem *horizontalSpacer_12;
    QCheckBox *settingNamesInAnotherCheckbox;
    QSpacerItem *horizontalSpacer_6;
    QRadioButton *selectPhash;
    QRadioButton *selectSSIM;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label;
    QSlider *thresholdSlider;
    QLabel *percentSim;
    QLabel *label_percent;
    QTabWidget *tabWidget;
    QWidget *tabManual;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayoutLeftPane;
    ClickableLabel *leftImage;
    QHBoxLayout *horizontalFileNameLayout;
    QLabel *labelFileName;
    ClickableLabel *leftFileName;
    QHBoxLayout *horizontalPathLayout;
    QLabel *labelPath;
    QLabel *leftPathName;
    QGridLayout *gridLayout_leftSizeBitFrame;
    QHBoxLayout *horizontalLayoutLeftBitRate;
    QLabel *labelLeftBitRate;
    QLabel *leftBitRate;
    QHBoxLayout *horizontalLayoutLeftFileSize;
    QLabel *labelLeftFileSize;
    QLabel *leftFileSize;
    QHBoxLayout *horizontalLayoutLeftFrameRate;
    QLabel *labelLeftFrameRate;
    QLabel *leftFrameRate;
    QGridLayout *gridLayout_LeftDetails;
    QHBoxLayout *horizontalLayout_LeftDurartion;
    QLabel *labelLeftDuration;
    QLabel *leftDuration;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelLeftCodec;
    QLabel *leftCodec;
    QHBoxLayout *horizontalLayout_leftFileCreate;
    QLabel *label_leftFileCreate;
    QLabel *leftFileCreated;
    QHBoxLayout *horizontalLayout_13;
    QLabel *labelLeftResolution;
    QLabel *leftResolution;
    QHBoxLayout *horizontalLayout_14;
    QLabel *labelLeftAudio;
    QLabel *leftAudio;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_leftFileModif;
    QLabel *leftModified;
    QHBoxLayout *horizontalLayout_leftGps;
    QLabel *labelLeftGps;
    QLabel *leftGpsCoordinates;
    QVBoxLayout *verticalLayout_leftMetadata;
    QLabel *label_leftMetadata;
    QTextEdit *textEdit_leftMetadata;
    QVBoxLayout *verticalLayoutRightPane;
    ClickableLabel *rightImage;
    QHBoxLayout *horizontalLayout_rightFileName;
    QLabel *label_28;
    ClickableLabel *rightFileName;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_29;
    QLabel *rightPathName;
    QGridLayout *gridLayout_rightSizeBitFrame;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_32;
    QLabel *rightFileSize;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_34;
    QLabel *rightBitRate;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_44;
    QLabel *rightFrameRate;
    QGridLayout *gridLayout_RightDetails;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_33;
    QLabel *rightDuration;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_35;
    QLabel *rightCodec;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_rightFileCreate;
    QLabel *rightFileCreated;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_43;
    QLabel *rightResolution;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_45;
    QLabel *rightAudio;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_42;
    QLabel *rightModified;
    QHBoxLayout *horizontalLayout_rightGps;
    QLabel *labelRightGps;
    QLabel *rightGpsCoordinates;
    QVBoxLayout *verticalLayout_rightMetadata;
    QLabel *label_rightMetadata;
    QTextEdit *textEdit_rightMetadata;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *prevVideo;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *leftMove;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *leftDelete;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *rightDelete;
    QSpacerItem *horizontalSpacer;
    QPushButton *rightMove;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *nextVideo;
    QHBoxLayout *swap_ignore_Layout;
    QPushButton *swapFilenames;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *ignoreDuplicatePairButton;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_7;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_15;
    QFrame *line_5;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *verticalLayout_NbNamesContainedOption_autoIdentFiles;
    QLabel *label_NbNamesContainedOption;
    QLabel *label_namesContainedInOneAnotherStatus_autoIdentFiles;
    QLabel *label_8;
    QPushButton *identicalFilesAutoTrash;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_NbNamesContainedOption_autoOnlySizeDiff;
    QLabel *label_11;
    QLabel *label_namesContainedInOneAnotherStatus_autoOnlySizeDiff;
    QCheckBox *autoOnlySizeDontCheckResFpsCheckbox;
    QPushButton *autoDelOnlySizeDiffersButton;
    QFrame *line;
    QHBoxLayout *autodeleteOnlyTimeDiffersHorizontalLayout;
    QLabel *label_onlyTimeDiffers;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_label_onlyTimeDiffers_Descript;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *radioButton_onlyTimeDiffers_trashEarlier;
    QRadioButton *radioButton_onlyTimeDiffers_trashLater;
    QPushButton *pushButton_onlyTimeDiffersAutoTrash;
    QHBoxLayout *foldersAutodeleteHorizontalLayout;
    QLabel *label_folderSettingsChoice;
    QLabel *label_folderSettingsChoice_Description;
    QPushButton *pushButton_folderSettingsChoiceAutoTrash;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *lockedFoldersHorizontalLayout;
    QLabel *label_24;
    QLabel *label_25;
    QListWidget *lockedFolderslistWidget;
    QPushButton *lockedFolderButton;
    QHBoxLayout *importantFoldersHorizontalLayout;
    QLabel *label_importantFolders;
    QLabel *label_importantFoldersDescript;
    QListWidget *importantFoldersListWidget;
    QPushButton *pushButton_importantFoldersAdd;
    QHBoxLayout *horizontalLayout_2;
    QLabel *identicalBits;
    QSpacerItem *horizontalSpacer_3;
    QLabel *trashedFiles;
    QProgressBar *progressBar;
    QLabel *currentVideo;
    QLabel *label_9;
    QLabel *totalVideos;
    QCheckBox *disableDeleteConfirmationCheckbox;

    void setupUi(QDialog *Comparison)
    {
        if (Comparison->objectName().isEmpty())
            Comparison->setObjectName("Comparison");
        Comparison->resize(925, 598);
        verticalLayout = new QVBoxLayout(Comparison);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        label_sortBy = new QLabel(Comparison);
        label_sortBy->setObjectName("label_sortBy");

        horizontalLayout_4->addWidget(label_sortBy);

        comboBox_sortBy = new QComboBox(Comparison);
        comboBox_sortBy->addItem(QString());
        comboBox_sortBy->addItem(QString());
        comboBox_sortBy->addItem(QString());
        comboBox_sortBy->setObjectName("comboBox_sortBy");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_sortBy->sizePolicy().hasHeightForWidth());
        comboBox_sortBy->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(comboBox_sortBy);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        settingNamesInAnotherCheckbox = new QCheckBox(Comparison);
        settingNamesInAnotherCheckbox->setObjectName("settingNamesInAnotherCheckbox");

        horizontalLayout_4->addWidget(settingNamesInAnotherCheckbox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        selectPhash = new QRadioButton(Comparison);
        selectPhash->setObjectName("selectPhash");
        selectPhash->setChecked(true);

        horizontalLayout_4->addWidget(selectPhash);

        selectSSIM = new QRadioButton(Comparison);
        selectSSIM->setObjectName("selectSSIM");

        horizontalLayout_4->addWidget(selectSSIM);

        horizontalSpacer_8 = new QSpacerItem(30, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        label = new QLabel(Comparison);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        thresholdSlider = new QSlider(Comparison);
        thresholdSlider->setObjectName("thresholdSlider");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(thresholdSlider->sizePolicy().hasHeightForWidth());
        thresholdSlider->setSizePolicy(sizePolicy1);
        thresholdSlider->setMinimumSize(QSize(150, 0));
        thresholdSlider->setMinimum(1);
        thresholdSlider->setMaximum(100);
        thresholdSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_4->addWidget(thresholdSlider);

        percentSim = new QLabel(Comparison);
        percentSim->setObjectName("percentSim");
        percentSim->setMinimumSize(QSize(30, 0));
        percentSim->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_4->addWidget(percentSim);

        label_percent = new QLabel(Comparison);
        label_percent->setObjectName("label_percent");

        horizontalLayout_4->addWidget(label_percent);


        verticalLayout->addLayout(horizontalLayout_4);

        tabWidget = new QTabWidget(Comparison);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setMinimumSize(QSize(500, 500));
        tabManual = new QWidget();
        tabManual->setObjectName("tabManual");
        horizontalLayout_5 = new QHBoxLayout(tabManual);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        verticalLayoutLeftPane = new QVBoxLayout();
        verticalLayoutLeftPane->setObjectName("verticalLayoutLeftPane");
        verticalLayoutLeftPane->setContentsMargins(-1, -1, -1, 0);
        leftImage = new ClickableLabel(tabManual);
        leftImage->setObjectName("leftImage");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(leftImage->sizePolicy().hasHeightForWidth());
        leftImage->setSizePolicy(sizePolicy3);
        leftImage->setMinimumSize(QSize(400, 100));
        leftImage->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayoutLeftPane->addWidget(leftImage);

        horizontalFileNameLayout = new QHBoxLayout();
        horizontalFileNameLayout->setObjectName("horizontalFileNameLayout");
        labelFileName = new QLabel(tabManual);
        labelFileName->setObjectName("labelFileName");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelFileName->sizePolicy().hasHeightForWidth());
        labelFileName->setSizePolicy(sizePolicy4);

        horizontalFileNameLayout->addWidget(labelFileName);

        leftFileName = new ClickableLabel(tabManual);
        leftFileName->setObjectName("leftFileName");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(leftFileName->sizePolicy().hasHeightForWidth());
        leftFileName->setSizePolicy(sizePolicy5);
        leftFileName->setMinimumSize(QSize(0, 13));
        leftFileName->setStyleSheet(QString::fromUtf8("color : rgb(118, 214, 255); text-decoration : underline;"));

        horizontalFileNameLayout->addWidget(leftFileName);


        verticalLayoutLeftPane->addLayout(horizontalFileNameLayout);

        horizontalPathLayout = new QHBoxLayout();
        horizontalPathLayout->setObjectName("horizontalPathLayout");
        labelPath = new QLabel(tabManual);
        labelPath->setObjectName("labelPath");
        sizePolicy4.setHeightForWidth(labelPath->sizePolicy().hasHeightForWidth());
        labelPath->setSizePolicy(sizePolicy4);

        horizontalPathLayout->addWidget(labelPath);

        leftPathName = new QLabel(tabManual);
        leftPathName->setObjectName("leftPathName");
        sizePolicy5.setHeightForWidth(leftPathName->sizePolicy().hasHeightForWidth());
        leftPathName->setSizePolicy(sizePolicy5);
        leftPathName->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalPathLayout->addWidget(leftPathName);


        verticalLayoutLeftPane->addLayout(horizontalPathLayout);

        gridLayout_leftSizeBitFrame = new QGridLayout();
        gridLayout_leftSizeBitFrame->setObjectName("gridLayout_leftSizeBitFrame");
        horizontalLayoutLeftBitRate = new QHBoxLayout();
        horizontalLayoutLeftBitRate->setObjectName("horizontalLayoutLeftBitRate");
        labelLeftBitRate = new QLabel(tabManual);
        labelLeftBitRate->setObjectName("labelLeftBitRate");
        sizePolicy4.setHeightForWidth(labelLeftBitRate->sizePolicy().hasHeightForWidth());
        labelLeftBitRate->setSizePolicy(sizePolicy4);

        horizontalLayoutLeftBitRate->addWidget(labelLeftBitRate);

        leftBitRate = new QLabel(tabManual);
        leftBitRate->setObjectName("leftBitRate");
        sizePolicy5.setHeightForWidth(leftBitRate->sizePolicy().hasHeightForWidth());
        leftBitRate->setSizePolicy(sizePolicy5);

        horizontalLayoutLeftBitRate->addWidget(leftBitRate);


        gridLayout_leftSizeBitFrame->addLayout(horizontalLayoutLeftBitRate, 2, 1, 1, 1);

        horizontalLayoutLeftFileSize = new QHBoxLayout();
        horizontalLayoutLeftFileSize->setObjectName("horizontalLayoutLeftFileSize");
        labelLeftFileSize = new QLabel(tabManual);
        labelLeftFileSize->setObjectName("labelLeftFileSize");
        sizePolicy4.setHeightForWidth(labelLeftFileSize->sizePolicy().hasHeightForWidth());
        labelLeftFileSize->setSizePolicy(sizePolicy4);

        horizontalLayoutLeftFileSize->addWidget(labelLeftFileSize);

        leftFileSize = new QLabel(tabManual);
        leftFileSize->setObjectName("leftFileSize");
        sizePolicy5.setHeightForWidth(leftFileSize->sizePolicy().hasHeightForWidth());
        leftFileSize->setSizePolicy(sizePolicy5);

        horizontalLayoutLeftFileSize->addWidget(leftFileSize);


        gridLayout_leftSizeBitFrame->addLayout(horizontalLayoutLeftFileSize, 2, 0, 1, 1);

        horizontalLayoutLeftFrameRate = new QHBoxLayout();
        horizontalLayoutLeftFrameRate->setObjectName("horizontalLayoutLeftFrameRate");
        labelLeftFrameRate = new QLabel(tabManual);
        labelLeftFrameRate->setObjectName("labelLeftFrameRate");
        sizePolicy4.setHeightForWidth(labelLeftFrameRate->sizePolicy().hasHeightForWidth());
        labelLeftFrameRate->setSizePolicy(sizePolicy4);

        horizontalLayoutLeftFrameRate->addWidget(labelLeftFrameRate);

        leftFrameRate = new QLabel(tabManual);
        leftFrameRate->setObjectName("leftFrameRate");
        sizePolicy5.setHeightForWidth(leftFrameRate->sizePolicy().hasHeightForWidth());
        leftFrameRate->setSizePolicy(sizePolicy5);

        horizontalLayoutLeftFrameRate->addWidget(leftFrameRate);


        gridLayout_leftSizeBitFrame->addLayout(horizontalLayoutLeftFrameRate, 2, 2, 1, 1);


        verticalLayoutLeftPane->addLayout(gridLayout_leftSizeBitFrame);

        gridLayout_LeftDetails = new QGridLayout();
        gridLayout_LeftDetails->setObjectName("gridLayout_LeftDetails");
        gridLayout_LeftDetails->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        gridLayout_LeftDetails->setHorizontalSpacing(6);
        gridLayout_LeftDetails->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout_LeftDurartion = new QHBoxLayout();
        horizontalLayout_LeftDurartion->setObjectName("horizontalLayout_LeftDurartion");
        labelLeftDuration = new QLabel(tabManual);
        labelLeftDuration->setObjectName("labelLeftDuration");
        sizePolicy4.setHeightForWidth(labelLeftDuration->sizePolicy().hasHeightForWidth());
        labelLeftDuration->setSizePolicy(sizePolicy4);

        horizontalLayout_LeftDurartion->addWidget(labelLeftDuration);

        leftDuration = new QLabel(tabManual);
        leftDuration->setObjectName("leftDuration");
        sizePolicy5.setHeightForWidth(leftDuration->sizePolicy().hasHeightForWidth());
        leftDuration->setSizePolicy(sizePolicy5);

        horizontalLayout_LeftDurartion->addWidget(leftDuration);


        gridLayout_LeftDetails->addLayout(horizontalLayout_LeftDurartion, 2, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        labelLeftCodec = new QLabel(tabManual);
        labelLeftCodec->setObjectName("labelLeftCodec");
        sizePolicy4.setHeightForWidth(labelLeftCodec->sizePolicy().hasHeightForWidth());
        labelLeftCodec->setSizePolicy(sizePolicy4);

        horizontalLayout_9->addWidget(labelLeftCodec);

        leftCodec = new QLabel(tabManual);
        leftCodec->setObjectName("leftCodec");
        sizePolicy5.setHeightForWidth(leftCodec->sizePolicy().hasHeightForWidth());
        leftCodec->setSizePolicy(sizePolicy5);

        horizontalLayout_9->addWidget(leftCodec);


        gridLayout_LeftDetails->addLayout(horizontalLayout_9, 3, 0, 1, 1);

        horizontalLayout_leftFileCreate = new QHBoxLayout();
        horizontalLayout_leftFileCreate->setObjectName("horizontalLayout_leftFileCreate");
        label_leftFileCreate = new QLabel(tabManual);
        label_leftFileCreate->setObjectName("label_leftFileCreate");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_leftFileCreate->sizePolicy().hasHeightForWidth());
        label_leftFileCreate->setSizePolicy(sizePolicy6);

        horizontalLayout_leftFileCreate->addWidget(label_leftFileCreate);

        leftFileCreated = new QLabel(tabManual);
        leftFileCreated->setObjectName("leftFileCreated");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(leftFileCreated->sizePolicy().hasHeightForWidth());
        leftFileCreated->setSizePolicy(sizePolicy7);

        horizontalLayout_leftFileCreate->addWidget(leftFileCreated);


        gridLayout_LeftDetails->addLayout(horizontalLayout_leftFileCreate, 5, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        labelLeftResolution = new QLabel(tabManual);
        labelLeftResolution->setObjectName("labelLeftResolution");
        sizePolicy4.setHeightForWidth(labelLeftResolution->sizePolicy().hasHeightForWidth());
        labelLeftResolution->setSizePolicy(sizePolicy4);

        horizontalLayout_13->addWidget(labelLeftResolution);

        leftResolution = new QLabel(tabManual);
        leftResolution->setObjectName("leftResolution");
        sizePolicy5.setHeightForWidth(leftResolution->sizePolicy().hasHeightForWidth());
        leftResolution->setSizePolicy(sizePolicy5);

        horizontalLayout_13->addWidget(leftResolution);


        gridLayout_LeftDetails->addLayout(horizontalLayout_13, 2, 1, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        labelLeftAudio = new QLabel(tabManual);
        labelLeftAudio->setObjectName("labelLeftAudio");
        sizePolicy4.setHeightForWidth(labelLeftAudio->sizePolicy().hasHeightForWidth());
        labelLeftAudio->setSizePolicy(sizePolicy4);

        horizontalLayout_14->addWidget(labelLeftAudio);

        leftAudio = new QLabel(tabManual);
        leftAudio->setObjectName("leftAudio");
        sizePolicy5.setHeightForWidth(leftAudio->sizePolicy().hasHeightForWidth());
        leftAudio->setSizePolicy(sizePolicy5);

        horizontalLayout_14->addWidget(leftAudio);


        gridLayout_LeftDetails->addLayout(horizontalLayout_14, 3, 1, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_leftFileModif = new QLabel(tabManual);
        label_leftFileModif->setObjectName("label_leftFileModif");
        sizePolicy4.setHeightForWidth(label_leftFileModif->sizePolicy().hasHeightForWidth());
        label_leftFileModif->setSizePolicy(sizePolicy4);

        horizontalLayout_15->addWidget(label_leftFileModif);

        leftModified = new QLabel(tabManual);
        leftModified->setObjectName("leftModified");
        sizePolicy5.setHeightForWidth(leftModified->sizePolicy().hasHeightForWidth());
        leftModified->setSizePolicy(sizePolicy5);

        horizontalLayout_15->addWidget(leftModified);


        gridLayout_LeftDetails->addLayout(horizontalLayout_15, 5, 1, 1, 1);


        verticalLayoutLeftPane->addLayout(gridLayout_LeftDetails);

        horizontalLayout_leftGps = new QHBoxLayout();
        horizontalLayout_leftGps->setObjectName("horizontalLayout_leftGps");
        labelLeftGps = new QLabel(tabManual);
        labelLeftGps->setObjectName("labelLeftGps");
        QSizePolicy sizePolicy8(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(labelLeftGps->sizePolicy().hasHeightForWidth());
        labelLeftGps->setSizePolicy(sizePolicy8);

        horizontalLayout_leftGps->addWidget(labelLeftGps);

        leftGpsCoordinates = new QLabel(tabManual);
        leftGpsCoordinates->setObjectName("leftGpsCoordinates");
        QSizePolicy sizePolicy9(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(leftGpsCoordinates->sizePolicy().hasHeightForWidth());
        leftGpsCoordinates->setSizePolicy(sizePolicy9);

        horizontalLayout_leftGps->addWidget(leftGpsCoordinates);


        verticalLayoutLeftPane->addLayout(horizontalLayout_leftGps);

        verticalLayout_leftMetadata = new QVBoxLayout();
        verticalLayout_leftMetadata->setSpacing(1);
        verticalLayout_leftMetadata->setObjectName("verticalLayout_leftMetadata");
        label_leftMetadata = new QLabel(tabManual);
        label_leftMetadata->setObjectName("label_leftMetadata");
        sizePolicy.setHeightForWidth(label_leftMetadata->sizePolicy().hasHeightForWidth());
        label_leftMetadata->setSizePolicy(sizePolicy);

        verticalLayout_leftMetadata->addWidget(label_leftMetadata);

        textEdit_leftMetadata = new QTextEdit(tabManual);
        textEdit_leftMetadata->setObjectName("textEdit_leftMetadata");
        QSizePolicy sizePolicy10(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(textEdit_leftMetadata->sizePolicy().hasHeightForWidth());
        textEdit_leftMetadata->setSizePolicy(sizePolicy10);
        textEdit_leftMetadata->setMinimumSize(QSize(0, 70));
        textEdit_leftMetadata->setMaximumSize(QSize(16777215, 60));
        textEdit_leftMetadata->setReadOnly(true);

        verticalLayout_leftMetadata->addWidget(textEdit_leftMetadata);


        verticalLayoutLeftPane->addLayout(verticalLayout_leftMetadata);


        horizontalLayout->addLayout(verticalLayoutLeftPane);

        verticalLayoutRightPane = new QVBoxLayout();
        verticalLayoutRightPane->setObjectName("verticalLayoutRightPane");
        verticalLayoutRightPane->setContentsMargins(-1, -1, -1, 0);
        rightImage = new ClickableLabel(tabManual);
        rightImage->setObjectName("rightImage");
        sizePolicy3.setHeightForWidth(rightImage->sizePolicy().hasHeightForWidth());
        rightImage->setSizePolicy(sizePolicy3);
        rightImage->setMinimumSize(QSize(400, 100));

        verticalLayoutRightPane->addWidget(rightImage);

        horizontalLayout_rightFileName = new QHBoxLayout();
        horizontalLayout_rightFileName->setObjectName("horizontalLayout_rightFileName");
        label_28 = new QLabel(tabManual);
        label_28->setObjectName("label_28");
        sizePolicy4.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy4);

        horizontalLayout_rightFileName->addWidget(label_28);

        rightFileName = new ClickableLabel(tabManual);
        rightFileName->setObjectName("rightFileName");
        sizePolicy5.setHeightForWidth(rightFileName->sizePolicy().hasHeightForWidth());
        rightFileName->setSizePolicy(sizePolicy5);
        rightFileName->setMinimumSize(QSize(0, 13));
        rightFileName->setStyleSheet(QString::fromUtf8("color : rgb(118, 214, 255); text-decoration : underline;"));

        horizontalLayout_rightFileName->addWidget(rightFileName);


        verticalLayoutRightPane->addLayout(horizontalLayout_rightFileName);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_29 = new QLabel(tabManual);
        label_29->setObjectName("label_29");
        sizePolicy4.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy4);

        horizontalLayout_16->addWidget(label_29);

        rightPathName = new QLabel(tabManual);
        rightPathName->setObjectName("rightPathName");
        sizePolicy5.setHeightForWidth(rightPathName->sizePolicy().hasHeightForWidth());
        rightPathName->setSizePolicy(sizePolicy5);
        rightPathName->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_16->addWidget(rightPathName);


        verticalLayoutRightPane->addLayout(horizontalLayout_16);

        gridLayout_rightSizeBitFrame = new QGridLayout();
        gridLayout_rightSizeBitFrame->setObjectName("gridLayout_rightSizeBitFrame");
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_32 = new QLabel(tabManual);
        label_32->setObjectName("label_32");
        sizePolicy4.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy4);

        horizontalLayout_17->addWidget(label_32);

        rightFileSize = new QLabel(tabManual);
        rightFileSize->setObjectName("rightFileSize");
        sizePolicy5.setHeightForWidth(rightFileSize->sizePolicy().hasHeightForWidth());
        rightFileSize->setSizePolicy(sizePolicy5);

        horizontalLayout_17->addWidget(rightFileSize);


        gridLayout_rightSizeBitFrame->addLayout(horizontalLayout_17, 1, 0, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_34 = new QLabel(tabManual);
        label_34->setObjectName("label_34");
        sizePolicy4.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy4);

        horizontalLayout_18->addWidget(label_34);

        rightBitRate = new QLabel(tabManual);
        rightBitRate->setObjectName("rightBitRate");
        sizePolicy5.setHeightForWidth(rightBitRate->sizePolicy().hasHeightForWidth());
        rightBitRate->setSizePolicy(sizePolicy5);

        horizontalLayout_18->addWidget(rightBitRate);


        gridLayout_rightSizeBitFrame->addLayout(horizontalLayout_18, 1, 1, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_44 = new QLabel(tabManual);
        label_44->setObjectName("label_44");
        sizePolicy4.setHeightForWidth(label_44->sizePolicy().hasHeightForWidth());
        label_44->setSizePolicy(sizePolicy4);

        horizontalLayout_19->addWidget(label_44);

        rightFrameRate = new QLabel(tabManual);
        rightFrameRate->setObjectName("rightFrameRate");
        sizePolicy5.setHeightForWidth(rightFrameRate->sizePolicy().hasHeightForWidth());
        rightFrameRate->setSizePolicy(sizePolicy5);

        horizontalLayout_19->addWidget(rightFrameRate);


        gridLayout_rightSizeBitFrame->addLayout(horizontalLayout_19, 1, 2, 1, 1);


        verticalLayoutRightPane->addLayout(gridLayout_rightSizeBitFrame);

        gridLayout_RightDetails = new QGridLayout();
        gridLayout_RightDetails->setObjectName("gridLayout_RightDetails");
        gridLayout_RightDetails->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_33 = new QLabel(tabManual);
        label_33->setObjectName("label_33");
        sizePolicy4.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy4);

        horizontalLayout_20->addWidget(label_33);

        rightDuration = new QLabel(tabManual);
        rightDuration->setObjectName("rightDuration");
        sizePolicy5.setHeightForWidth(rightDuration->sizePolicy().hasHeightForWidth());
        rightDuration->setSizePolicy(sizePolicy5);

        horizontalLayout_20->addWidget(rightDuration);


        gridLayout_RightDetails->addLayout(horizontalLayout_20, 0, 0, 1, 1);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_35 = new QLabel(tabManual);
        label_35->setObjectName("label_35");
        sizePolicy4.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy4);

        horizontalLayout_21->addWidget(label_35);

        rightCodec = new QLabel(tabManual);
        rightCodec->setObjectName("rightCodec");
        sizePolicy5.setHeightForWidth(rightCodec->sizePolicy().hasHeightForWidth());
        rightCodec->setSizePolicy(sizePolicy5);

        horizontalLayout_21->addWidget(rightCodec);


        gridLayout_RightDetails->addLayout(horizontalLayout_21, 3, 0, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        label_rightFileCreate = new QLabel(tabManual);
        label_rightFileCreate->setObjectName("label_rightFileCreate");
        sizePolicy4.setHeightForWidth(label_rightFileCreate->sizePolicy().hasHeightForWidth());
        label_rightFileCreate->setSizePolicy(sizePolicy4);

        horizontalLayout_22->addWidget(label_rightFileCreate);

        rightFileCreated = new QLabel(tabManual);
        rightFileCreated->setObjectName("rightFileCreated");
        sizePolicy5.setHeightForWidth(rightFileCreated->sizePolicy().hasHeightForWidth());
        rightFileCreated->setSizePolicy(sizePolicy5);

        horizontalLayout_22->addWidget(rightFileCreated);


        gridLayout_RightDetails->addLayout(horizontalLayout_22, 5, 0, 1, 1);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        label_43 = new QLabel(tabManual);
        label_43->setObjectName("label_43");
        sizePolicy4.setHeightForWidth(label_43->sizePolicy().hasHeightForWidth());
        label_43->setSizePolicy(sizePolicy4);

        horizontalLayout_23->addWidget(label_43);

        rightResolution = new QLabel(tabManual);
        rightResolution->setObjectName("rightResolution");
        sizePolicy5.setHeightForWidth(rightResolution->sizePolicy().hasHeightForWidth());
        rightResolution->setSizePolicy(sizePolicy5);

        horizontalLayout_23->addWidget(rightResolution);


        gridLayout_RightDetails->addLayout(horizontalLayout_23, 0, 1, 1, 1);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        label_45 = new QLabel(tabManual);
        label_45->setObjectName("label_45");
        sizePolicy4.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy4);

        horizontalLayout_24->addWidget(label_45);

        rightAudio = new QLabel(tabManual);
        rightAudio->setObjectName("rightAudio");
        sizePolicy5.setHeightForWidth(rightAudio->sizePolicy().hasHeightForWidth());
        rightAudio->setSizePolicy(sizePolicy5);

        horizontalLayout_24->addWidget(rightAudio);


        gridLayout_RightDetails->addLayout(horizontalLayout_24, 3, 1, 1, 1);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        label_42 = new QLabel(tabManual);
        label_42->setObjectName("label_42");
        sizePolicy4.setHeightForWidth(label_42->sizePolicy().hasHeightForWidth());
        label_42->setSizePolicy(sizePolicy4);

        horizontalLayout_25->addWidget(label_42);

        rightModified = new QLabel(tabManual);
        rightModified->setObjectName("rightModified");
        sizePolicy5.setHeightForWidth(rightModified->sizePolicy().hasHeightForWidth());
        rightModified->setSizePolicy(sizePolicy5);

        horizontalLayout_25->addWidget(rightModified);


        gridLayout_RightDetails->addLayout(horizontalLayout_25, 5, 1, 1, 1);


        verticalLayoutRightPane->addLayout(gridLayout_RightDetails);

        horizontalLayout_rightGps = new QHBoxLayout();
        horizontalLayout_rightGps->setObjectName("horizontalLayout_rightGps");
        labelRightGps = new QLabel(tabManual);
        labelRightGps->setObjectName("labelRightGps");
        sizePolicy8.setHeightForWidth(labelRightGps->sizePolicy().hasHeightForWidth());
        labelRightGps->setSizePolicy(sizePolicy8);

        horizontalLayout_rightGps->addWidget(labelRightGps);

        rightGpsCoordinates = new QLabel(tabManual);
        rightGpsCoordinates->setObjectName("rightGpsCoordinates");
        sizePolicy9.setHeightForWidth(rightGpsCoordinates->sizePolicy().hasHeightForWidth());
        rightGpsCoordinates->setSizePolicy(sizePolicy9);

        horizontalLayout_rightGps->addWidget(rightGpsCoordinates);


        verticalLayoutRightPane->addLayout(horizontalLayout_rightGps);

        verticalLayout_rightMetadata = new QVBoxLayout();
        verticalLayout_rightMetadata->setSpacing(1);
        verticalLayout_rightMetadata->setObjectName("verticalLayout_rightMetadata");
        label_rightMetadata = new QLabel(tabManual);
        label_rightMetadata->setObjectName("label_rightMetadata");
        sizePolicy.setHeightForWidth(label_rightMetadata->sizePolicy().hasHeightForWidth());
        label_rightMetadata->setSizePolicy(sizePolicy);

        verticalLayout_rightMetadata->addWidget(label_rightMetadata);

        textEdit_rightMetadata = new QTextEdit(tabManual);
        textEdit_rightMetadata->setObjectName("textEdit_rightMetadata");
        sizePolicy10.setHeightForWidth(textEdit_rightMetadata->sizePolicy().hasHeightForWidth());
        textEdit_rightMetadata->setSizePolicy(sizePolicy10);
        textEdit_rightMetadata->setMinimumSize(QSize(0, 70));
        textEdit_rightMetadata->setMaximumSize(QSize(16777215, 60));
        textEdit_rightMetadata->setReadOnly(true);

        verticalLayout_rightMetadata->addWidget(textEdit_rightMetadata);


        verticalLayoutRightPane->addLayout(verticalLayout_rightMetadata);


        horizontalLayout->addLayout(verticalLayoutRightPane);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        prevVideo = new QPushButton(tabManual);
        prevVideo->setObjectName("prevVideo");

        horizontalLayout_3->addWidget(prevVideo);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        leftMove = new QPushButton(tabManual);
        leftMove->setObjectName("leftMove");
        sizePolicy.setHeightForWidth(leftMove->sizePolicy().hasHeightForWidth());
        leftMove->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(leftMove);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        leftDelete = new QPushButton(tabManual);
        leftDelete->setObjectName("leftDelete");
        sizePolicy.setHeightForWidth(leftDelete->sizePolicy().hasHeightForWidth());
        leftDelete->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(leftDelete);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        rightDelete = new QPushButton(tabManual);
        rightDelete->setObjectName("rightDelete");

        horizontalLayout_3->addWidget(rightDelete);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        rightMove = new QPushButton(tabManual);
        rightMove->setObjectName("rightMove");

        horizontalLayout_3->addWidget(rightMove);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        nextVideo = new QPushButton(tabManual);
        nextVideo->setObjectName("nextVideo");

        horizontalLayout_3->addWidget(nextVideo);


        verticalLayout_2->addLayout(horizontalLayout_3);

        swap_ignore_Layout = new QHBoxLayout();
        swap_ignore_Layout->setObjectName("swap_ignore_Layout");
        swapFilenames = new QPushButton(tabManual);
        swapFilenames->setObjectName("swapFilenames");
        swapFilenames->setMaximumSize(QSize(150, 16777215));
        swapFilenames->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        swap_ignore_Layout->addWidget(swapFilenames);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        swap_ignore_Layout->addItem(horizontalSpacer_11);

        ignoreDuplicatePairButton = new QPushButton(tabManual);
        ignoreDuplicatePairButton->setObjectName("ignoreDuplicatePairButton");

        swap_ignore_Layout->addWidget(ignoreDuplicatePairButton);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        swap_ignore_Layout->addItem(horizontalSpacer_9);

        horizontalSpacer_7 = new QSpacerItem(150, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        swap_ignore_Layout->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(swap_ignore_Layout);


        horizontalLayout_5->addLayout(verticalLayout_2);

        tabWidget->addTab(tabManual, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        horizontalLayout_6 = new QHBoxLayout(tab_2);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout_3->addItem(verticalSpacer_2);

        label_15 = new QLabel(tab_2);
        label_15->setObjectName("label_15");
        sizePolicy8.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy8);
        QFont font;
        font.setBold(true);
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_15);

        line_5 = new QFrame(tab_2);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_5);

        line_4 = new QFrame(tab_2);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy11(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy11);
        label_2->setMinimumSize(QSize(150, 0));
        label_2->setFont(font);

        horizontalLayout_7->addWidget(label_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_4 = new QLabel(tab_2);
        label_4->setObjectName("label_4");
        label_4->setWordWrap(true);

        verticalLayout_6->addWidget(label_4);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer);

        verticalLayout_NbNamesContainedOption_autoIdentFiles = new QHBoxLayout();
        verticalLayout_NbNamesContainedOption_autoIdentFiles->setObjectName("verticalLayout_NbNamesContainedOption_autoIdentFiles");
        label_NbNamesContainedOption = new QLabel(tab_2);
        label_NbNamesContainedOption->setObjectName("label_NbNamesContainedOption");

        verticalLayout_NbNamesContainedOption_autoIdentFiles->addWidget(label_NbNamesContainedOption);

        label_namesContainedInOneAnotherStatus_autoIdentFiles = new QLabel(tab_2);
        label_namesContainedInOneAnotherStatus_autoIdentFiles->setObjectName("label_namesContainedInOneAnotherStatus_autoIdentFiles");

        verticalLayout_NbNamesContainedOption_autoIdentFiles->addWidget(label_namesContainedInOneAnotherStatus_autoIdentFiles);


        verticalLayout_6->addLayout(verticalLayout_NbNamesContainedOption_autoIdentFiles);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName("label_8");
        label_8->setWordWrap(true);

        verticalLayout_6->addWidget(label_8);


        horizontalLayout_7->addLayout(verticalLayout_6);

        identicalFilesAutoTrash = new QPushButton(tab_2);
        identicalFilesAutoTrash->setObjectName("identicalFilesAutoTrash");
        QSizePolicy sizePolicy12(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(identicalFilesAutoTrash->sizePolicy().hasHeightForWidth());
        identicalFilesAutoTrash->setSizePolicy(sizePolicy12);
        identicalFilesAutoTrash->setMinimumSize(QSize(200, 0));
        identicalFilesAutoTrash->setAutoDefault(false);

        horizontalLayout_7->addWidget(identicalFilesAutoTrash);


        verticalLayout_3->addLayout(horizontalLayout_7);

        line_2 = new QFrame(tab_2);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_7 = new QLabel(tab_2);
        label_7->setObjectName("label_7");
        sizePolicy11.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy11);
        label_7->setMinimumSize(QSize(150, 0));
        label_7->setFont(font);

        horizontalLayout_8->addWidget(label_7);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_5 = new QLabel(tab_2);
        label_5->setObjectName("label_5");
        label_5->setLineWidth(2);

        verticalLayout_7->addWidget(label_5);

        horizontalLayout_NbNamesContainedOption_autoOnlySizeDiff = new QHBoxLayout();
        horizontalLayout_NbNamesContainedOption_autoOnlySizeDiff->setObjectName("horizontalLayout_NbNamesContainedOption_autoOnlySizeDiff");
        label_11 = new QLabel(tab_2);
        label_11->setObjectName("label_11");

        horizontalLayout_NbNamesContainedOption_autoOnlySizeDiff->addWidget(label_11);

        label_namesContainedInOneAnotherStatus_autoOnlySizeDiff = new QLabel(tab_2);
        label_namesContainedInOneAnotherStatus_autoOnlySizeDiff->setObjectName("label_namesContainedInOneAnotherStatus_autoOnlySizeDiff");

        horizontalLayout_NbNamesContainedOption_autoOnlySizeDiff->addWidget(label_namesContainedInOneAnotherStatus_autoOnlySizeDiff);


        verticalLayout_7->addLayout(horizontalLayout_NbNamesContainedOption_autoOnlySizeDiff);

        autoOnlySizeDontCheckResFpsCheckbox = new QCheckBox(tab_2);
        autoOnlySizeDontCheckResFpsCheckbox->setObjectName("autoOnlySizeDontCheckResFpsCheckbox");
        autoOnlySizeDontCheckResFpsCheckbox->setEnabled(true);

        verticalLayout_7->addWidget(autoOnlySizeDontCheckResFpsCheckbox);


        horizontalLayout_8->addLayout(verticalLayout_7);

        autoDelOnlySizeDiffersButton = new QPushButton(tab_2);
        autoDelOnlySizeDiffersButton->setObjectName("autoDelOnlySizeDiffersButton");
        autoDelOnlySizeDiffersButton->setEnabled(true);
        sizePolicy12.setHeightForWidth(autoDelOnlySizeDiffersButton->sizePolicy().hasHeightForWidth());
        autoDelOnlySizeDiffersButton->setSizePolicy(sizePolicy12);
        autoDelOnlySizeDiffersButton->setMinimumSize(QSize(200, 0));
        autoDelOnlySizeDiffersButton->setAutoDefault(false);

        horizontalLayout_8->addWidget(autoDelOnlySizeDiffersButton);


        verticalLayout_3->addLayout(horizontalLayout_8);

        line = new QFrame(tab_2);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line);

        autodeleteOnlyTimeDiffersHorizontalLayout = new QHBoxLayout();
        autodeleteOnlyTimeDiffersHorizontalLayout->setObjectName("autodeleteOnlyTimeDiffersHorizontalLayout");
        label_onlyTimeDiffers = new QLabel(tab_2);
        label_onlyTimeDiffers->setObjectName("label_onlyTimeDiffers");
        label_onlyTimeDiffers->setEnabled(true);
        sizePolicy11.setHeightForWidth(label_onlyTimeDiffers->sizePolicy().hasHeightForWidth());
        label_onlyTimeDiffers->setSizePolicy(sizePolicy11);
        label_onlyTimeDiffers->setMinimumSize(QSize(150, 0));
        label_onlyTimeDiffers->setFont(font);

        autodeleteOnlyTimeDiffersHorizontalLayout->addWidget(label_onlyTimeDiffers);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_label_onlyTimeDiffers_Descript = new QLabel(tab_2);
        label_label_onlyTimeDiffers_Descript->setObjectName("label_label_onlyTimeDiffers_Descript");
        label_label_onlyTimeDiffers_Descript->setEnabled(true);
        label_label_onlyTimeDiffers_Descript->setWordWrap(true);

        verticalLayout_9->addWidget(label_label_onlyTimeDiffers_Descript);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        radioButton_onlyTimeDiffers_trashEarlier = new QRadioButton(tab_2);
        radioButton_onlyTimeDiffers_trashEarlier->setObjectName("radioButton_onlyTimeDiffers_trashEarlier");
        radioButton_onlyTimeDiffers_trashEarlier->setEnabled(true);
        radioButton_onlyTimeDiffers_trashEarlier->setChecked(false);

        horizontalLayout_11->addWidget(radioButton_onlyTimeDiffers_trashEarlier);

        radioButton_onlyTimeDiffers_trashLater = new QRadioButton(tab_2);
        radioButton_onlyTimeDiffers_trashLater->setObjectName("radioButton_onlyTimeDiffers_trashLater");
        radioButton_onlyTimeDiffers_trashLater->setEnabled(true);
        radioButton_onlyTimeDiffers_trashLater->setChecked(true);

        horizontalLayout_11->addWidget(radioButton_onlyTimeDiffers_trashLater);


        verticalLayout_9->addLayout(horizontalLayout_11);


        autodeleteOnlyTimeDiffersHorizontalLayout->addLayout(verticalLayout_9);

        pushButton_onlyTimeDiffersAutoTrash = new QPushButton(tab_2);
        pushButton_onlyTimeDiffersAutoTrash->setObjectName("pushButton_onlyTimeDiffersAutoTrash");
        pushButton_onlyTimeDiffersAutoTrash->setEnabled(true);
        sizePolicy12.setHeightForWidth(pushButton_onlyTimeDiffersAutoTrash->sizePolicy().hasHeightForWidth());
        pushButton_onlyTimeDiffersAutoTrash->setSizePolicy(sizePolicy12);
        pushButton_onlyTimeDiffersAutoTrash->setMinimumSize(QSize(200, 0));
        pushButton_onlyTimeDiffersAutoTrash->setAutoDefault(false);

        autodeleteOnlyTimeDiffersHorizontalLayout->addWidget(pushButton_onlyTimeDiffersAutoTrash);


        verticalLayout_3->addLayout(autodeleteOnlyTimeDiffersHorizontalLayout);

        foldersAutodeleteHorizontalLayout = new QHBoxLayout();
        foldersAutodeleteHorizontalLayout->setObjectName("foldersAutodeleteHorizontalLayout");
        label_folderSettingsChoice = new QLabel(tab_2);
        label_folderSettingsChoice->setObjectName("label_folderSettingsChoice");
        label_folderSettingsChoice->setEnabled(false);
        sizePolicy11.setHeightForWidth(label_folderSettingsChoice->sizePolicy().hasHeightForWidth());
        label_folderSettingsChoice->setSizePolicy(sizePolicy11);
        label_folderSettingsChoice->setMinimumSize(QSize(150, 0));
        label_folderSettingsChoice->setFont(font);

        foldersAutodeleteHorizontalLayout->addWidget(label_folderSettingsChoice);

        label_folderSettingsChoice_Description = new QLabel(tab_2);
        label_folderSettingsChoice_Description->setObjectName("label_folderSettingsChoice_Description");
        label_folderSettingsChoice_Description->setEnabled(false);
        label_folderSettingsChoice_Description->setWordWrap(true);

        foldersAutodeleteHorizontalLayout->addWidget(label_folderSettingsChoice_Description);

        pushButton_folderSettingsChoiceAutoTrash = new QPushButton(tab_2);
        pushButton_folderSettingsChoiceAutoTrash->setObjectName("pushButton_folderSettingsChoiceAutoTrash");
        pushButton_folderSettingsChoiceAutoTrash->setEnabled(false);
        sizePolicy12.setHeightForWidth(pushButton_folderSettingsChoiceAutoTrash->sizePolicy().hasHeightForWidth());
        pushButton_folderSettingsChoiceAutoTrash->setSizePolicy(sizePolicy12);
        pushButton_folderSettingsChoiceAutoTrash->setMinimumSize(QSize(200, 0));
        pushButton_folderSettingsChoiceAutoTrash->setAutoDefault(false);

        foldersAutodeleteHorizontalLayout->addWidget(pushButton_folderSettingsChoiceAutoTrash);


        verticalLayout_3->addLayout(foldersAutodeleteHorizontalLayout);


        horizontalLayout_6->addLayout(verticalLayout_3);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_10 = new QVBoxLayout(tab_3);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        lockedFoldersHorizontalLayout = new QHBoxLayout();
        lockedFoldersHorizontalLayout->setObjectName("lockedFoldersHorizontalLayout");
        label_24 = new QLabel(tab_3);
        label_24->setObjectName("label_24");
        label_24->setMinimumSize(QSize(150, 0));
        label_24->setFont(font);

        lockedFoldersHorizontalLayout->addWidget(label_24);

        label_25 = new QLabel(tab_3);
        label_25->setObjectName("label_25");
        label_25->setMinimumSize(QSize(320, 0));
        label_25->setWordWrap(true);

        lockedFoldersHorizontalLayout->addWidget(label_25);

        lockedFolderslistWidget = new QListWidget(tab_3);
        lockedFolderslistWidget->setObjectName("lockedFolderslistWidget");
        lockedFolderslistWidget->setMaximumSize(QSize(16777215, 16777215));
        lockedFolderslistWidget->setContextMenuPolicy(Qt::ContextMenuPolicy::CustomContextMenu);
        lockedFolderslistWidget->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        lockedFolderslistWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        lockedFolderslistWidget->setProperty("showDropIndicator", QVariant(false));
        lockedFolderslistWidget->setDragEnabled(false);
        lockedFolderslistWidget->setDragDropMode(QAbstractItemView::DragDropMode::NoDragDrop);
        lockedFolderslistWidget->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        lockedFolderslistWidget->setTextElideMode(Qt::TextElideMode::ElideLeft);
        lockedFolderslistWidget->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);

        lockedFoldersHorizontalLayout->addWidget(lockedFolderslistWidget);

        lockedFolderButton = new QPushButton(tab_3);
        lockedFolderButton->setObjectName("lockedFolderButton");
        lockedFolderButton->setMaximumSize(QSize(40, 16777215));
        lockedFolderButton->setAutoDefault(false);

        lockedFoldersHorizontalLayout->addWidget(lockedFolderButton);


        verticalLayout_8->addLayout(lockedFoldersHorizontalLayout);

        importantFoldersHorizontalLayout = new QHBoxLayout();
        importantFoldersHorizontalLayout->setObjectName("importantFoldersHorizontalLayout");
        label_importantFolders = new QLabel(tab_3);
        label_importantFolders->setObjectName("label_importantFolders");
        label_importantFolders->setEnabled(false);
        label_importantFolders->setMinimumSize(QSize(150, 0));
        label_importantFolders->setFont(font);

        importantFoldersHorizontalLayout->addWidget(label_importantFolders);

        label_importantFoldersDescript = new QLabel(tab_3);
        label_importantFoldersDescript->setObjectName("label_importantFoldersDescript");
        label_importantFoldersDescript->setEnabled(false);
        label_importantFoldersDescript->setMinimumSize(QSize(320, 0));
        label_importantFoldersDescript->setWordWrap(true);

        importantFoldersHorizontalLayout->addWidget(label_importantFoldersDescript);

        importantFoldersListWidget = new QListWidget(tab_3);
        importantFoldersListWidget->setObjectName("importantFoldersListWidget");
        importantFoldersListWidget->setEnabled(false);
        importantFoldersListWidget->setMaximumSize(QSize(16777215, 16777215));
        importantFoldersListWidget->setContextMenuPolicy(Qt::ContextMenuPolicy::CustomContextMenu);
        importantFoldersListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        importantFoldersListWidget->setDragEnabled(true);
        importantFoldersListWidget->setDragDropMode(QAbstractItemView::DragDropMode::InternalMove);
        importantFoldersListWidget->setDefaultDropAction(Qt::DropAction::MoveAction);
        importantFoldersListWidget->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        importantFoldersListWidget->setTextElideMode(Qt::TextElideMode::ElideLeft);
        importantFoldersListWidget->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        importantFoldersListWidget->setSortingEnabled(true);

        importantFoldersHorizontalLayout->addWidget(importantFoldersListWidget);

        pushButton_importantFoldersAdd = new QPushButton(tab_3);
        pushButton_importantFoldersAdd->setObjectName("pushButton_importantFoldersAdd");
        pushButton_importantFoldersAdd->setEnabled(false);
        pushButton_importantFoldersAdd->setMaximumSize(QSize(40, 16777215));
        pushButton_importantFoldersAdd->setAutoDefault(false);

        importantFoldersHorizontalLayout->addWidget(pushButton_importantFoldersAdd);


        verticalLayout_8->addLayout(importantFoldersHorizontalLayout);


        verticalLayout_10->addLayout(verticalLayout_8);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        identicalBits = new QLabel(Comparison);
        identicalBits->setObjectName("identicalBits");
        sizePolicy6.setHeightForWidth(identicalBits->sizePolicy().hasHeightForWidth());
        identicalBits->setSizePolicy(sizePolicy6);
        identicalBits->setFrameShape(QFrame::Shape::Box);

        horizontalLayout_2->addWidget(identicalBits);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        trashedFiles = new QLabel(Comparison);
        trashedFiles->setObjectName("trashedFiles");

        horizontalLayout_2->addWidget(trashedFiles);

        progressBar = new QProgressBar(Comparison);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);

        horizontalLayout_2->addWidget(progressBar);

        currentVideo = new QLabel(Comparison);
        currentVideo->setObjectName("currentVideo");

        horizontalLayout_2->addWidget(currentVideo);

        label_9 = new QLabel(Comparison);
        label_9->setObjectName("label_9");

        horizontalLayout_2->addWidget(label_9);

        totalVideos = new QLabel(Comparison);
        totalVideos->setObjectName("totalVideos");

        horizontalLayout_2->addWidget(totalVideos);

        disableDeleteConfirmationCheckbox = new QCheckBox(Comparison);
        disableDeleteConfirmationCheckbox->setObjectName("disableDeleteConfirmationCheckbox");
        disableDeleteConfirmationCheckbox->setEnabled(true);

        horizontalLayout_2->addWidget(disableDeleteConfirmationCheckbox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Comparison);

        tabWidget->setCurrentIndex(0);
        nextVideo->setDefault(true);


        QMetaObject::connectSlotsByName(Comparison);
    } // setupUi

    void retranslateUi(QDialog *Comparison)
    {
        Comparison->setWindowTitle(QCoreApplication::translate("Comparison", "Similiar and duplicate video finder", nullptr));
        label_sortBy->setText(QCoreApplication::translate("Comparison", "Sort:", nullptr));
        comboBox_sortBy->setItemText(0, QCoreApplication::translate("Comparison", "File size (largest first)", nullptr));
        comboBox_sortBy->setItemText(1, QCoreApplication::translate("Comparison", "File name (A-Z)", nullptr));
        comboBox_sortBy->setItemText(2, QCoreApplication::translate("Comparison", "Creation time (oldest first)", nullptr));

#if QT_CONFIG(tooltip)
        settingNamesInAnotherCheckbox->setToolTip(QCoreApplication::translate("Comparison", "Only show matches whose names are contained in one another\n"
"Ex. VideoA.mp4 and VideoA-2.mp4", nullptr));
#endif // QT_CONFIG(tooltip)
        settingNamesInAnotherCheckbox->setText(QCoreApplication::translate("Comparison", "Matching names", nullptr));
        selectPhash->setText(QCoreApplication::translate("Comparison", "pHash", nullptr));
        selectSSIM->setText(QCoreApplication::translate("Comparison", "SSIM", nullptr));
        label->setText(QCoreApplication::translate("Comparison", "Comparison threshold:", nullptr));
        percentSim->setText(QCoreApplication::translate("Comparison", "1", nullptr));
        label_percent->setText(QCoreApplication::translate("Comparison", "%", nullptr));
#if QT_CONFIG(tooltip)
        leftImage->setToolTip(QCoreApplication::translate("Comparison", "Click to launch video in default player, scroll mouse wheel to zoom", nullptr));
#endif // QT_CONFIG(tooltip)
        leftImage->setProperty("text", QVariant(QString()));
        labelFileName->setText(QCoreApplication::translate("Comparison", "File name:", nullptr));
        leftFileName->setProperty("text", QVariant(QString()));
        labelPath->setText(QCoreApplication::translate("Comparison", "Path:", nullptr));
        leftPathName->setText(QString());
        labelLeftBitRate->setText(QCoreApplication::translate("Comparison", "Bit rate:", nullptr));
        leftBitRate->setText(QString());
        labelLeftFileSize->setText(QCoreApplication::translate("Comparison", "File size:", nullptr));
        leftFileSize->setText(QString());
        labelLeftFrameRate->setText(QCoreApplication::translate("Comparison", "Frame rate:", nullptr));
        leftFrameRate->setText(QString());
        labelLeftDuration->setText(QCoreApplication::translate("Comparison", "Duration:", nullptr));
        leftDuration->setText(QString());
        labelLeftCodec->setText(QCoreApplication::translate("Comparison", "Codec:", nullptr));
        leftCodec->setText(QString());
        label_leftFileCreate->setText(QCoreApplication::translate("Comparison", "Created:", nullptr));
        leftFileCreated->setText(QString());
        labelLeftResolution->setText(QCoreApplication::translate("Comparison", "Resolution:", nullptr));
        leftResolution->setText(QString());
        labelLeftAudio->setText(QCoreApplication::translate("Comparison", "Audio:", nullptr));
        leftAudio->setText(QString());
        label_leftFileModif->setText(QCoreApplication::translate("Comparison", "Modified:", nullptr));
        leftModified->setText(QString());
        labelLeftGps->setText(QCoreApplication::translate("Comparison", "GPS:", nullptr));
        leftGpsCoordinates->setText(QString());
        label_leftMetadata->setText(QCoreApplication::translate("Comparison", "Other metadata:", nullptr));
#if QT_CONFIG(tooltip)
        rightImage->setToolTip(QCoreApplication::translate("Comparison", "Click to launch video in default player, scroll mouse wheel to zoom", nullptr));
#endif // QT_CONFIG(tooltip)
        rightImage->setProperty("text", QVariant(QString()));
        label_28->setText(QCoreApplication::translate("Comparison", "File name:", nullptr));
        rightFileName->setProperty("text", QVariant(QString()));
        label_29->setText(QCoreApplication::translate("Comparison", "Path:", nullptr));
        rightPathName->setText(QString());
        label_32->setText(QCoreApplication::translate("Comparison", "File size:", nullptr));
        rightFileSize->setText(QString());
        label_34->setText(QCoreApplication::translate("Comparison", "Bit rate:", nullptr));
        rightBitRate->setText(QString());
        label_44->setText(QCoreApplication::translate("Comparison", "Frame rate:", nullptr));
        rightFrameRate->setText(QString());
        label_33->setText(QCoreApplication::translate("Comparison", "Duration:", nullptr));
        rightDuration->setText(QString());
        label_35->setText(QCoreApplication::translate("Comparison", "Codec:", nullptr));
        rightCodec->setText(QString());
        label_rightFileCreate->setText(QCoreApplication::translate("Comparison", "Created:", nullptr));
        rightFileCreated->setText(QString());
        label_43->setText(QCoreApplication::translate("Comparison", "Resolution:", nullptr));
        rightResolution->setText(QString());
        label_45->setText(QCoreApplication::translate("Comparison", "Audio:", nullptr));
        rightAudio->setText(QString());
        label_42->setText(QCoreApplication::translate("Comparison", "Modified:", nullptr));
        rightModified->setText(QString());
        labelRightGps->setText(QCoreApplication::translate("Comparison", "GPS:", nullptr));
        rightGpsCoordinates->setText(QString());
        label_rightMetadata->setText(QCoreApplication::translate("Comparison", "Other metadata:", nullptr));
#if QT_CONFIG(tooltip)
        prevVideo->setToolTip(QCoreApplication::translate("Comparison", "Shortcut: Up arrow", nullptr));
#endif // QT_CONFIG(tooltip)
        prevVideo->setText(QCoreApplication::translate("Comparison", "Prev", nullptr));
        leftMove->setText(QCoreApplication::translate("Comparison", "Move ->", nullptr));
#if QT_CONFIG(tooltip)
        leftDelete->setToolTip(QCoreApplication::translate("Comparison", "Shortcut: Left arrow", nullptr));
#endif // QT_CONFIG(tooltip)
        leftDelete->setText(QCoreApplication::translate("Comparison", "Trash", nullptr));
#if QT_CONFIG(tooltip)
        rightDelete->setToolTip(QCoreApplication::translate("Comparison", "Shortcut: Right arrow", nullptr));
#endif // QT_CONFIG(tooltip)
        rightDelete->setText(QCoreApplication::translate("Comparison", "Trash", nullptr));
        rightMove->setText(QCoreApplication::translate("Comparison", "<- Move", nullptr));
#if QT_CONFIG(tooltip)
        nextVideo->setToolTip(QCoreApplication::translate("Comparison", "Shortcut: Down arrow", nullptr));
#endif // QT_CONFIG(tooltip)
        nextVideo->setText(QCoreApplication::translate("Comparison", "Next", nullptr));
        swapFilenames->setText(QCoreApplication::translate("Comparison", "Swap filenames", nullptr));
#if QT_CONFIG(tooltip)
        ignoreDuplicatePairButton->setToolTip(QCoreApplication::translate("Comparison", "Mark this pair as not duplicates and save to the cache, so that it will not ask again until cache is cleared.", nullptr));
#endif // QT_CONFIG(tooltip)
        ignoreDuplicatePairButton->setText(QCoreApplication::translate("Comparison", "Ignore", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabManual), QCoreApplication::translate("Comparison", "Manual", nullptr));
        label_15->setText(QCoreApplication::translate("Comparison", "Take care,  the following use the comparison threshold,  so be careful to set it as wanted.", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("Comparison", "Identical files", nullptr));
        label_4->setText(QCoreApplication::translate("Comparison", "If both files have all equal parameters (or very very close, eg. if bitrate is within 1kB/s or file size within 100kB), except name, path and extra metadada : randomly keep one of the two and trash the other, or if both names are similar keep the file with shortest name.", nullptr));
        label_NbNamesContainedOption->setText(QCoreApplication::translate("Comparison", "NB: Names must be contained in one another is ", nullptr));
        label_namesContainedInOneAnotherStatus_autoIdentFiles->setText(QCoreApplication::translate("Comparison", "DISABLED", nullptr));
        label_8->setText(QCoreApplication::translate("Comparison", "If this option is enabled, the file with the shortest name will be kept (and none will be moved to trash is one name isn't contained in the other).", nullptr));
        identicalFilesAutoTrash->setText(QCoreApplication::translate("Comparison", "Auto trash identical", nullptr));
        label_7->setText(QCoreApplication::translate("Comparison", "Keep biggest", nullptr));
        label_5->setText(QCoreApplication::translate("Comparison", "Keeps the bigger file if both have : \n"
" - max 1 second time duration difference\n"
" - same resolution\n"
" - same FPS\n"
" - different file sizes (and any other metadata differences)", nullptr));
        label_11->setText(QCoreApplication::translate("Comparison", "NB: Names must be contained in one another is ", nullptr));
        label_namesContainedInOneAnotherStatus_autoOnlySizeDiff->setText(QCoreApplication::translate("Comparison", "DISABLED", nullptr));
        autoOnlySizeDontCheckResFpsCheckbox->setText(QCoreApplication::translate("Comparison", "Don't check resolution and FPS", nullptr));
        autoDelOnlySizeDiffersButton->setText(QCoreApplication::translate("Comparison", "Auto trash by size", nullptr));
        label_onlyTimeDiffers->setText(QCoreApplication::translate("Comparison", "Keep by date", nullptr));
        label_label_onlyTimeDiffers_Descript->setText(QCoreApplication::translate("Comparison", "If both have all same parameters except date, choose either (first by creation date or if equal by modification date):", nullptr));
        radioButton_onlyTimeDiffers_trashEarlier->setText(QCoreApplication::translate("Comparison", "Trash earlier date", nullptr));
        radioButton_onlyTimeDiffers_trashLater->setText(QCoreApplication::translate("Comparison", "Trash later date", nullptr));
        pushButton_onlyTimeDiffersAutoTrash->setText(QCoreApplication::translate("Comparison", "Auto trash by date", nullptr));
        label_folderSettingsChoice->setText(QCoreApplication::translate("Comparison", "Folder settings choice", nullptr));
        label_folderSettingsChoice_Description->setText(QCoreApplication::translate("Comparison", "Delete only based on folders settings set in specific tab.  This will use the folder settings, and comparison threshold !!! \n"
"In each scenario where only one of the two files is either in a protected folder, or more \"precious/important\" folder, it will keep that one. Otherwise, it will do nothing.", nullptr));
        pushButton_folderSettingsChoiceAutoTrash->setText(QCoreApplication::translate("Comparison", "Auto move to trash", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Comparison", "Auto", nullptr));
        label_24->setText(QCoreApplication::translate("Comparison", "Locked folders", nullptr));
        label_25->setText(QCoreApplication::translate("Comparison", "Duplicates in these folders will never be deleted. Note that if one of a duplicate pair is in a locked folder, and that the current choice of deletion would be the locked one,  the software will not delete the other one, but keep both !", nullptr));
#if QT_CONFIG(tooltip)
        lockedFolderslistWidget->setToolTip(QCoreApplication::translate("Comparison", "<html><head/><body><p>Right click on the list for more options.</p><p>Use up/down arrows to navigate options.</p><p>You can also drag and drop to add multiple folders at once.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lockedFolderButton->setText(QString());
        label_importantFolders->setText(QCoreApplication::translate("Comparison", "Important folders", nullptr));
        label_importantFoldersDescript->setText(QCoreApplication::translate("Comparison", "Duplicates in these folders will be kept first, keeping the one in the highest folder in the list.  However if two are placed within the same level folder, one of them will still be deleted. ", nullptr));
        pushButton_importantFoldersAdd->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Comparison", "Folder settings", nullptr));
        identicalBits->setText(QCoreApplication::translate("Comparison", "Identical bits", nullptr));
        trashedFiles->setText(QCoreApplication::translate("Comparison", "trashedFiles", nullptr));
        currentVideo->setText(QCoreApplication::translate("Comparison", "currentVideo", nullptr));
        label_9->setText(QCoreApplication::translate("Comparison", "/", nullptr));
        totalVideos->setText(QCoreApplication::translate("Comparison", "totalVideos", nullptr));
        disableDeleteConfirmationCheckbox->setText(QCoreApplication::translate("Comparison", "Disable confirmations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Comparison: public Ui_Comparison {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPARISON_H

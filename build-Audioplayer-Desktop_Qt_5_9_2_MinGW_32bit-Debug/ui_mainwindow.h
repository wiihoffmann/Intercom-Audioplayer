/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Preset;
    QAction *actionSave_Preset;
    QAction *actionSoundBoard_Mode;
    QAction *actionPlaylist_Mode;
    QAction *actionInsert_Sound;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *Remove_Button;
    QPushButton *Secret_Button;
    QSlider *Time_Slider;
    QLabel *Status_Label;
    QPushButton *Pause_Button;
    QPushButton *ISound_Button;
    QPushButton *Stop_Button;
    QPushButton *Setting_Button;
    QSlider *Speed_Slider;
    QProgressBar *VU_Meter;
    QProgressBar *VU_Meter_2;
    QTabWidget *tabWidget;
    QWidget *Audio_Tab;
    QGridLayout *gridLayout_3;
    QPushButton *EPlaylist_Button;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *Next_Button;
    QPushButton *Previous_Button;
    QPushButton *random_Button;
    QWidget *TimePreset_Tab;
    QGridLayout *gridLayout_5;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *removeTime_Button;
    QPushButton *addTime_Button;
    QWidget *Telephone_Tab;
    QGridLayout *gridLayout_4;
    QPushButton *six_Button;
    QPushButton *five_Button;
    QPushButton *one_Button;
    QPushButton *nine_Button;
    QPushButton *two_Button;
    QPushButton *four_Button;
    QPushButton *seven_Button;
    QPushButton *asterisk_Button;
    QPushButton *zero_Button;
    QPushButton *eight_Button;
    QPushButton *three_Button;
    QPushButton *hash_Button;
    QPushButton *intercomOn_Button;
    QPushButton *intercomAll_Button;
    QPushButton *intercomCancel_Button;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuMode;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(524, 353);
        actionOpen_Preset = new QAction(MainWindow);
        actionOpen_Preset->setObjectName(QStringLiteral("actionOpen_Preset"));
        actionSave_Preset = new QAction(MainWindow);
        actionSave_Preset->setObjectName(QStringLiteral("actionSave_Preset"));
        actionSoundBoard_Mode = new QAction(MainWindow);
        actionSoundBoard_Mode->setObjectName(QStringLiteral("actionSoundBoard_Mode"));
        actionPlaylist_Mode = new QAction(MainWindow);
        actionPlaylist_Mode->setObjectName(QStringLiteral("actionPlaylist_Mode"));
        actionInsert_Sound = new QAction(MainWindow);
        actionInsert_Sound->setObjectName(QStringLiteral("actionInsert_Sound"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Remove_Button = new QPushButton(frame);
        Remove_Button->setObjectName(QStringLiteral("Remove_Button"));

        gridLayout->addWidget(Remove_Button, 4, 5, 1, 1);

        Secret_Button = new QPushButton(frame);
        Secret_Button->setObjectName(QStringLiteral("Secret_Button"));

        gridLayout->addWidget(Secret_Button, 4, 2, 1, 1);

        Time_Slider = new QSlider(frame);
        Time_Slider->setObjectName(QStringLiteral("Time_Slider"));
        Time_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(Time_Slider, 1, 0, 1, 6);

        Status_Label = new QLabel(frame);
        Status_Label->setObjectName(QStringLiteral("Status_Label"));

        gridLayout->addWidget(Status_Label, 3, 0, 1, 6);

        Pause_Button = new QPushButton(frame);
        Pause_Button->setObjectName(QStringLiteral("Pause_Button"));

        gridLayout->addWidget(Pause_Button, 4, 3, 1, 1);

        ISound_Button = new QPushButton(frame);
        ISound_Button->setObjectName(QStringLiteral("ISound_Button"));

        gridLayout->addWidget(ISound_Button, 4, 0, 1, 1);

        Stop_Button = new QPushButton(frame);
        Stop_Button->setObjectName(QStringLiteral("Stop_Button"));

        gridLayout->addWidget(Stop_Button, 4, 4, 1, 1);

        Setting_Button = new QPushButton(frame);
        Setting_Button->setObjectName(QStringLiteral("Setting_Button"));

        gridLayout->addWidget(Setting_Button, 4, 1, 1, 1);

        Speed_Slider = new QSlider(frame);
        Speed_Slider->setObjectName(QStringLiteral("Speed_Slider"));
        Speed_Slider->setEnabled(true);
        Speed_Slider->setMinimum(1);
        Speed_Slider->setMaximum(255);
        Speed_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(Speed_Slider, 0, 0, 1, 6);


        gridLayout_2->addWidget(frame, 4, 0, 1, 4);

        VU_Meter = new QProgressBar(centralWidget);
        VU_Meter->setObjectName(QStringLiteral("VU_Meter"));
        VU_Meter->setMaximum(32);
        VU_Meter->setValue(0);
        VU_Meter->setTextVisible(false);
        VU_Meter->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(VU_Meter, 1, 0, 2, 1);

        VU_Meter_2 = new QProgressBar(centralWidget);
        VU_Meter_2->setObjectName(QStringLiteral("VU_Meter_2"));
        VU_Meter_2->setStyleSheet(QStringLiteral(""));
        VU_Meter_2->setMaximum(32);
        VU_Meter_2->setValue(0);
        VU_Meter_2->setTextVisible(false);
        VU_Meter_2->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(VU_Meter_2, 1, 3, 2, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        Audio_Tab = new QWidget();
        Audio_Tab->setObjectName(QStringLiteral("Audio_Tab"));
        gridLayout_3 = new QGridLayout(Audio_Tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        EPlaylist_Button = new QPushButton(Audio_Tab);
        EPlaylist_Button->setObjectName(QStringLiteral("EPlaylist_Button"));
        EPlaylist_Button->setEnabled(false);

        gridLayout_3->addWidget(EPlaylist_Button, 4, 1, 1, 1);

        scrollArea = new QScrollArea(Audio_Tab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::VLine);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(1);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 322, 144));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 0, 2, 5, 1);

        Next_Button = new QPushButton(Audio_Tab);
        Next_Button->setObjectName(QStringLiteral("Next_Button"));
        Next_Button->setEnabled(false);

        gridLayout_3->addWidget(Next_Button, 1, 1, 1, 1);

        Previous_Button = new QPushButton(Audio_Tab);
        Previous_Button->setObjectName(QStringLiteral("Previous_Button"));
        Previous_Button->setEnabled(false);

        gridLayout_3->addWidget(Previous_Button, 2, 1, 1, 1);

        random_Button = new QPushButton(Audio_Tab);
        random_Button->setObjectName(QStringLiteral("random_Button"));
        random_Button->setEnabled(false);

        gridLayout_3->addWidget(random_Button, 3, 1, 1, 1);

        tabWidget->addTab(Audio_Tab, QString());
        TimePreset_Tab = new QWidget();
        TimePreset_Tab->setObjectName(QStringLiteral("TimePreset_Tab"));
        gridLayout_5 = new QGridLayout(TimePreset_Tab);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        scrollArea_2 = new QScrollArea(TimePreset_Tab);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 339, 144));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_5->addWidget(scrollArea_2, 0, 1, 3, 1);

        removeTime_Button = new QPushButton(TimePreset_Tab);
        removeTime_Button->setObjectName(QStringLiteral("removeTime_Button"));

        gridLayout_5->addWidget(removeTime_Button, 2, 0, 1, 1);

        addTime_Button = new QPushButton(TimePreset_Tab);
        addTime_Button->setObjectName(QStringLiteral("addTime_Button"));

        gridLayout_5->addWidget(addTime_Button, 1, 0, 1, 1);

        tabWidget->addTab(TimePreset_Tab, QString());
        Telephone_Tab = new QWidget();
        Telephone_Tab->setObjectName(QStringLiteral("Telephone_Tab"));
        gridLayout_4 = new QGridLayout(Telephone_Tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        six_Button = new QPushButton(Telephone_Tab);
        six_Button->setObjectName(QStringLiteral("six_Button"));

        gridLayout_4->addWidget(six_Button, 1, 2, 1, 1);

        five_Button = new QPushButton(Telephone_Tab);
        five_Button->setObjectName(QStringLiteral("five_Button"));

        gridLayout_4->addWidget(five_Button, 1, 1, 1, 1);

        one_Button = new QPushButton(Telephone_Tab);
        one_Button->setObjectName(QStringLiteral("one_Button"));

        gridLayout_4->addWidget(one_Button, 0, 0, 1, 1);

        nine_Button = new QPushButton(Telephone_Tab);
        nine_Button->setObjectName(QStringLiteral("nine_Button"));

        gridLayout_4->addWidget(nine_Button, 2, 2, 1, 1);

        two_Button = new QPushButton(Telephone_Tab);
        two_Button->setObjectName(QStringLiteral("two_Button"));

        gridLayout_4->addWidget(two_Button, 0, 1, 1, 1);

        four_Button = new QPushButton(Telephone_Tab);
        four_Button->setObjectName(QStringLiteral("four_Button"));

        gridLayout_4->addWidget(four_Button, 1, 0, 1, 1);

        seven_Button = new QPushButton(Telephone_Tab);
        seven_Button->setObjectName(QStringLiteral("seven_Button"));

        gridLayout_4->addWidget(seven_Button, 2, 0, 1, 1);

        asterisk_Button = new QPushButton(Telephone_Tab);
        asterisk_Button->setObjectName(QStringLiteral("asterisk_Button"));

        gridLayout_4->addWidget(asterisk_Button, 3, 0, 1, 1);

        zero_Button = new QPushButton(Telephone_Tab);
        zero_Button->setObjectName(QStringLiteral("zero_Button"));

        gridLayout_4->addWidget(zero_Button, 3, 1, 1, 1);

        eight_Button = new QPushButton(Telephone_Tab);
        eight_Button->setObjectName(QStringLiteral("eight_Button"));

        gridLayout_4->addWidget(eight_Button, 2, 1, 1, 1);

        three_Button = new QPushButton(Telephone_Tab);
        three_Button->setObjectName(QStringLiteral("three_Button"));

        gridLayout_4->addWidget(three_Button, 0, 2, 1, 1);

        hash_Button = new QPushButton(Telephone_Tab);
        hash_Button->setObjectName(QStringLiteral("hash_Button"));

        gridLayout_4->addWidget(hash_Button, 3, 2, 1, 1);

        intercomOn_Button = new QPushButton(Telephone_Tab);
        intercomOn_Button->setObjectName(QStringLiteral("intercomOn_Button"));

        gridLayout_4->addWidget(intercomOn_Button, 4, 0, 1, 1);

        intercomAll_Button = new QPushButton(Telephone_Tab);
        intercomAll_Button->setObjectName(QStringLiteral("intercomAll_Button"));

        gridLayout_4->addWidget(intercomAll_Button, 4, 1, 1, 1);

        intercomCancel_Button = new QPushButton(Telephone_Tab);
        intercomCancel_Button->setObjectName(QStringLiteral("intercomCancel_Button"));

        gridLayout_4->addWidget(intercomCancel_Button, 4, 2, 1, 1);

        tabWidget->addTab(Telephone_Tab, QString());

        gridLayout_2->addWidget(tabWidget, 1, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 524, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuMode = new QMenu(menuBar);
        menuMode->setObjectName(QStringLiteral("menuMode"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuMode->menuAction());
        menuFile->addAction(actionInsert_Sound);
        menuFile->addAction(actionOpen_Preset);
        menuFile->addAction(actionSave_Preset);
        menuMode->addAction(actionPlaylist_Mode);
        menuMode->addAction(actionSoundBoard_Mode);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionOpen_Preset->setText(QApplication::translate("MainWindow", "Open Preset", Q_NULLPTR));
        actionSave_Preset->setText(QApplication::translate("MainWindow", "Save Preset", Q_NULLPTR));
        actionSoundBoard_Mode->setText(QApplication::translate("MainWindow", "Soundboard Mode", Q_NULLPTR));
        actionPlaylist_Mode->setText(QApplication::translate("MainWindow", "Playlist Mode", Q_NULLPTR));
        actionInsert_Sound->setText(QApplication::translate("MainWindow", "Insert Music", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        frame->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        Remove_Button->setText(QApplication::translate("MainWindow", "Remove", Q_NULLPTR));
        Secret_Button->setText(QApplication::translate("MainWindow", "#Noblemove", Q_NULLPTR));
        Status_Label->setText(QApplication::translate("MainWindow", "Currently Playing: [NULL] Current Time: [NULL]", Q_NULLPTR));
        Pause_Button->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
        ISound_Button->setText(QApplication::translate("MainWindow", "Insert Music", Q_NULLPTR));
        Stop_Button->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        Setting_Button->setText(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
        EPlaylist_Button->setText(QApplication::translate("MainWindow", "Edit Playlist", Q_NULLPTR));
        Next_Button->setText(QApplication::translate("MainWindow", "Next", Q_NULLPTR));
        Previous_Button->setText(QApplication::translate("MainWindow", "Previous", Q_NULLPTR));
        random_Button->setText(QApplication::translate("MainWindow", "Random", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Audio_Tab), QApplication::translate("MainWindow", "Audio", Q_NULLPTR));
        removeTime_Button->setText(QApplication::translate("MainWindow", "Remove Time", Q_NULLPTR));
        addTime_Button->setText(QApplication::translate("MainWindow", "Add Time", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(TimePreset_Tab), QApplication::translate("MainWindow", "Time Preset", Q_NULLPTR));
        six_Button->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        five_Button->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        one_Button->setToolTip(QApplication::translate("MainWindow", "1", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        one_Button->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        nine_Button->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        two_Button->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        four_Button->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        seven_Button->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        asterisk_Button->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        zero_Button->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        eight_Button->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        three_Button->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        hash_Button->setText(QApplication::translate("MainWindow", "#", Q_NULLPTR));
        intercomOn_Button->setText(QApplication::translate("MainWindow", "Intercom On", Q_NULLPTR));
        intercomAll_Button->setText(QApplication::translate("MainWindow", "Intercom All", Q_NULLPTR));
        intercomCancel_Button->setText(QApplication::translate("MainWindow", "Cancel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Telephone_Tab), QApplication::translate("MainWindow", "Telephone", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuMode->setTitle(QApplication::translate("MainWindow", "Mode", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

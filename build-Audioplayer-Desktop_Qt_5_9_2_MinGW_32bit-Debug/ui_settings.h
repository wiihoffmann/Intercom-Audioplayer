/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout;
    QComboBox *OutputList3_ComboBox;
    QLabel *Volume_Label;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QComboBox *OutputList_ComboBox;
    QComboBox *OutputList2_ComboBox;
    QDialogButtonBox *buttonBox;
    QCheckBox *Button_Checkbox;
    QLabel *label_2;
    QCheckBox *Random_Checkbox;
    QSlider *fade_Slider;
    QComboBox *HZ_ComboBox;
    QCheckBox *Playlist_Checkbox;
    QLabel *label;
    QLabel *fade_Label;
    QSlider *Volume_Slider;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *Repeat_Checkbox;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(400, 443);
        gridLayout = new QGridLayout(Settings);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        OutputList3_ComboBox = new QComboBox(Settings);
        OutputList3_ComboBox->setObjectName(QStringLiteral("OutputList3_ComboBox"));

        gridLayout->addWidget(OutputList3_ComboBox, 5, 0, 1, 1);

        Volume_Label = new QLabel(Settings);
        Volume_Label->setObjectName(QStringLiteral("Volume_Label"));

        gridLayout->addWidget(Volume_Label, 12, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 17, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 16, 0, 1, 1);

        OutputList_ComboBox = new QComboBox(Settings);
        OutputList_ComboBox->setObjectName(QStringLiteral("OutputList_ComboBox"));

        gridLayout->addWidget(OutputList_ComboBox, 3, 0, 1, 1);

        OutputList2_ComboBox = new QComboBox(Settings);
        OutputList2_ComboBox->setObjectName(QStringLiteral("OutputList2_ComboBox"));

        gridLayout->addWidget(OutputList2_ComboBox, 4, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Settings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 18, 0, 1, 1);

        Button_Checkbox = new QCheckBox(Settings);
        Button_Checkbox->setObjectName(QStringLiteral("Button_Checkbox"));

        gridLayout->addWidget(Button_Checkbox, 7, 0, 1, 1);

        label_2 = new QLabel(Settings);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        Random_Checkbox = new QCheckBox(Settings);
        Random_Checkbox->setObjectName(QStringLiteral("Random_Checkbox"));
        Random_Checkbox->setEnabled(true);

        gridLayout->addWidget(Random_Checkbox, 10, 0, 1, 1);

        fade_Slider = new QSlider(Settings);
        fade_Slider->setObjectName(QStringLiteral("fade_Slider"));
        fade_Slider->setMaximum(100);
        fade_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(fade_Slider, 15, 0, 1, 1);

        HZ_ComboBox = new QComboBox(Settings);
        HZ_ComboBox->setObjectName(QStringLiteral("HZ_ComboBox"));

        gridLayout->addWidget(HZ_ComboBox, 6, 0, 1, 1);

        Playlist_Checkbox = new QCheckBox(Settings);
        Playlist_Checkbox->setObjectName(QStringLiteral("Playlist_Checkbox"));

        gridLayout->addWidget(Playlist_Checkbox, 8, 0, 1, 1);

        label = new QLabel(Settings);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(26);
        font.setUnderline(true);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        fade_Label = new QLabel(Settings);
        fade_Label->setObjectName(QStringLiteral("fade_Label"));

        gridLayout->addWidget(fade_Label, 14, 0, 1, 1);

        Volume_Slider = new QSlider(Settings);
        Volume_Slider->setObjectName(QStringLiteral("Volume_Slider"));
        Volume_Slider->setMaximum(100);
        Volume_Slider->setValue(50);
        Volume_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(Volume_Slider, 13, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        Repeat_Checkbox = new QCheckBox(Settings);
        Repeat_Checkbox->setObjectName(QStringLiteral("Repeat_Checkbox"));
        Repeat_Checkbox->setEnabled(false);

        gridLayout->addWidget(Repeat_Checkbox, 11, 0, 1, 1);


        retranslateUi(Settings);
        QObject::connect(buttonBox, SIGNAL(accepted()), Settings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Settings, SLOT(reject()));

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Dialog", Q_NULLPTR));
        Volume_Label->setText(QApplication::translate("Settings", "Volume", Q_NULLPTR));
        Button_Checkbox->setText(QApplication::translate("Settings", "No Audio Stop", Q_NULLPTR));
        label_2->setText(QApplication::translate("Settings", "Output Device", Q_NULLPTR));
        Random_Checkbox->setText(QApplication::translate("Settings", "Random", Q_NULLPTR));
        Playlist_Checkbox->setText(QApplication::translate("Settings", "Playlist Mode", Q_NULLPTR));
        label->setText(QApplication::translate("Settings", "Settings", Q_NULLPTR));
        fade_Label->setText(QApplication::translate("Settings", "Fade In and Out Duration", Q_NULLPTR));
        Repeat_Checkbox->setText(QApplication::translate("Settings", "Repeat", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H

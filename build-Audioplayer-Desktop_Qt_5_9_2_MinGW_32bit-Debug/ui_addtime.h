/********************************************************************************
** Form generated from reading UI file 'addtime.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTIME_H
#define UI_ADDTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_addTime
{
public:
    QGridLayout *gridLayout;
    QLabel *time_Label;
    QLineEdit *name_LineEdit;
    QLabel *start_Label;
    QTimeEdit *start_timeEdit;
    QLabel *end_Label;
    QTimeEdit *end_timeEdit;
    QLabel *volume_Label;
    QSlider *volume_Slider;
    QCheckBox *fade_checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *addTime)
    {
        if (addTime->objectName().isEmpty())
            addTime->setObjectName(QStringLiteral("addTime"));
        addTime->resize(400, 300);
        gridLayout = new QGridLayout(addTime);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        time_Label = new QLabel(addTime);
        time_Label->setObjectName(QStringLiteral("time_Label"));
        QFont font;
        font.setPointSize(26);
        font.setUnderline(true);
        time_Label->setFont(font);

        gridLayout->addWidget(time_Label, 0, 0, 1, 1);

        name_LineEdit = new QLineEdit(addTime);
        name_LineEdit->setObjectName(QStringLiteral("name_LineEdit"));

        gridLayout->addWidget(name_LineEdit, 1, 0, 1, 1);

        start_Label = new QLabel(addTime);
        start_Label->setObjectName(QStringLiteral("start_Label"));

        gridLayout->addWidget(start_Label, 2, 0, 1, 1);

        start_timeEdit = new QTimeEdit(addTime);
        start_timeEdit->setObjectName(QStringLiteral("start_timeEdit"));
        start_timeEdit->setCalendarPopup(false);
        start_timeEdit->setTimeSpec(Qt::LocalTime);
        start_timeEdit->setTime(QTime(12, 0, 0));

        gridLayout->addWidget(start_timeEdit, 3, 0, 1, 1);

        end_Label = new QLabel(addTime);
        end_Label->setObjectName(QStringLiteral("end_Label"));

        gridLayout->addWidget(end_Label, 4, 0, 1, 1);

        end_timeEdit = new QTimeEdit(addTime);
        end_timeEdit->setObjectName(QStringLiteral("end_timeEdit"));
        end_timeEdit->setTime(QTime(12, 0, 0));

        gridLayout->addWidget(end_timeEdit, 5, 0, 1, 1);

        volume_Label = new QLabel(addTime);
        volume_Label->setObjectName(QStringLiteral("volume_Label"));
        volume_Label->setEnabled(false);

        gridLayout->addWidget(volume_Label, 6, 0, 1, 1);

        volume_Slider = new QSlider(addTime);
        volume_Slider->setObjectName(QStringLiteral("volume_Slider"));
        volume_Slider->setEnabled(false);
        volume_Slider->setMaximum(100);
        volume_Slider->setValue(50);
        volume_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(volume_Slider, 7, 0, 1, 1);

        fade_checkBox = new QCheckBox(addTime);
        fade_checkBox->setObjectName(QStringLiteral("fade_checkBox"));
        fade_checkBox->setEnabled(false);

        gridLayout->addWidget(fade_checkBox, 8, 0, 1, 1);

        buttonBox = new QDialogButtonBox(addTime);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 9, 0, 1, 1);


        retranslateUi(addTime);
        QObject::connect(buttonBox, SIGNAL(accepted()), addTime, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addTime, SLOT(reject()));

        QMetaObject::connectSlotsByName(addTime);
    } // setupUi

    void retranslateUi(QDialog *addTime)
    {
        addTime->setWindowTitle(QApplication::translate("addTime", "Dialog", Q_NULLPTR));
        time_Label->setText(QApplication::translate("addTime", "Add Time", Q_NULLPTR));
        name_LineEdit->setPlaceholderText(QApplication::translate("addTime", "Name", Q_NULLPTR));
        start_Label->setText(QApplication::translate("addTime", "Start Time:", Q_NULLPTR));
        start_timeEdit->setDisplayFormat(QApplication::translate("addTime", "h:mm:ss AP", Q_NULLPTR));
        end_Label->setText(QApplication::translate("addTime", "End Time:", Q_NULLPTR));
        end_timeEdit->setDisplayFormat(QApplication::translate("addTime", "h:mm:ss AP", Q_NULLPTR));
        volume_Label->setText(QApplication::translate("addTime", "Volume:", Q_NULLPTR));
        fade_checkBox->setText(QApplication::translate("addTime", "Fade In and Out", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addTime: public Ui_addTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTIME_H

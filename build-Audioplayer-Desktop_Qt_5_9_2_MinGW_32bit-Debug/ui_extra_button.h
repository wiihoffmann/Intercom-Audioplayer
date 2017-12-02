/********************************************************************************
** Form generated from reading UI file 'extra_button.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRA_BUTTON_H
#define UI_EXTRA_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Extra_Button
{
public:
    QPushButton *E_Button0;
    QPushButton *E_Button5;
    QPushButton *E_Button2;
    QPushButton *E_Button6;
    QPushButton *E_Button3;
    QPushButton *E_Button7;
    QPushButton *E_Button4;
    QPushButton *E_Button8;
    QPushButton *Setup_Button;

    void setupUi(QDialog *Extra_Button)
    {
        if (Extra_Button->objectName().isEmpty())
            Extra_Button->setObjectName(QStringLiteral("Extra_Button"));
        Extra_Button->resize(530, 161);
        E_Button0 = new QPushButton(Extra_Button);
        E_Button0->setObjectName(QStringLiteral("E_Button0"));
        E_Button0->setGeometry(QRect(10, 10, 121, 51));
        E_Button5 = new QPushButton(Extra_Button);
        E_Button5->setObjectName(QStringLiteral("E_Button5"));
        E_Button5->setGeometry(QRect(10, 70, 121, 51));
        E_Button2 = new QPushButton(Extra_Button);
        E_Button2->setObjectName(QStringLiteral("E_Button2"));
        E_Button2->setGeometry(QRect(140, 10, 121, 51));
        E_Button6 = new QPushButton(Extra_Button);
        E_Button6->setObjectName(QStringLiteral("E_Button6"));
        E_Button6->setGeometry(QRect(140, 70, 121, 51));
        E_Button3 = new QPushButton(Extra_Button);
        E_Button3->setObjectName(QStringLiteral("E_Button3"));
        E_Button3->setGeometry(QRect(270, 10, 121, 51));
        E_Button7 = new QPushButton(Extra_Button);
        E_Button7->setObjectName(QStringLiteral("E_Button7"));
        E_Button7->setGeometry(QRect(270, 70, 121, 51));
        E_Button4 = new QPushButton(Extra_Button);
        E_Button4->setObjectName(QStringLiteral("E_Button4"));
        E_Button4->setGeometry(QRect(400, 10, 121, 51));
        E_Button8 = new QPushButton(Extra_Button);
        E_Button8->setObjectName(QStringLiteral("E_Button8"));
        E_Button8->setGeometry(QRect(400, 70, 121, 51));
        Setup_Button = new QPushButton(Extra_Button);
        Setup_Button->setObjectName(QStringLiteral("Setup_Button"));
        Setup_Button->setGeometry(QRect(10, 130, 511, 23));

        retranslateUi(Extra_Button);

        QMetaObject::connectSlotsByName(Extra_Button);
    } // setupUi

    void retranslateUi(QDialog *Extra_Button)
    {
        Extra_Button->setWindowTitle(QApplication::translate("Extra_Button", "Dialog", Q_NULLPTR));
        E_Button0->setText(QApplication::translate("Extra_Button", "1", Q_NULLPTR));
        E_Button5->setText(QApplication::translate("Extra_Button", "5", Q_NULLPTR));
        E_Button2->setText(QApplication::translate("Extra_Button", "2", Q_NULLPTR));
        E_Button6->setText(QApplication::translate("Extra_Button", "6", Q_NULLPTR));
        E_Button3->setText(QApplication::translate("Extra_Button", "3", Q_NULLPTR));
        E_Button7->setText(QApplication::translate("Extra_Button", "7", Q_NULLPTR));
        E_Button4->setText(QApplication::translate("Extra_Button", "4", Q_NULLPTR));
        E_Button8->setText(QApplication::translate("Extra_Button", "8", Q_NULLPTR));
        Setup_Button->setText(QApplication::translate("Extra_Button", "Setup", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Extra_Button: public Ui_Extra_Button {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRA_BUTTON_H

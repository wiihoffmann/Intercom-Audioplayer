/********************************************************************************
** Form generated from reading UI file 'phonesetup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONESETUP_H
#define UI_PHONESETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_phoneSetup
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *phoneSetup)
    {
        if (phoneSetup->objectName().isEmpty())
            phoneSetup->setObjectName(QStringLiteral("phoneSetup"));
        phoneSetup->resize(400, 300);
        gridLayout = new QGridLayout(phoneSetup);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(phoneSetup);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 0, 1, 2);


        retranslateUi(phoneSetup);
        QObject::connect(buttonBox, SIGNAL(rejected()), phoneSetup, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), phoneSetup, SLOT(accept()));

        QMetaObject::connectSlotsByName(phoneSetup);
    } // setupUi

    void retranslateUi(QDialog *phoneSetup)
    {
        phoneSetup->setWindowTitle(QApplication::translate("phoneSetup", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class phoneSetup: public Ui_phoneSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONESETUP_H

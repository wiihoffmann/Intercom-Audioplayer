#include "phonesetup.h"
#include "ui_phonesetup.h"

phoneSetup::phoneSetup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::phoneSetup)
{
    ui->setupUi(this);
}

phoneSetup::~phoneSetup()
{
    delete ui;
}

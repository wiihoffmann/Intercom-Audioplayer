#include "extra_button.h"
#include "ui_extra_button.h"

Extra_Button::Extra_Button(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Extra_Button)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());
    this->setWindowTitle("Extra Button");
}

Extra_Button::~Extra_Button()
{
    delete ui;
}

void Extra_Button::on_Setup_Button_clicked()
{
    if(Setup_Button == false)
    {
        ui->Setup_Button->setText("Select a button, Then select a button in the \"Main Page\"");
        Setup_Button = true;
    }else{
        ui->Setup_Button->setText("Setup");
        Setup_Button = false;
    }
}

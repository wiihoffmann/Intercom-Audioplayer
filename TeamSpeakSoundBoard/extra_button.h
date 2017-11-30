#ifndef EXTRA_BUTTON_H
#define EXTRA_BUTTON_H

#include <QDialog>

namespace Ui {
class Extra_Button;
}

class Extra_Button : public QDialog
{
    Q_OBJECT

public:
    explicit Extra_Button(QWidget *parent = 0);
    ~Extra_Button();

private slots:

    void on_Setup_Button_clicked();

private:
    Ui::Extra_Button *ui;

    bool Setup_Button = false;

};

#endif // EXTRA_BUTTON_H

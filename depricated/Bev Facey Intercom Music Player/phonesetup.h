#ifndef PHONESETUP_H
#define PHONESETUP_H

#include <QDialog>

namespace Ui {
class phoneSetup;
}

class phoneSetup : public QDialog
{
    Q_OBJECT

public:
    explicit phoneSetup(QWidget *parent = 0);
    ~phoneSetup();

private:
    Ui::phoneSetup *ui;
};

#endif // PHONESETUP_H

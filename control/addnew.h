#ifndef ADDNEW_H
#define ADDNEW_H

#include <QDialog>

namespace Ui {
class addnew;
}

class addnew : public QDialog
{
    Q_OBJECT

public:
    explicit addnew(QWidget *parent = nullptr);
    ~addnew();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addnew *ui;
};

#endif // ADDNEW_H

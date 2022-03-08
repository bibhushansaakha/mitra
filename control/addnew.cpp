#include "addnew.h"
#include "ui_addnew.h"

addnew::addnew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addnew)
{
    ui->setupUi(this);
}

addnew::~addnew()
{
    delete ui;
}

void addnew::on_pushButton_clicked()
{
    close();
}


#include "todo.h"
#include "ui_todo.h"
#include "addnew.h"

todo::todo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::todo)
{
    ui->setupUi(this);
}

todo::~todo()
{
    delete ui;
}


void todo::on_pushButton_clicked()
{
    addnew AddNewTask;
    AddNewTask.setModal(true);
    AddNewTask.exec();
}


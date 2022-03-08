#ifndef TODO_H
#define TODO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class todo; }
QT_END_NAMESPACE

class todo : public QMainWindow
{
    Q_OBJECT

public:
    todo(QWidget *parent = nullptr);
    ~todo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::todo *ui;
};
#endif // TODO_H

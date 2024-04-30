#ifndef WINORDRAWWINDOW_H
#define WINORDRAWWINDOW_H

#include <QDialog>
#include<QString>
namespace Ui {
class winOrDrawWindow;
}

class winOrDrawWindow : public QDialog
{
    Q_OBJECT

public:
    explicit winOrDrawWindow(QWidget *parent = nullptr);
    ~winOrDrawWindow();
    void setLabelText(QString);
private slots:
    void on_returnToMainMenu_clicked();

    void on_closeAllBtn_clicked();

private:
    Ui::winOrDrawWindow *ui;
};

#endif // WINORDRAWWINDOW_H

#ifndef SIGNSELECTION_H
#define SIGNSELECTION_H

#include <QDialog>
#include"playingfield.h"
#include"humanplayer.h"
#include"aiplayer.h"
namespace Ui {
class signselection;
}

class signselection : public QDialog
{
    Q_OBJECT

public:
    explicit signselection(QWidget *parent = nullptr);
    ~signselection();

private slots:
    void on_crossBtn_clicked();

    void on_nullBtn_clicked();

private:
    Ui::signselection *ui;
};

#endif // SIGNSELECTION_H

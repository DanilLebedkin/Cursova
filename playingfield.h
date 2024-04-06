#ifndef PLAYINGFIELD_H
#define PLAYINGFIELD_H

#include <QDialog>
#include"game.h"
#include"humanplayer.h"
#include"aiplayer.h"
#include<qvector.h> >
namespace Ui {
class playingField;
}

class playingField : public QDialog
{
    Q_OBJECT

public:
    explicit playingField(QWidget *parent = nullptr);
    ~playingField();
    void setHumanPlayer(HumanPlayer);
    void setAiPlayer(AiPlayer);
    void fillingVectorOfButtons();
   static QVector<QPushButton*>getButtons();
private slots:
    void on_field1_2_clicked();

    void on_field1_1_clicked();

    void on_field1_3_clicked();

    void on_field2_1_clicked();

    void on_field2_2_clicked();

    void on_field2_3_clicked();

    void on_field3_3_clicked();

    void on_field3_2_clicked();

    void on_field3_1_clicked();

private:
    Ui::playingField *ui;
    HumanPlayer humanPlayer;
    AiPlayer aiPlayer;
  static QVector<QPushButton*>buttons;
};

#endif // PLAYINGFIELD_H

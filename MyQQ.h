#pragma once

#include <QtWidgets/QDialog>
#include <QToolBox>
#include <QToolButton>
#include <QGroupBox>
#include <QHBoxLayout>

//#include "ui_MyQQ.h"

#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif
class MyQQ : public QToolBox
{
    Q_OBJECT

public:
    MyQQ(QWidget *parent = Q_NULLPTR);
    void display();
private:
    //Ui::MyQQClass ui;
    QToolButton* toolBtn1_1, * toolBtn1_2, * toolBtn1_3, * toolBtn1_4, * toolBtn1_5, * toolBtn2_1, * toolBtn2_2, * toolBtn3_1, * toolBtn3_2;
    QGroupBox* mainGroupBox1, * mainGroupBox2, * mainGroupBox3;
    QVBoxLayout* mainLayout1, * mainLayout2, * mainLayout3;
};

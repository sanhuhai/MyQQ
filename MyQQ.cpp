#include "MyQQ.h"

MyQQ::MyQQ(QWidget *parent)
    : QToolBox(parent)
{
    //ui.setupUi(this);
	display();
}
 
void MyQQ::display() {
    setWindowTitle("MyQQ");
    toolBtn1_1 = new QToolButton;
    toolBtn1_1->setText("������");
    toolBtn1_1->setIcon(QPixmap("img/������.jpg"));
    toolBtn1_1->setIconSize(QPixmap("img/������.jpg").size());
    toolBtn1_1->setAutoRaise(true);
    toolBtn1_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    toolBtn1_2 = new QToolButton;
	toolBtn1_2->setText("������");
	toolBtn1_2->setIcon(QPixmap("img/������.jpg"));
	toolBtn1_2->setIconSize(QPixmap("img/������.jpg").size());
	toolBtn1_2->setAutoRaise(true);
	toolBtn1_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    toolBtn1_3 = new QToolButton;
	toolBtn1_3->setText("������");
	toolBtn1_3->setIcon(QPixmap("img/������.jpg"));
	toolBtn1_3->setIconSize(QPixmap("img/������.jpg").size());
	toolBtn1_3->setAutoRaise(true);
	toolBtn1_3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    toolBtn1_4 = new QToolButton;
	toolBtn1_4->setText("�Ը�֮��");
	toolBtn1_4->setIcon(QPixmap("img/�Ը�֮��.jpg"));
	toolBtn1_4->setIconSize(QPixmap("img/�Ը�֮��.jpg").size());
	toolBtn1_4->setAutoRaise(true);
	toolBtn1_4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    mainGroupBox1 = new QGroupBox;
    mainLayout1 = new QVBoxLayout(mainGroupBox1);
    mainLayout1->setMargin(10);
    mainLayout1->setAlignment(Qt::AlignHCenter);
	mainLayout1->addWidget(toolBtn1_1);
	mainLayout1->addWidget(toolBtn1_2);
    mainLayout1->addWidget(toolBtn1_3);
    mainLayout1->addWidget(toolBtn1_4);
    mainLayout1->addStretch();
    toolBtn2_1 = new QToolButton;
	toolBtn2_1->setText("�̼�");
	toolBtn2_1->setIcon(QPixmap("img/�̼�.jpg"));
	toolBtn2_1->setIconSize(QPixmap("img/�̼�.jpg").size());
	toolBtn2_1->setAutoRaise(true);
	toolBtn2_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    toolBtn2_2 = new QToolButton;
	toolBtn2_2->setText("����");
	toolBtn2_2->setIcon(QPixmap("img/����.jpg"));
	toolBtn2_2->setIconSize(QPixmap("img/����.jpg").size());
	toolBtn2_2->setAutoRaise(true);
	toolBtn2_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
	mainGroupBox2 = new QGroupBox;
	mainLayout2 = new QVBoxLayout(mainGroupBox2);
	mainLayout2->setMargin(10);
	mainLayout2->setAlignment(Qt::AlignHCenter);
	mainLayout2->addWidget(toolBtn2_1);
	mainLayout2->addWidget(toolBtn2_2);
	mainLayout2->addStretch();
	toolBtn3_1 = new QToolButton;
	toolBtn3_1->setText("ɵ��");
	toolBtn3_1->setIcon(QPixmap("img/ɵ��.jpg"));
	toolBtn3_1->setIconSize(QPixmap("img/ɵ��.jpg").size());
	toolBtn3_1->setAutoRaise(true);
	toolBtn3_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    toolBtn3_2 = new QToolButton;
	toolBtn3_2->setText("��֪����ô����");
	toolBtn3_2->setIcon(QPixmap("img/��֪����ô����.jpg"));
	toolBtn3_2->setIconSize(QPixmap("img/��֪����ô����.jpg").size());
	toolBtn3_2->setAutoRaise(true);
	toolBtn3_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
	mainGroupBox3 = new QGroupBox;
	mainLayout3 = new QVBoxLayout(mainGroupBox3);
	mainLayout3->setMargin(10);
	mainLayout3->setAlignment(Qt::AlignHCenter);
	mainLayout3->addWidget(toolBtn3_1);
	mainLayout3->addWidget(toolBtn3_2);
	mainLayout3->addStretch();
	QToolBox tool(this);
	this->addItem((QWidget*)mainGroupBox1, "615���½Y��");
	this->addItem((QWidget*)mainGroupBox2, "�ҵĺ���");
	this->addItem((QWidget*)mainGroupBox3, "İ����");
}
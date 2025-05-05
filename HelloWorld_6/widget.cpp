#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    myButton = new QPushButton(this);
    myButton->setText("hello world");

    connect(myButton, &QPushButton::clicked, this, &Widget::handlerClick);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handlerClick()
{
    if (myButton->text() == "hello world")
    {
        myButton->setText("hello qt");
    }
    else
    {
        myButton->setText("hello world");
    }
}

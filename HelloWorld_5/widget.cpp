#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::handlerClick);
}

void Widget::handlerClick()
{
    if (ui->pushButton->text() == "Hello World!")
    {
        ui->pushButton->setText("Hello Qt!");
    }
    else
    {
        ui->pushButton->setText("Hello World!");
    }
}

Widget::~Widget()
{
    delete ui;
}

#include "kq.h"
#include "ui_kq.h"

kq::kq(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kq)
{
    ui->setupUi(this);
}

kq::~kq()
{
    delete ui;
}

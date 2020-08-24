#include "MonitorItemForm.h"
#include "ui_MonitorItemForm.h"

MonitorItemForm::MonitorItemForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MonitorItemForm)
{
    ui->setupUi(this);
}

MonitorItemForm::~MonitorItemForm()
{
    delete ui;
}

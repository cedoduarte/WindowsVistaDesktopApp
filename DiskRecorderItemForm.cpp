#include "DiskRecorderItemForm.h"
#include "ui_DiskRecorderItemForm.h"

DiskRecorderItemForm::DiskRecorderItemForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DiskRecorderItemForm)
{
    ui->setupUi(this);
}

DiskRecorderItemForm::~DiskRecorderItemForm()
{
    delete ui;
}

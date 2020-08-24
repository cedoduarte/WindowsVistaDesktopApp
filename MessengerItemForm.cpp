#include "MessengerItemForm.h"
#include "ui_MessengerItemForm.h"

MessengerItemForm::MessengerItemForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MessengerItemForm)
{
    ui->setupUi(this);
}

MessengerItemForm::~MessengerItemForm()
{
    delete ui;
}

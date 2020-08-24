#include "InternetItemForm.h"
#include "ui_InternetItemForm.h"

InternetItemForm::InternetItemForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::InternetItemForm)
{
    ui->setupUi(this);
}

InternetItemForm::~InternetItemForm()
{
    delete ui;
}

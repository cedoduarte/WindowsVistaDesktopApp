#include "CardsItemForm.h"
#include "ui_CardsItemForm.h"

CardsItemForm::CardsItemForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CardsItemForm)
{
    ui->setupUi(this);
}

CardsItemForm::~CardsItemForm()
{
    delete ui;
}

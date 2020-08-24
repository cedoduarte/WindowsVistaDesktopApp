#include "PokerItemForm.h"
#include "ui_PokerItemForm.h"

PokerItemForm::PokerItemForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PokerItemForm)
{
    ui->setupUi(this);
}

PokerItemForm::~PokerItemForm()
{
    delete ui;
}

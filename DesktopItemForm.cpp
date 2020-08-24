#include "DesktopItemForm.h"
#include "ui_DesktopItemForm.h"

DesktopItemForm::DesktopItemForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DesktopItemForm)
{
    ui->setupUi(this);
}

DesktopItemForm::~DesktopItemForm()
{
    delete ui;
}

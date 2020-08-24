#include "MinesweeperItemForm.h"
#include "ui_MinesweeperItemForm.h"

MinesweeperItemForm::MinesweeperItemForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MinesweeperItemForm)
{
    ui->setupUi(this);
}

MinesweeperItemForm::~MinesweeperItemForm()
{
    delete ui;
}

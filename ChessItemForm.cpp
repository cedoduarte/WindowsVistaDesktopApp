#include "ChessItemForm.h"
#include "ui_ChessItemForm.h"

ChessItemForm::ChessItemForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChessItemForm)
{
    ui->setupUi(this);
}

ChessItemForm::~ChessItemForm()
{
    delete ui;
}

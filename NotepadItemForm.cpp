#include "NotepadItemForm.h"
#include "ui_NotepadItemForm.h"

NotepadItemForm::NotepadItemForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NotepadItemForm)
{
    ui->setupUi(this);
    ui->menuBar->setPlainTextEdit(ui->plainTextEdit);
}

NotepadItemForm::~NotepadItemForm()
{
    delete ui;
}


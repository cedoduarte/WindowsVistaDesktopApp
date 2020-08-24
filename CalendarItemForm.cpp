#include "CalendarItemForm.h"
#include "ui_CalendarItemForm.h"

CalendarItemForm::CalendarItemForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CalendarItemForm)
{
    ui->setupUi(this);
}

CalendarItemForm::~CalendarItemForm()
{
    delete ui;
}

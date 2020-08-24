#include "StartMenuForm.h"
#include "ui_StartMenuForm.h"
#include "Defines.h"

StartMenuForm::StartMenuForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StartMenuForm)
{
    ui->setupUi(this);
}

StartMenuForm::~StartMenuForm()
{
    delete ui;
}

void StartMenuForm::on_apps_listWidget_clicked(const QModelIndex &index)
{
    ui->apps_listWidget->setCurrentRow(-1);
    emit appItemSelected(index.row());
}

void StartMenuForm::on_system_listWidget_clicked(const QModelIndex &index)
{
    ui->system_listWidget->setCurrentRow(-1);
    emit systemItemSelected(index.row());
}

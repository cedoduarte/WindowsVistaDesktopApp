#include "ScreenItemForm.h"
#include "ui_ScreenItemForm.h"
#include "Defines.h"

ScreenItemForm::ScreenItemForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ScreenItemForm)
{
    ui->setupUi(this);
}

ScreenItemForm::~ScreenItemForm()
{
    delete ui;
}

void ScreenItemForm::on_listWidget_clicked(const QModelIndex &index)
{
    ui->label->setPixmap(QPixmap(getWallpaperFilename(index.row())));
}

void ScreenItemForm::on_apply_pushButton_clicked()
{
    const int crow = ui->listWidget->currentRow();
    if (crow >= 0)
    {
        emit applyWallpaper(getWallpaperFilename(crow));
    }
}

QString ScreenItemForm::getWallpaperFilename(int wallpaper) const
{
    switch (wallpaper)
    {
        case Black: return ":/black.jpg";
        case Blue: return ":/blue.jpg";
        case Green: return ":/green.jpg";
    }
    return "";
}

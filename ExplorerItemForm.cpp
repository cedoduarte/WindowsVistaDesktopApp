#include "ExplorerItemForm.h"
#include "ui_ExplorerItemForm.h"
#include "Defines.h"
#include <QStandardPaths>
#include <QDebug>
#include <QDir>

ExplorerItemForm::ExplorerItemForm(int item, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ExplorerItemForm)
{
    ui->setupUi(this);
    ui->listWidget->setIconSize(QSize(25, 25));
    ui->listWidget->setViewMode(QListView::IconMode);
    showDir(item);
}

ExplorerItemForm::~ExplorerItemForm()
{
    delete ui;
}

QString ExplorerItemForm::getDirectoryPath(int item) const
{
    QString dirpath;
    switch (item)
    {
        case Documents: return QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).front();
        case Downloads: return QStandardPaths::standardLocations(QStandardPaths::DownloadLocation).front();
        case Music: return QStandardPaths::standardLocations(QStandardPaths::MusicLocation).front();
        case Videos: return QStandardPaths::standardLocations(QStandardPaths::MoviesLocation).front();
        case Images: return QStandardPaths::standardLocations(QStandardPaths::PicturesLocation).front();
        case Desktop: return QStandardPaths::standardLocations(QStandardPaths::DesktopLocation).front();
        case PC: return QStandardPaths::standardLocations(QStandardPaths::HomeLocation).front();
    }
    return "";
}

void ExplorerItemForm::showDir(int item)
{
    QString dirpath = getDirectoryPath(item);
    QDir dir(dirpath);
    dir.setFilter(QDir::Dirs | QDir::Files | QDir::NoDotAndDotDot);
    const int count = int(dir.count());
    for (int x = 0; x < count; ++x)
    {
        QString filename = dir[x];
        QString fullFilePath = dirpath + "/" + filename;
        QFileInfo finfo(fullFilePath);
        QListWidgetItem *item = new QListWidgetItem;
        item->setText(finfo.fileName());
        if (finfo.isDir())
        {
            item->setIcon(QIcon(":/open.png"));
        }
        else if (finfo.isFile())
        {
            item->setIcon(QIcon(":/new.png"));
        }
        ui->listWidget->addItem(item);
    }
}

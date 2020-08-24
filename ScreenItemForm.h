#ifndef SCREENITEMFORM_H
#define SCREENITEMFORM_H

#include <QWidget>

namespace Ui
{
class ScreenItemForm;
}

class ScreenItemForm : public QWidget
{
    Q_OBJECT
public:
    explicit ScreenItemForm(QWidget *parent = nullptr);
    ~ScreenItemForm();
signals:
    void applyWallpaper(const QString &wallpaper);
private slots:
    void on_listWidget_clicked(const QModelIndex &index);
    void on_apply_pushButton_clicked();
private:
    QString getWallpaperFilename(int wallpaper) const;

    Ui::ScreenItemForm *ui;
};

#endif // SCREENITEMFORM_H

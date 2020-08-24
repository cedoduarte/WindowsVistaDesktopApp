#ifndef STARTMENUFORM_H
#define STARTMENUFORM_H

#include <QWidget>

namespace Ui
{
class StartMenuForm;
}

class StartMenuForm : public QWidget
{
    Q_OBJECT
public:
    explicit StartMenuForm(QWidget *parent = nullptr);
    ~StartMenuForm();
signals:
    void appItemSelected(int item);
    void systemItemSelected(int item);
private slots:
    void on_apps_listWidget_clicked(const QModelIndex &index);
    void on_system_listWidget_clicked(const QModelIndex &index);
private:
    Ui::StartMenuForm *ui;
};

#endif // STARTMENUFORM_H

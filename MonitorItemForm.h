#ifndef MONITORITEMFORM_H
#define MONITORITEMFORM_H

#include <QWidget>

namespace Ui
{
class MonitorItemForm;
}

class MonitorItemForm : public QWidget
{
    Q_OBJECT
public:
    explicit MonitorItemForm(QWidget *parent = nullptr);
    ~MonitorItemForm();
private:
    Ui::MonitorItemForm *ui;
};

#endif // MONITORITEMFORM_H

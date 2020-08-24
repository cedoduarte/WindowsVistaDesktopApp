#ifndef DESKTOPITEMFORM_H
#define DESKTOPITEMFORM_H

#include <QWidget>

namespace Ui
{
class DesktopItemForm;
}

class DesktopItemForm : public QWidget
{
    Q_OBJECT
public:
    explicit DesktopItemForm(QWidget *parent = nullptr);
    ~DesktopItemForm();
private:
    Ui::DesktopItemForm *ui;
};

#endif // DESKTOPITEMFORM_H

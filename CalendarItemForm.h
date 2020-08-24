#ifndef CALENDARITEMFORM_H
#define CALENDARITEMFORM_H

#include <QWidget>

namespace Ui
{
class CalendarItemForm;
}

class CalendarItemForm : public QWidget
{
    Q_OBJECT
public:
    explicit CalendarItemForm(QWidget *parent = nullptr);
    ~CalendarItemForm();
private:
    Ui::CalendarItemForm *ui;
};

#endif // CALENDARITEMFORM_H

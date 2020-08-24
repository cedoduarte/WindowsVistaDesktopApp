#ifndef INTERNETITEMFORM_H
#define INTERNETITEMFORM_H

#include <QWidget>

namespace Ui
{
class InternetItemForm;
}

class InternetItemForm : public QWidget
{
    Q_OBJECT
public:
    explicit InternetItemForm(QWidget *parent = nullptr);
    ~InternetItemForm();
private:
    Ui::InternetItemForm *ui;
};

#endif // INTERNETITEMFORM_H

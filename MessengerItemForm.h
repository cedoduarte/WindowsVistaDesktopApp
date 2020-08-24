#ifndef MESSENGERITEMFORM_H
#define MESSENGERITEMFORM_H

#include <QWidget>

namespace Ui
{
class MessengerItemForm;
}

class MessengerItemForm : public QWidget
{
    Q_OBJECT
public:
    explicit MessengerItemForm(QWidget *parent = nullptr);
    ~MessengerItemForm();
private:
    Ui::MessengerItemForm *ui;
};

#endif // MESSENGERITEMFORM_H

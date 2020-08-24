#ifndef POKERITEMFORM_H
#define POKERITEMFORM_H

#include <QWidget>

namespace Ui
{
class PokerItemForm;
}

class PokerItemForm : public QWidget
{
    Q_OBJECT
public:
    explicit PokerItemForm(QWidget *parent = nullptr);
    ~PokerItemForm();
private:
    Ui::PokerItemForm *ui;
};

#endif // POKERITEMFORM_H

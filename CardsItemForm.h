#ifndef CARDSITEMFORM_H
#define CARDSITEMFORM_H

#include <QWidget>

namespace Ui
{
class CardsItemForm;
}

class CardsItemForm : public QWidget
{
    Q_OBJECT
public:
    explicit CardsItemForm(QWidget *parent = nullptr);
    ~CardsItemForm();
private:
    Ui::CardsItemForm *ui;
};

#endif // CARDSITEMFORM_H

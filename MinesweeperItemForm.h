#ifndef MINESWEEPERITEMFORM_H
#define MINESWEEPERITEMFORM_H

#include <QWidget>

namespace Ui
{
class MinesweeperItemForm;
}

class MinesweeperItemForm : public QWidget
{
    Q_OBJECT
public:
    explicit MinesweeperItemForm(QWidget *parent = nullptr);
    ~MinesweeperItemForm();
private:
    Ui::MinesweeperItemForm *ui;
};

#endif // MINESWEEPERITEMFORM_H

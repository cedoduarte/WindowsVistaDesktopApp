#ifndef CHESSITEMFORM_H
#define CHESSITEMFORM_H

#include <QWidget>

namespace Ui
{
class ChessItemForm;
}

class ChessItemForm : public QWidget
{
    Q_OBJECT
public:
    explicit ChessItemForm(QWidget *parent = nullptr);
    ~ChessItemForm();
private:
    Ui::ChessItemForm *ui;
};

#endif // CHESSITEMFORM_H

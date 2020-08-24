#ifndef NOTEPADITEMFORM_H
#define NOTEPADITEMFORM_H

#include <QWidget>

namespace Ui
{
class NotepadItemForm;
}

class NotepadItemForm : public QWidget
{
    Q_OBJECT
public:
    explicit NotepadItemForm(QWidget *parent = nullptr);
    ~NotepadItemForm();
private:
    Ui::NotepadItemForm *ui;
};

#endif // NOTEPADITEMFORM_H

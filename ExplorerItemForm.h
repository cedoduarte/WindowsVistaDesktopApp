#ifndef EXPLORERITEMFORM_H
#define EXPLORERITEMFORM_H

#include <QWidget>

namespace Ui
{
class ExplorerItemForm;
}

class ExplorerItemForm : public QWidget
{
    Q_OBJECT
public:
    explicit ExplorerItemForm(int item, QWidget *parent = nullptr);
    ~ExplorerItemForm();
private:
    QString getDirectoryPath(int item) const;
    void showDir(int item);

    Ui::ExplorerItemForm *ui;
};

#endif // EXPLORERITEMFORM_H

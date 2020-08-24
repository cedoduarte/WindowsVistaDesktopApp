#ifndef DISKRECORDERITEMFORM_H
#define DISKRECORDERITEMFORM_H

#include <QWidget>

namespace Ui
{
class DiskRecorderItemForm;
}

class DiskRecorderItemForm : public QWidget
{
    Q_OBJECT
public:
    explicit DiskRecorderItemForm(QWidget *parent = nullptr);
    ~DiskRecorderItemForm();
private:
    Ui::DiskRecorderItemForm *ui;
};

#endif // DISKRECORDERITEMFORM_H

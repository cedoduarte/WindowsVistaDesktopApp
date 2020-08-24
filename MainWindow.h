#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class StartMenu;
class ScreenItemForm;

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void onOrbitClicked();
    void onAppItemSelected(int item);
    void onSystemItemSelected(int item);
private:
    void addSubWindow(QWidget *widget);
    ScreenItemForm *makeScreenItemForm();

    Ui::MainWindow *ui;
    StartMenu *m_startMenu;
};

#endif // MAINWINDOW_H

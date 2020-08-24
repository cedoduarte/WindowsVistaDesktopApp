#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "Defines.h"
#include "StartMenu.h"
#include "MessengerItemForm.h"
#include "MediaPlayerItemForm.h"
#include "NotepadItemForm.h"
#include "DiskRecorderItemForm.h"
#include "CalendarItemForm.h"
#include "MonitorItemForm.h"
#include "CardsItemForm.h"
#include "ChessItemForm.h"
#include "PokerItemForm.h"
#include "MinesweeperItemForm.h"
#include "ExplorerItemForm.h"
#include "InternetItemForm.h"
#include "ScreenItemForm.h"
#include <QDebug>
#include <QMdiSubWindow>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_startMenu = new StartMenu(this);
    connect(ui->orbitButton, &OrbitButton::clicked, this, &MainWindow::onOrbitClicked);
    connect(m_startMenu, &StartMenu::appItemSelected, this, &MainWindow::onAppItemSelected);
    connect(m_startMenu, &StartMenu::systemItemSelected, this, &MainWindow::onSystemItemSelected);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onOrbitClicked()
{
    QPoint p = ui->orbitButton->pos();
    p = mapToGlobal(p);
    p.ry() -= m_startMenu->height();
    m_startMenu->popup(p);
}

void MainWindow::addSubWindow(QWidget *widget)
{
    QMdiSubWindow *subwindow = ui->mdiArea->addSubWindow(widget);
    subwindow->setWindowTitle(widget->windowTitle());
    subwindow->setWindowIcon(widget->windowIcon());
    subwindow->resize(widget->size());
    subwindow->show();
}

ScreenItemForm *MainWindow::makeScreenItemForm()
{
    ScreenItemForm *form = new ScreenItemForm(this);

    connect(form, &ScreenItemForm::applyWallpaper, this, [&](const QString &wallpaper)
    {
        ui->mdiArea->setBackground(QImage(wallpaper));
    });

    return form;
}

void MainWindow::onAppItemSelected(int item)
{
    switch (item)
    {
        case Messenger:
        {
            addSubWindow(new MessengerItemForm(this));
            break;
        }
        case MediaPlayer:
        {
            addSubWindow(new MediaPlayerItemForm(this));
            break;
        }
        case Notepad:
        {
            addSubWindow(new NotepadItemForm(this));
            break;
        }
        case DiskRecorder:
        {
            addSubWindow(new DiskRecorderItemForm(this));
            break;
        }
        case Calendar:
        {
            addSubWindow(new CalendarItemForm(this));
            break;
        }
        case Monitor:
        {
            addSubWindow(new MonitorItemForm(this));
            break;
        }
        case Cards01:
        {
            addSubWindow(new CardsItemForm(this));
            break;
        }
        case Chess:
        {
            addSubWindow(new ChessItemForm(this));
            break;
        }
        case Poker:
        {
            addSubWindow(new PokerItemForm(this));
            break;
        }
        case Minesweeper:
        {
            addSubWindow(new MinesweeperItemForm(this));
            break;
        }
    }
}

void MainWindow::onSystemItemSelected(int item)
{
    switch (item)
    {
        case Documents: case Downloads: case Music: case Videos: case Images: case Desktop: case PC:
        {
            addSubWindow(new ExplorerItemForm(item, this));
            break;
        }
        case Internet:
        {
            addSubWindow(new InternetItemForm(this));
            break;
        }
        case Screen:
        {
            addSubWindow(makeScreenItemForm());
            break;
        }
    }
}

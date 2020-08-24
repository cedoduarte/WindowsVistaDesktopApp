#ifndef NOTEPADMENUBAR_H
#define NOTEPADMENUBAR_H

#include <QMenuBar>

class QPlainTextEdit;

class NotepadMenuBar : public QMenuBar
{
    Q_OBJECT
public:
    NotepadMenuBar(QWidget *parent = nullptr);
    void setPlainTextEdit(QPlainTextEdit *plainTextEdit);
private slots:
    void onOpen();
    void onSave();
private:
    QMenu *makeFileMenu();
    QMenu *makeEditMenu();
    QAction *makeNewAction();
    QAction *makeOpenAction();
    QAction *makeSaveAction();
    QAction *makeCopyAction();
    QAction *makeCutAction();
    QAction *makePasteAction();

    QPlainTextEdit *m_plainTextEdit;
};

#endif // NOTEPADMENUBAR_H

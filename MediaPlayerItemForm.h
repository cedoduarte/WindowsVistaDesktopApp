#ifndef MEDIAPLAYERITEMFORM_H
#define MEDIAPLAYERITEMFORM_H

#include <QWidget>

class QMediaPlayer;

namespace Ui
{
class MediaPlayerItemForm;
}

class MediaPlayerItemForm : public QWidget
{
    Q_OBJECT
public:
    explicit MediaPlayerItemForm(QWidget *parent = nullptr);
    ~MediaPlayerItemForm();
private:
    Ui::MediaPlayerItemForm *ui;
    QMediaPlayer *m_mediaPlayer;
};

#endif // MEDIAPLAYERITEMFORM_H

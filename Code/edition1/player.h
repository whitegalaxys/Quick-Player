#ifndef PLAYER_H
#define PLAYER_H


#include <QWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>

QT_BEGIN_NAMESPACE
class QAbstractItemView;
class QLabel;
class QMediaPlayer;
class QPushButton;
class QSlider;
QT_END_NAMESPACE


class Player : public QWidget
{
    Q_OBJECT

public:
    Player(QWidget *parent = 0);
    ~Player();

    bool isPlayerAvailable() const;

private:

    QMediaPlayer *player;
    QMediaPlaylist *playlist;
    QLabel *coverLabel;
    QSlider *slider;
    QLabel *labelDuration;
    qint64 duration;
};


#endif // PLAYER_H

#ifndef PLAYERCONTROLS_H
#define PLAYERCONTROLS_H

#include <QMediaPlayer>
#include <QWidget>

QT_BEGIN_NAMESPACE
class QAbstractButton;
class QAbstractSlider;

QT_END_NAMESPACE

class PlayerControls : public QWidget
{
    Q_OBJECT

public:
    PlayerControls(QWidget *parent = 0);


private:
    QMediaPlayer::State playerState;
    bool playerMuted;
    QAbstractButton *playButton;
    QAbstractButton *stopButton;
    QAbstractButton *nextButton;
    QAbstractButton *previousButton;
};

#endif // PLAYERCONTROLS_H

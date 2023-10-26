#include "timer.h"


#include <QTime>
#include <QTimer>

DigitalClock::DigitalClock(QWidget *parent)
    : QWidget(parent)
{
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &DigitalClock::showTime );
    timer->start(1000);

    showTime();

}

QString DigitalClock::showTime() {
    QTime time = QTime::currentTime();
    QString text = time.toString( "hh:mm" );
    return text;
}

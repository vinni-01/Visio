#ifndef TIMER_H
#define TIMER_H

#include <QObject>
#include <QtWidgets/QtWidgets>

class DigitalClock : public QWidget
{
    Q_OBJECT

public:
    DigitalClock(QWidget *parent = nullptr);

private slots:
    void showTime();
};

#endif // TIMER_H

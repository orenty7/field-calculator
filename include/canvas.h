#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>

class Canvas : public QWidget
{
    Q_OBJECT
public:
    Canvas(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *);

private:
    int width;
    int height;
};

#endif // CANVAS_H

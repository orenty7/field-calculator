#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QWheelEvent>
#include <QtMath>

class Canvas : public QWidget
{
    Q_OBJECT
public:
    Canvas(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *);
    void wheelEvent(QWheelEvent *);
private:
    int width;
    int height;
    double zoom = 1;
};

#endif // CANVAS_H

#include <canvas.h>

Canvas::Canvas(QWidget *parent)
    :  QWidget(parent)
{

}

void Canvas::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(event->rect(), Qt::blue);

}

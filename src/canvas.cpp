#include <canvas.h>

Canvas::Canvas(QWidget *parent)
    :  QWidget(parent)
{
    width = QWidget::width();
    height = QWidget::height();
    QWidget::setEnabled(true);
}

void Canvas::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(event->rect(), Qt::white);
    painter.setRenderHint(QPainter::Antialiasing);

    width = QWidget::width();
    height = QWidget::height();
    painter.scale(zoom, zoom);


    QPen pen = painter.pen();
    pen.setColor(Qt::lightGray);
    pen.setWidthF(0.5);
    painter.setPen(pen);
    for(int y = 0; y < height / zoom; y += 8) {
        painter.drawLine(0, y, width / zoom, y);
    }

    for(int x = 0; x < width / zoom; x += 8) {
        painter.drawLine(x, 0, x, height / zoom);
    }

    pen.setWidth(1);
    pen.setColor(Qt::gray);
    painter.setPen(pen);
    for(int y = 0; y < height / zoom; y += 40) {
        painter.drawLine(0, y, width / zoom, y);
    }

    for(int x = 0; x < width / zoom; x += 40) {
        painter.drawLine(x, 0, x, height / zoom);
    }

}
#include<iostream>
void Canvas::wheelEvent(QWheelEvent *event) {
    double scroll = event->angleDelta().y() / 500.0;
    zoom *= qExp(scroll);

    repaint();
}

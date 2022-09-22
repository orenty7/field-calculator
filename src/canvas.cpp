#include <canvas.h>

Canvas::Canvas(QWidget *parent)
    :  QWidget(parent)
{
    width = QWidget::width();
    height = QWidget::height();
}

void Canvas::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(event->rect(), Qt::white);

    width = QWidget::width();
    height = QWidget::height();

    QPen pen = painter.pen();
    pen.setColor(Qt::gray);
    painter.setPen(pen);
    for(int y = 20; y < height; y += 40) {
        painter.drawLine(0, y, width, y);
    }

    for(int x = 20; x < width; x += 40) {
        painter.drawLine(x, 0, x, height);
    }

    pen.setWidthF(0.5);
    painter.setPen(pen);
    for(int y = 0; y < height; y += 40) {
        painter.drawLine(0, y, width, y);
    }

    for(int x = 0; x < width; x += 40) {
        painter.drawLine(x, 0, x, height);
    }
}

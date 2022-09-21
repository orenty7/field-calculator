#include <mainwindow.h>
#include "../ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
//    painter.fillRect(event->rect(), Qt::black);
}

MainWindow::~MainWindow()
{
    delete ui;
}


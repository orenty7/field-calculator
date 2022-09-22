#include <mainwindow.h>
#include "../ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    label = new QLabel(this);
    label->setAlignment(Qt::AlignRight);
    label->setText("Hi");
    ui->statusbar->addPermanentWidget(label);
}

void MainWindow::paintEvent(QPaintEvent *event) {}

void MainWindow::mouseMoveEvent(QMouseEvent *event) {
    label->setText("Hi");
}



MainWindow::~MainWindow()
{
    delete ui;
}


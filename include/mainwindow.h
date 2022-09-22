#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QLabel>
#include <QMouseEvent>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void paintEvent(QPaintEvent *);
    void mouseMoveEvent(QMouseEvent *);

private:
    Ui::MainWindow *ui;
    QLabel *label;
};
#endif // MAINWINDOW_H

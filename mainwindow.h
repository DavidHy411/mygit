#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "masterthread.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void transaction();

    void on_DbButton1_clicked();

    void on_DbButton2_clicked();

    void on_serialButton1_clicked();

    void on_serialButton2_clicked();

private:
    Ui::MainWindow *ui;
    MasterThread m_thread;
};

#endif // MAINWINDOW_H

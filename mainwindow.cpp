#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPortInfo>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
     ui->setupUi(this);
     ui->DbButton2->setDisabled(true);
     ui->serialButton2->setDisabled(true);
     const auto infos = QSerialPortInfo::availablePorts();
     for (const QSerialPortInfo &info : infos)
          ui->portbox->addItem(info.portName());
     connect(ui->serialButton1, &QPushButton::clicked, this, &MainWindow::transaction);

}

void MainWindow::transaction()
{
    m_thread.transaction(ui->portbox->currentText(),3000,"ARE YOU OK");
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_DbButton1_clicked()
{
    ui->DbButton1->setDisabled(true);
    ui->DbButton2->setDisabled(false);
}

void MainWindow::on_DbButton2_clicked()
{
    ui->DbButton1->setDisabled(false);
    ui->DbButton2->setDisabled(true);
}

void MainWindow::on_serialButton1_clicked()
{
    ui->serialButton1->setDisabled(true);
    ui->serialButton2->setDisabled(false);
}

void MainWindow::on_serialButton2_clicked()
{
    ui->serialButton1->setDisabled(false);
    ui->serialButton2->setDisabled(true);
}

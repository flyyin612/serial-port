#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //自动识别并显示当前存在的串口号
    const auto infos = QSerialPortInfo::availablePorts();
    for(const QSerialPortInfo &info:infos)
        ui->serialPortNamecomboBox->addItem(info.portName());

    //添加波特率下拉菜单

}

MainWindow::~MainWindow()
{
    delete ui;
}


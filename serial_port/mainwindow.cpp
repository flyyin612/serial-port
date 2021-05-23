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
    const QString serialBaudrate[9]={"2400","4800","9600","14400","19200","38400","56000","57600","115200"};
    for(int i = 0 ; i < 9 ; i++)
    {
        ui->serialBaudratecomboBox->addItem(serialBaudrate[i]);
    }


    connect(ui->serialOnClickpushButton,&QPushButton::clicked,this,&MainWindow::onClickedButtun);
    connect(ui->serialCleanReceivepushButton,&QPushButton::clicked,this,&MainWindow::clearReceiveWindow);
    connect(ui->serialSendpushButton,&QPushButton::clicked,this,&MainWindow::on_sendButtun_clicked);
    connect(ui->serialCleanSendpushButton,&QPushButton::clicked,this,&MainWindow::clearSendWindow);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
*@brief:按钮控制函数，控制串口的开和关
*@param:None
*@retval:None
*/
void MainWindow::onClickedButtun()
{
    if(ui->serialOnClickpushButton->text() == tr("打开串口"))
    {
        m_serial = new QSerialPort;

        //设置串口名
        m_serial->setPortName(ui->serialPortNamecomboBox->currentText());

        //打开串口
        m_serial->open(QIODevice::ReadWrite);

        //设置波特率
        m_serial->setBaudRate(ui->serialBaudratecomboBox->currentIndex());

        //连接信号槽
        connect(m_serial,&QSerialPort::readyRead,this,&MainWindow::readData);

        ui->serialPortNamecomboBox->setEnabled(false);
        ui->serialBaudratecomboBox->setEnabled(false);
        ui->serialOpenradioButton->toggle();

        ui->serialOnClickpushButton->setText(tr("关闭串口"));
    }
    else
    {
        //关闭串口
        m_serial->clear();
        m_serial->close();
        m_serial->deleteLater();

        //恢复设置使能
        ui->serialPortNamecomboBox->setEnabled(true);
        ui->serialBaudratecomboBox->setEnabled(true);
        ui->serialOpenradioButton->toggle();
        ui->serialOnClickpushButton->setText(tr("打开串口"));
    }
}

/*
*@brief:读取数据函数
*@param:None
*@retval:None
*/
void MainWindow::readData()
{
    QByteArray data = m_serial->readAll();

    if(!data.isLower())
    {
        QString str = ui->serialReceivetextEdit->toPlainText();

//        str += tr(data);      //此写法不支持中文
        str += QString::fromLocal8Bit(data);        //此写法支持中文
        ui->serialReceivetextEdit->clear();
        ui->serialReceivetextEdit->append(str);
    }
}

/*
*@brief:清除接收窗口
*@param:None
*@retval:None
*/
void MainWindow::clearReceiveWindow()
{
    ui->serialReceivetextEdit->clear();
}

/*
*@brief:发送函数
*@param:None
*@retval:None
*/
void MainWindow::on_sendButtun_clicked()
{
//    m_serial->write(ui->serialSendtextEdit->toPlainText().toLatin1());      //此写法不支持中文

    m_serial->write(ui->serialSendtextEdit->toPlainText().toLocal8Bit());   //此写法支持中文
}

/*
*@brief:清除发送窗口
*@param:None
*@retval:None
*/
void MainWindow::clearSendWindow()
{
    ui->serialSendtextEdit->clear();
}

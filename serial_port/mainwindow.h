#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onClickedButtun();
    void readData();
    void clearReceiveWindow();
    void on_sendButtun_clicked();
    void clearSendWindow();

private:
    Ui::MainWindow *ui;
    QSerialPort *m_serial = nullptr;

};
#endif // MAINWINDOW_H

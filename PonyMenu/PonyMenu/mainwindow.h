#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_startButton_pressed();
	void on_jumpButton_pressed();
	void on_speedButton_pressed();
	void on_healthButton_pressed();
	void on_manaButton_pressed();
	void on_fireButton_pressed();
	void on_exitButton_pressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainwidget.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
//    void resizeEvent(QResizeEvent *e) override;

private slots:
    void on_lcdNumber_windowIconTextChanged(const QString &iconText);

    void on_FOVSlider_valueChanged(int value);
    void on_actionAllow_tracking_toggled(bool arg1);
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_actionAllow_tracking_triggered();

private:
    Ui::MainWindow *ui;
    MainWidget *widget;
//    QWidget *centralwidget;


};

#endif // MAINWINDOW_H

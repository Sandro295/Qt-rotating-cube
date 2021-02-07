#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwidget.h"

#include <QMessageBox>

#include <QDebug>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //should be displayed inside window in graphics widget
    widget = new MainWidget(this->ui->placeForCube);
    widget->resize(this->size()/1.5);
//    widget->size() = ui->graphicsForCube->size();
    widget->show();
//    ui->label_4->setText(widget->getFarPlaneValue());
    ui->label_4->setText(QString::number(widget->angularSpeed));
//    connect(ui->FarPlaneSlider, on_FarPlaneSlider_valueChanged)
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_lcdNumber_windowIconTextChanged(const QString &iconText)
{
//    QMessageBox str = iconText;
}



void MainWindow::on_FOVSlider_valueChanged(int value)
{

}

void MainWindow::on_actionAllow_tracking_toggled(bool arg1)
{
    widget->setMouseTracking(arg1);
}

void MainWindow::on_pushButton_clicked()
{
    qDebug() << 123;
    widget->incFarPlaneValue();
}

void MainWindow::on_pushButton_2_clicked()
{
    qDebug() << 321;
    widget->decFarPlaneValue();
}

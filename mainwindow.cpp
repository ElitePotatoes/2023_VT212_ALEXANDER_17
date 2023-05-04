#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    clock = new DigitalClock();
    load_img();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::to_web(const QUrl &url) {
    QDesktopServices::openUrl(url);
}


void MainWindow::on_typeWorkout1_clicked()
{
    QUrl url = QString("https://www.flaticon.com/ru/free-icon/love_4760760");
    to_web(url);

}


void MainWindow::on_typeWorkout2_clicked()
{
    QUrl url = QString("https://www.flaticon.com/ru/free-icon/chest_4760653");
    to_web(url);
}


void MainWindow::on_typeWorkout3_clicked()
{
    QUrl url = QString("https://www.flaticon.com/ru/free-icon/leg_4760876");
    to_web(url);
}


void MainWindow::on_typeWorkout4_clicked()
{
    QUrl url = QString("https://www.flaticon.com/ru/free-icon/thighs_4760860?related_id=4760860&origin=pack");
    to_web(url);
}


void MainWindow::on_startTraining1_clicked()
{
    QUrl url = QString("https://www.youtube.com/watch?v=G63ZFn16r-0");
    to_web(url);
}


void MainWindow::on_startTraining2_clicked()
{
    QUrl url = QString("https://www.youtube.com/watch?v=rTA_aRCfD0M");
    to_web(url);
}


void MainWindow::on_startTraining3_clicked()
{
    QUrl url = QString("https://www.youtube.com/watch?v=K-sJlazoP-k");
    to_web(url);
}

void MainWindow::on_startTraining4_clicked()
{
    QUrl url = QString("https://www.youtube.com/watch?v=Vu4NmetiRPY");
    to_web(url);
}

void MainWindow::load_img() {
    QImage img;
    QPixmap pixmap;
    QSize size(128,128);

    img.load(":/img/biceps.png");
    pixmap = QPixmap::fromImage(img).scaled(size);
    ui->typeWorkout1->setIcon(QIcon(pixmap));
    ui->typeWorkout1->setIconSize(QSize(size));

    img.load(":/img/chest.png");
    pixmap = QPixmap::fromImage(img).scaled(size);
    ui->typeWorkout2->setIcon(QIcon(pixmap));
    ui->typeWorkout2->setIconSize(QSize(size));

    img.load(":/img/leg.png");
    pixmap = QPixmap::fromImage(img).scaled(size);
    ui->typeWorkout3->setIcon(QIcon(pixmap));
    ui->typeWorkout3->setIconSize(QSize(size));

    img.load(":/img/thighs.png");
    pixmap = QPixmap::fromImage(img).scaled(size);
    ui->typeWorkout4->setIcon(QIcon(pixmap));
    ui->typeWorkout4->setIconSize(QSize(size));
}

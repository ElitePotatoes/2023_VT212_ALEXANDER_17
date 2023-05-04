
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopServices>

#include <DigitalClock.h>
#include <ChestTrainingWindow.h>
#include <BicepsTrainingWindow.h>
#include <LegsTrainingWindow.h>
#include <ThighsTrainingWindow.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void load_img();
    void to_web(const QUrl &url);

private slots:
    void on_typeWorkout1_clicked();

    void on_typeWorkout2_clicked();

    void on_typeWorkout3_clicked();

    void on_typeWorkout4_clicked();

    void on_startTraining1_clicked();

    void on_startTraining2_clicked();

    void on_startTraining3_clicked();

    void on_startTraining4_clicked();

private:
    Ui::MainWindow *ui;
    LegsTrainingWindow *legsTrainingWindow;
    BicepsTrainingWindow *bicepsTrainingWindow;
    ThighsTrainingWindow *thighsTrainingWindow;
    ChestTrainingWindow *chestTrainingWindow;
    DigitalClock *clock;
};

#endif // MAINWINDOW_H

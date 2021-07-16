#include "mainwindow.h"
#include "ui_mainwindow.h"

//#include <QtCharts>
#include "Function.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){

    setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);
    ui->setupUi(this);

//    QLineSeries *series = new QLineSeries();
//    series->append(0, 6);
//    series->append(2, 4);
//    series->append(3, 8);
//    series->append(7, 4);
//    series->append(10, 5);
//    *series << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6) << QPointF(18, 3) << QPointF(20, 2);
//    QChart *chart = new QChart();
//    chart->legend()->hide();
//    chart->addSeries(series);
//    chart->createDefaultAxes();
//    chart->setTitle("Simple line chart example");
//    ui->graphicsView->setChart(chart);
//    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    merge_files_json("test.json");
}

MainWindow::~MainWindow(){
    delete ui;
}


#include <QGraphicsScene>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "paintgraph.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButton_clicked() { close(); }
void MainWindow::on_actionBeenden_triggered() { close(); }

void MainWindow::on_pushButton_2_clicked()
{
    QGraphicsScene *scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    PaintGraph *graph = new PaintGraph;
    scene->addItem(graph);
}

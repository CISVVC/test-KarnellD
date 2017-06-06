#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

const double PI = 3.14;
void MainWindow::comparePizzas()
{
    //calc the are of the round and square pizzas
    //get the price per square inch for each of the pizzas
    //compare the price per square inch
    //smaller of the 2 is the best deal

    //round pizza variables
    double diameter = ui->rnd_diameter->text().toDouble();
    double rnd_price = ui->rnd_price->text().toDouble();
    double rnd_cost_per_inch = rnd_price / (PI * std::pow(diameter / 2,2));

    //rectangle pizza variables
    double rec_length = ui->rec_length->text().toDouble();
    double rec_width = ui->rec_width->text().toDouble();
    double rec_price = ui->rec_price->text().toDouble();
    double rec_cost_per_inch = rec_price / (rec_length * rec_width);

    if(rnd_cost_per_inch < rec_cost_per_inch)
        ui->result_label->setText("The round pizza is the best deal");
    else if(rnd_cost_per_inch > rec_cost_per_inch)
        ui->result_label->setText("Thw rectangle pizza is the best deal");
    else
        ui->result_label->setText("The 2 pizzas are of equal value");
}

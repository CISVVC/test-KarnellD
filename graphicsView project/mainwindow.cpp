/*Cornel Davis
 * Add graphic Item
 * May 25,2017
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_scene = new QGraphicsScene();
    ui->graphicsView->setScene(m_scene);
    QPen pen;
    pen.setWidth(2);
    QBrush brush(Qt::yellow);
    m_rectangle = m_scene->addRect(150,0,100,-100,pen,brush);
    m_rectangle->setFlag(QGraphicsItem::ItemIsSelectable, true);
    m_rectangle->setFlag(QGraphicsItem::ItemIsMovable, true);
    m_circle = m_scene->addEllipse(0,0,-100,-100,pen,brush);
    m_circle->setFlag(QGraphicsItem::ItemIsMovable, true);
    m_circle->setFlag(QGraphicsItem::ItemIsSelectable, true);
    m_cubert = m_scene->addPixmap(QPixmap(":/cubert.jpeg"));
    m_cubert->setScale(.50);
    m_circle->setScale(1);
    m_sponge = m_scene->addPixmap(QPixmap(":/spongebob.jpeg"));
    m_sponge->setScale(.25);
    m_sponge->setPos(-200,0);
    m_sponge->setFlag(QGraphicsItem::ItemIsMovable, true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::rotateRectangle(int degrees)
{
    m_rectangle->setRotation(degrees);
}


void MainWindow::updateRotation()
{
    int degrees = ui->lineEdit->text().toInt();
    rotateRectangle(degrees);
}

void MainWindow::moveRight()
{
    QPointF p = m_cubert->pos();
    m_cubert->setPos(p +  QPointF(p.x() + 25,p.y()));

}


/*Cornel Davis
 * Add graphic Item
 * May 25,2017
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsPixmapItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void updateRotation();
    void moveRight();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *m_scene;
    QGraphicsRectItem *m_rectangle;
    QGraphicsPixmapItem *m_cubert;
    QGraphicsPixmapItem *m_sponge;
    QGraphicsEllipseItem *m_circle;
    void rotateRectangle(int degrees);
};

#endif // MAINWINDOW_H

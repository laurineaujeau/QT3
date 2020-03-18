//
// Created by lauri on 18/03/2020.
//

#ifndef QT3_CLASS1_H
#define QT3_CLASS1_H
#include <QObject>
#include <QWidget>
#include <QProgressBar>
#include <QSlider>
#include <QPushButton>
#include <QMainWindow>
#include <QVBoxLayout>

class class1 : public QMainWindow{
    Q_OBJECT;
private:
    QProgressBar* bar=new QProgressBar;
    QSlider* slider=new QSlider;
public:
    class1( QWidget* parent = 0, int valBar=10, int valSlider=0);

};


#endif //QT3_CLASS1_H

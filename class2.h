//
// Created by lauri on 18/03/2020.
//

#ifndef QT3_CLAS2_H
#define QT3_CLAS2_H
#include <QObject>
#include <QWidget>
#include <QProgressBar>
#include <QApplication>
#include <QSlider>
#include <QPushButton>
#include <QMainWindow>
#include <QVBoxLayout>
#include <string>
#include <iostream>

class class2 : public QMainWindow{
    Q_OBJECT;
private:
    QPushButton* button=new QPushButton;
    int compteurClick=0;
public:
    class2( QWidget* parent = 0);
public slots:
    void  changeButton ();
};


#endif //QT3_CLAS2_H

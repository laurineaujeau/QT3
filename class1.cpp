//
// Created by lauri on 18/03/2020.
//

#include "class1.h"
class1::class1( QWidget* parent) {
    button=new QPushButton();
    button->setMinimumSize(600,500);
    button->setGeometry(10,10,80,30);
    button->setWindowTitle ("Titre");
    /*bar=new QProgressBar();
    slider=new QSlider();
    slider->setOrientation(Qt::Horizontal);*/

}
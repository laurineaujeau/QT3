#include <iostream>
#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QObject>
#include "class1.h"
#include "class2.h"
int main(int argc, char ** argv) {
    QApplication app (argc, argv);
    ///EXERCICE1
   // class1* fenetre1 = new class1;
   //fenetre1 -> show();

   ///EXERCICE 2 / PROGRAMME 1 / VERSION 1
   /* QPushButton button;
    button.setText("fils");
    button.show();
    QObject :: connect (&button, SIGNAL ( clicked()), qApp, SLOT ( quit()));*/
     ///EXERCICE2 / PROGRAMME 1 / VERSION 2
    class2* fenetre2 = new class2;
    fenetre2 -> show();
    return app.exec();

}
#include <iostream>
#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include "class1.h"
int main(int argc, char ** argv) {
    std::cout << "Hello, World!" << std::endl;
    QApplication app (argc, argv);
    std::cout << "Hello 2!" << std::endl;
   // class1();
   class1* fenetre1 = new class1;
   fenetre1 -> show();
    std::cout << "Hello 3!" << std::endl;
    return app.exec();

}
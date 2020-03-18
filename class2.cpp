//
// Created by lauri on 18/03/2020.
//

#include "class2.h"
using namespace std;
class2::class2(QWidget* parent) {
    button=new QPushButton();
    button->setText("fils");

    QWidget *mainWidget = new QWidget();
    QVBoxLayout *mainLayout = new QVBoxLayout();
    mainLayout->addWidget(button);

    mainWidget->setLayout(mainLayout);
    setCentralWidget(mainWidget);

   // QObject :: connect (button, SIGNAL ( clicked()),qApp , SLOT (quit()));
    QObject :: connect (button, SIGNAL ( clicked ()), this , SLOT ( changeButton ()));

}
void  class2 :: changeButton () {
   // button-> setText (  "Exemple"  + str(compteurClick));
    button-> setText( " Exemple " );
    compteurClick ++;
    cout << " Exemple " << compteurClick << endl;
}
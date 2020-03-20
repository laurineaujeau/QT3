//
// Created by lauri on 18/03/2020.
//

#include "class2.h"
#include "class1.h"
using namespace std;
class2::class2(QWidget* parent) {
    button=new QPushButton();
    button->setText("fils");

    QWidget *mainWidget = new QWidget();
    QVBoxLayout *mainLayout = new QVBoxLayout();
    zoneText = new QTextEdit("Text initial");
    mainLayout->addWidget(button);// j'ajoute mon bouton
    mainLayout->addWidget(zoneText);// j'ajoute ma zone de texte
    mainWidget->setLayout(mainLayout);
    setCentralWidget(mainWidget);

   // QObject :: connect (button, SIGNAL ( clicked()),qApp , SLOT (quit()));
    //QObject :: connect (button, SIGNAL ( clicked ()), this , SLOT ( changeButton ()));
    QObject :: connect (button, SIGNAL ( clicked ()), this , SLOT ( changeButton2 ()));

}
void  class2 :: changeButton () {
    button-> setText( " Exemple " );// je force le texte du bouton
    compteurClick ++;
    QString displayExample = "Exemple"+ QString::number(compteurClick)+ "\n"+ zoneText->toPlainText() ;
    //zoneText->toPlainText() = permet d'ecrire au dessus du texte déjà existant au lieu de l'ecraser
    zoneText->setText(displayExample);

    //zoneText->setText(" Exemple1 "+compteurClick);  --> bouton qui mange mon texte
    //cout << " Exemple " << compteurClick << endl;
}
void  class2 :: changeButton2 () {
    class1* fenetre1 = new class1;
    fenetre1 -> show();
}
//
// Created by lauri on 18/03/2020.
//

#include "class1.h"
class1::class1( QWidget* parent, int valBar, int valSlider) {

    bar = new QProgressBar(); // Je créé ma barre

    QWidget *mainWidget = new QWidget();
    QVBoxLayout *mainLayout = new QVBoxLayout();
    mainLayout->addWidget(bar); // j'ajoute ma barre dans le mainWidget et je le positionne grave à mainLayout

    slider = new QSlider();// Je créé mon slider
    slider->setOrientation(Qt::Horizontal); // forcer le slider à l'horizontal
    mainLayout->addWidget(slider);// J'ajoute mon slider dans le mainWidget

    mainWidget->setLayout(mainLayout); //Je place mainWidget dans ma fenetre
    setCentralWidget(mainWidget);// Je centre l'affichage

    bar-> setValue ( valBar );
    slider-> setValue ( valSlider );
    QObject :: connect (slider, SIGNAL ( valueChanged ( int )), bar, SLOT ( setValue ( int )));
    // Permet de lier la valeur de la barre et du slider
}
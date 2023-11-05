#ifndef VOLEUR_H
#define VOLEUR_H

#include "Personnage.h"

class Voleur : public Personnage {
public:
    Voleur();
    void attaquer(Monstre& cible);
    void utiliserPouvoirUnique(Monstre& cible);
};

#endif

#ifndef GUERRIER_H
#define GUERRIER_H

#include "Personnage.h"

class Guerrier : public Personnage {
public:
    Guerrier();
    void attaquer(Monstre& cible);
    void utiliserPouvoirUnique(Monstre& cible);
};

#endif

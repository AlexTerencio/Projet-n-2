#ifndef MAGE_H
#define MAGE_H

#include "Personnage.h"

class Mage : public Personnage {
public:
    Mage();
    void attaquer(Monstre& cible);
    void utiliserPouvoirUnique(Monstre& cible);
};

#endif

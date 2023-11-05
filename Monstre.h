#ifndef MONSTRE_H
#define MONSTRE_H

#include "Personnage.h"

class Personnage;

class Monstre {
private:
    int vie;

public:
    Monstre();
    bool estVivant() const;
    void recevoirDegats(int degats);
    void afficherInformationsm() const;
};

#endif

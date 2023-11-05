#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include "Monstre.h"

class Monstre;

class Personnage {
protected:
    std::string nom;
    int vie;
    int attaque;

public:
    Personnage(std::string nom, int vie, int attaque);
    bool estVivant() const;
    void recevoirDegats(int degats);
    virtual void attaquer(Monstre& cible);
    void utiliserPouvoirUnique(Monstre& cible);
    void afficherInformations() const;
};

#endif

#include <iostream>
#include "Voleur.h"

Voleur::Voleur() : Personnage("Voleur", 175, 25) {}

void Voleur::attaquer(Monstre& cible) {
    cible.recevoirDegats(attaque);
}

void Voleur::utiliserPouvoirUnique(Monstre& cible) {
    std::cout << "Le Voleur active Transperçage Sanglant et inflige 50 points de dégâts." << std::endl;
    cible.recevoirDegats(50);
}

#include <iostream>
#include "Guerrier.h"

Guerrier::Guerrier() : Personnage("Guerrier", 250, 35) {}

void Guerrier::attaquer(Monstre& cible) {
    cible.recevoirDegats(attaque);
}

void Guerrier::utiliserPouvoirUnique(Monstre& cible) {
    int bonusAttaque = (250 - vie) * 0.25;
    attaque += bonusAttaque;
    std::cout << "Le Guerrier active Rage Inarrêtable et gagne un bonus de " << bonusAttaque << " points d'attaque." << std::endl;
}

#include <iostream>
#include "Mage.h"

Mage::Mage() : Personnage("Mage", 150, 30) {}

void Mage::attaquer(Monstre& cible) {
    cible.recevoirDegats(attaque);
}

void Mage::utiliserPouvoirUnique(Monstre& cible) {
    std::cout << "Le Mage active Rayon Lumineux et inflige 150 points de dégâts en un coup." << std::endl;
    cible.recevoirDegats(150);
}

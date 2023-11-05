#include "Personnage.h"
#include <iostream>

Personnage::Personnage(std::string _nom, int _vie, int _attaque)
    : nom(_nom), vie(_vie), attaque(_attaque) {}

bool Personnage::estVivant() const {
    return vie > 0;
}

void Personnage::recevoirDegats(int degats) {
    vie -= degats;
    if (vie < 0) {
        vie = 0;
    }
}

void Personnage::attaquer(Monstre& cible) {
    cible.recevoirDegats(attaque);
}

void Personnage::utiliserPouvoirUnique(Monstre& cible) {
    // Par défaut, il n'y a pas de pouvoir unique pour les personnages.
}

void Personnage::afficherInformations() const {
    std::cout << "Personnage : " << nom << std::endl;
    std::cout << "Vie : " << vie << std::endl;
    std::cout << "Attaque : " << attaque << std::endl;
}


#include <iostream>
#include "Monstre.h"
#include "Personnage.h"

Monstre::Monstre(int _vie) : Personnage("Monstre", _vie, 50){}

bool Monstre::estVivant() const {
    return vie > 0;
}

void Monstre::recevoirDegats(int degats) {
    vie -= degats;
    if (vie < 0) {
        vie = 0;
    }
}

void Monstre::afficherInformationsm() const {
    std::cout << "Monstre" << std::endl;
    std::cout << "Vie : " << vie << std::endl;
}
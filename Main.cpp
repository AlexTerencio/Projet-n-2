#include <iostream>
#include "Personnage.h"
#include "Guerrier.h"
#include "Voleur.h"
#include "Mage.h"
#include "Monstre.h"

using namespace std;

int main() {
    Guerrier guerrier;
    Voleur voleur;
    Mage mage;
    Monstre monstre;

    int choixPersonnage;
    cout << "Barde: Venez venez ecouté l'histoire de la mort du monstre du jour...\n";
    cout << "Tout commence avec notre heros du jour...\n";
    cout << "Choisissez un personnage pour affronter le monstre :\n";
    cout << "1. Guerrier\n";
    cout << "2. Voleur\n";
    cout << "3. Mage\n";
    cout << "Entrez le numéro correspondant : ";
    cin >> choixPersonnage;

    Personnage* personnage = nullptr;

    switch (choixPersonnage) {
        case 1:
            personnage = new Guerrier();
            cout << "Guerrier: Les dieux eux meme me craignent!" << endl;
            break;
        case 2:
            personnage = new Voleur();
            cout << "Voleur: Ma lame est toujours affuté et pret pour tranché dans le vif~" << endl;
            break;
        case 3:
            personnage = new Mage();
            cout << "Mage: Ma lumiere me guidera vers la victoire!" << endl;
            break;
        default:
            cout << "Choix invalide. Fin du jeu." << endl;
            return 0;
    }

    int choixAction;
    cout << "Le monstre apparait au combat!" << endl;

    while (personnage->estVivant() && monstre.estVivant()) {
        personnage->afficherInformations();
        monstre.afficherInformationsm();

        
        cout << "Choisissez une action pour votre personnage :\n";
        cout << "1. Attaquer\n";
        cout << "2. Soigner\n";
        cout << "3. Utiliser le Pouvoir Unique\n";
        cout << "Entrez le numéro correspondant : ";
        cin >> choixAction;

        switch (choixAction) {
            case 1:
                personnage->attaquer(monstre);
                cout << "Vous attaquez le monstre!" << endl;
                break;
            case 2:
                // Implémentez les soins ici
                break;
            case 3:
                personnage->utiliserPouvoirUnique(monstre);
                break;
            default:
                cout << "Choix invalide. Essayez à nouveau." << endl;
        }

        personnage->recevoirDegats(50);
    }

    personnage->afficherInformations();
    monstre.afficherInformationsm();


    if (personnage->estVivant()) {
        cout << "Vous avez gagné !" << endl;
    } else {
        cout << "Vous avez perdu..." << endl;
    }

    return 0;
}

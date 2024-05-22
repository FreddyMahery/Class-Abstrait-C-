#include "Foot.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

void Foot::demarrer() const
{
    std::cout << "Le jeu commence !" << std::endl;
}

void Foot::quitter() const
{
    std::cout << "Le jeu se termine. Merci d'avoir joué !" << std::endl;
}

void Foot::pause() const
{
    std::cout << "Le jeu est en pause." << std::endl;
}

void Foot::jouer() const
{
    srand(static_cast<unsigned int>(time(0))); // Initialiser le générateur de nombres aléatoires

    // Tour 1 : Le joueur tire, l'ordinateur est le gardien
    Direction tirJoueur = lireChoix("tireur");
    Direction arretOrdi = choixOrdinateur();

    if (resultat(tirJoueur, arretOrdi))
    {
        std::cout << "L'ordinateur a arrêté le tir !" << std::endl;
    }
    else
    {
        std::cout << "But ! Vous avez marqué !" << std::endl;
    }

    // Tour 2 : L'ordinateur tire, le joueur est le gardien
    Direction tirOrdi = choixOrdinateur();
    Direction arretJoueur = lireChoix("gardien");

    if (resultat(tirOrdi, arretJoueur))
    {
        std::cout << "Vous avez arrêté le tir de l'ordinateur !" << std::endl;
    }
    else
    {
        std::cout << "But pour l'ordinateur !" << std::endl;
    }
}

void Foot::redemarrer() const
{
    std::cout << "Le jeu redémarre !" << std::endl;
}

Foot::Direction Foot::lireChoix(const std::string& role) const
{
    int choix;
    std::cout << "Entrez votre choix en tant que " << role << " (0: Gauche, 1: Milieu, 2: Droite): ";
    std::cin >> choix;
    return static_cast<Direction>(choix);
}

Foot::Direction Foot::choixOrdinateur() const
{
    return static_cast<Direction>(rand() % 3);
}

bool Foot::resultat(Direction joueur, Direction ordinateur) const
{
    return joueur == ordinateur;
}



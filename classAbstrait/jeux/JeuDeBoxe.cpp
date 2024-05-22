#include "JeuDeBoxe.hpp"

JeuDeBoxe::JeuDeBoxe()
{
    pointsJoueurA = 20;
    pointsJoueurB = 20;
    jeuEnCours = false;
    enPause = false;
    joueurA = "Joueur A";
    joueurB = "Joueur B";
    std::srand(std::time(0));
}

void JeuDeBoxe::demarrer() const
{
    std::cout << "Jeu démarré!" << std::endl;
    jeuEnCours = true;
    afficherMenu();
}

void JeuDeBoxe::quitter() const
{
    std::cout << "Quitter le jeu..." << std::endl;
    jeuEnCours = false;
    exit(0);
}

void JeuDeBoxe::pause() const
{
    std::cout << "Jeu en pause." << std::endl;
    enPause = true;
    afficherMenu();
}

void JeuDeBoxe::jouer() const
{
    if (!jeuEnCours)
    {
        std::cout << "Veuillez d'abord démarrer le jeu." << std::endl;
        return;
    }

    // Déterminer qui commence
    int lancerA = lancerDe();
    int lancerB = lancerDe();
    std::cout << joueurA << " lance : " << lancerA << std::endl;
    std::cout << joueurB << " lance : " << lancerB << std::endl;

    bool tourJoueurA = lancerA >= lancerB;

    while (pointsJoueurA > 0 && pointsJoueurB > 0)
    {
        if (enPause)
        {
            std::cout << "Le jeu est en pause. Reprenez pour continuer." << std::endl;
            return;
        }

        if (tourJoueurA)
        {
            tour(pointsJoueurA, pointsJoueurB, joueurA, joueurB);
        }
        else
        {
            tour(pointsJoueurB, pointsJoueurA, joueurB, joueurA);
        }
        tourJoueurA = !tourJoueurA;

        std::cout << joueurA << " points : " << pointsJoueurA << std::endl;
        std::cout << joueurB << " points : " << pointsJoueurB << std::endl;

        if (pointsJoueurA <= 0 || pointsJoueurB <= 0) {
            break;
        }

        std::string choix;
        std::cout << "Entrez 'p' pour pause, 'q' pour quitter, ou appuyez sur Entrée pour continuer : ";
        std::getline(std::cin, choix);

        if (choix == "p") {
            pause();
        } else if (choix == "q") {
            quitter();
        }
    }

    if (pointsJoueurA <= 0)
    {
        std::cout << joueurA << " est KO! " << joueurB << " gagne!" << std::endl;
    }
    else if (pointsJoueurB <= 0)
    {
        std::cout << joueurB << " est KO! " << joueurA << " gagne!" << std::endl;
    }

    jeuEnCours = false;
    afficherMenu();
}

void JeuDeBoxe::redemarrer() const
{
    pointsJoueurA = 20;
    pointsJoueurB = 20;
    jeuEnCours = true;
    enPause = false;
    std::cout << "Jeu redémarré!" << std::endl;
    jouer();
}

int JeuDeBoxe::lancerDe() const
{
    return std::rand() % 6;
}

void JeuDeBoxe::tour(int& pointsAttaquant, int& pointsDefenseur, const std::string& nomAttaquant, const std::string& nomDefenseur) const
{
    int lancer = lancerDe();
    std::string descriptionCoup;
    switch (lancer)
    {
        case 5: descriptionCoup = "coup à la tête"; pointsDefenseur -= 5; break;
        case 4: descriptionCoup = "coup au ventre"; pointsDefenseur -= 4; break;
        case 3: descriptionCoup = "coup au torse"; pointsDefenseur -= 3; break;
        case 2: descriptionCoup = "coup à l'épaule"; pointsDefenseur -= 2; break;
        case 1: descriptionCoup = "coup au pied"; pointsDefenseur -= 1; break;
        case 0: descriptionCoup = "défense"; break;
    }
    std::cout << nomAttaquant << " lance : " << lancer << " (" << descriptionCoup << ")" << std::endl;
}

void JeuDeBoxe::afficherMenu() const
{
    std::string choix;
    while (true)
    {
        std::cout << "\nMenu Principal:\n";
        std::cout << "1. Choisir les joueurs et jouer\n";
        std::cout << "2. Pause\n";
        std::cout << "3. Redémarrer\n";
        std::cout << "4. Quitter\n";
        std::cout << "Choisissez une option: ";
        std::getline(std::cin, choix);

        if (choix == "1")
        {
            choisirJoueurs();
            jouer();
        }
        else if (choix == "2")
        {
            pause();
        }
        else if (choix == "3")
        {
            redemarrer();
        }
        else if (choix == "4")
        {
            quitter();
        }
        else
        {
            std::cout << "Option invalide. Veuillez réessayer." << std::endl;
        }
    }
}

void JeuDeBoxe::choisirJoueurs() const
{
    std::cout << "Entrez le nom du Joueur A: ";
    std::getline(std::cin, joueurA);
    std::cout << "Entrez le nom du Joueur B: ";
    std::getline(std::cin, joueurB);
}



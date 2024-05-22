#include "JeuDeBoxe.hpp"
#include "Foot.hpp"
#include <iostream>

int main()
{
    //jeux de Boxe
    // JeuDeBoxe jeu = JeuDeBoxe();
    // jeu.demarrer();

    //jeux de Foot
    Foot jeuDeFoot;

    jeuDeFoot.demarrer();
    bool continuer = true;

    while (continuer)
    {
        jeuDeFoot.jouer();
        char choix;
        std::cout << "Voulez-vous rejouer ? (o/n): ";
        std::cin >> choix;
        continuer = (choix == 'o' || choix == 'O');

        if (continuer)
        {
            jeuDeFoot.redemarrer();
        }
        else
        {
            jeuDeFoot.quitter();
        }
    }

    return 0;
     
}

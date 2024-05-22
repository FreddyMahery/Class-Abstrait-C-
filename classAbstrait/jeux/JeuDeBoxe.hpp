#ifndef JEUDEBOXE_H
#define JEUDEBOXE_H

#include "Jeux.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

class JeuDeBoxe : public Jeux
{
public:
    JeuDeBoxe();
    virtual void demarrer() const override;
    virtual void quitter() const override;
    virtual void pause() const override;
    virtual void jouer() const override;
    virtual void redemarrer() const override;

private:
    mutable int pointsJoueurA;
    mutable int pointsJoueurB;
    mutable bool jeuEnCours;
    mutable bool enPause;
    mutable std::string joueurA;
    mutable std::string joueurB;

    int lancerDe() const;
    void tour(int& pointsAttaquant, int& pointsDefenseur, const std::string& nomAttaquant, const std::string& nomDefenseur) const;
    void afficherMenu() const;
    void choisirJoueurs() const;
};

#endif

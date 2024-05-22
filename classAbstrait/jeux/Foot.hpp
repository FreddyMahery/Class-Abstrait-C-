#ifndef FOOT_H
#define FOOT_H

#include "Jeux.hpp"
#include <string>

class Foot : public Jeux
{
    public:
        void demarrer() const override;
        void quitter() const override;
        void pause() const override;
        void jouer() const override;
        void redemarrer() const override;

    private:
        enum Direction { GAUCHE, MILIEU, DROITE };
        Direction lireChoix(const std::string& role) const;
        Direction choixOrdinateur() const;
        bool resultat(Direction joueur, Direction ordinateur) const;
};

#endif

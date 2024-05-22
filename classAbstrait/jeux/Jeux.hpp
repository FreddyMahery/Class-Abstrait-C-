#ifndef JEUX_H
#define JEUX_H

class Jeux
{
    public:
        virtual void demarrer() const = 0;
        virtual void quitter() const = 0;
        virtual void pause() const = 0;
        virtual void jouer() const = 0;
        virtual void redemarrer() const = 0;      
};

#endif
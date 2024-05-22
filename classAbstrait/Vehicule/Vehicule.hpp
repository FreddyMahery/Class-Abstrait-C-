#ifndef VEHICULE_H
#define VEHICULE_H

#include <string>

using namespace std;

class Vehicule
{
    public:
        Vehicule();
        ~Vehicule();
        void afficheMarque();
        virtual void conduire() const = 0;
        void setMarque(string marque);
        string getMarque();

    protected:
        string marque;

};

#endif
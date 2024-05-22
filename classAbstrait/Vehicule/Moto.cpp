#include "Moto.hpp"
#include <iostream>

using namespace std;

Moto::Moto()
{
}

Moto::~Moto()
{
}

void Moto::conduire() const
{
    cout << "conduire une moto toujour avec casque"<<endl;
}

void Moto::afficheMoto()
{
    cout << "Moto definie par : " << endl;
    afficheMarque();
    cout << "Moto de mecanisme : "<< mecanisme << endl;
}

void Moto::setMecanisme(string mecanisme)
{
    this->mecanisme = mecanisme;
}

string Moto::getMecanisme()
{
    return (mecanisme);
}
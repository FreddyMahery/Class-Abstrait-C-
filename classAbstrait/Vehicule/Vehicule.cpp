#include "Vehicule.hpp"
#include <iostream>

using namespace std;

Vehicule::Vehicule()
{
}

Vehicule::~Vehicule()
{
}

void Vehicule::afficheMarque()
{
	cout << "la marque de la vehicle est :"<< marque << endl; 
}

void Vehicule::setMarque(string marque)
{
	this->marque = marque;
}

string Vehicule::getMarque()
{
	return (marque);
}


#include "Vehicule.hpp"
#include "Auto.hpp"
#include "Moto.hpp"

int main()
{
    Auto a = Auto();
    a.setMarque("mercedece");
    a.setType("lourd");
    a.afficheMarque();
    a.afficheAuto();
    a.conduire();

    Moto m = Moto();
    m.setMarque("BMW");
    m.setMecanisme("sans vitesse");
    m.afficheMarque();
    m.afficheMoto();
    m.conduire();

    return(0);
}
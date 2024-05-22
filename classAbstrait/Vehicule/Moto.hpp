#include "Vehicule.hpp"
#include <string>

using namespace std;

class Moto:public Vehicule
{
    public:
        Moto();
        ~Moto();
        void conduire() const;
        void afficheMoto();
        void setMecanisme(string mecanisme);
        string getMecanisme();

    private:
        string mecanisme;       
};
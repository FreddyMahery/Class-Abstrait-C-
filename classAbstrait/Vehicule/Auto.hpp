#include "Vehicule.hpp"
#include <string>

using namespace std;

class Auto:public Vehicule
{
    public:
        Auto();
        ~Auto();
        void afficheAuto();
        void conduire() const;
        void setType(string type);
        string getType();

    private:
        string type;        
};
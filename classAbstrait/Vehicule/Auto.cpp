#include "Auto.hpp"
#include <iostream>

using namespace std;

Auto::Auto()
{
}
    
Auto::~Auto()
{
}

void Auto::afficheAuto()
{
    cout << "Automobile definie par" << endl;
    afficheMarque();
    cout<< "automobile de type :"<< type << endl;   
}

void Auto::conduire() const
{
    cout << "conduire une automobile"<< endl;
}
        
void Auto::setType(string type)
{
    this->type = type;
}

string Auto::getType()
{
    return(type);
}
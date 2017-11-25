#include "Baraja.h"

Baraja::Baraja()
{

}

Baraja::~Baraja()
{
    //dtor
}

string Baraja::getCarta(){
    stringstream carticas;
    vector<pair<string, string>>::iterator it;
    carticas<<"Mazo:\n";
    for(it=mazoBarajado.begin();it!=mazoBarajado.end();++it){
        carticas<<"1er valor asociado: "<<(*it).first<<"   2ndo valor asociado: "<<(*it).second<<endl;
    }
    return carticas.str();
}


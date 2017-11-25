#include "Numerica.h"

Numerica::Numerica()
{
    //ctor
}

Numerica::~Numerica()
{
    //dtor
}

void Numerica::instancie(int cantMazos){
    cartas.push_back(make_pair("1","Treboles"));
    cartas.push_back(make_pair("2","Treboles"));
    cartas.push_back(make_pair("3","Treboles"));
    cartas.push_back(make_pair("4","Treboles"));
    cartas.push_back(make_pair("5","Treboles"));
    cartas.push_back(make_pair("6","Treboles"));
    cartas.push_back(make_pair("7","Treboles"));
    cartas.push_back(make_pair("8","Treboles"));
    cartas.push_back(make_pair("9","Treboles"));
    cartas.push_back(make_pair("10","Treboles"));
    cartas.push_back(make_pair("J","Treboles"));
    cartas.push_back(make_pair("Q","Treboles"));
    cartas.push_back(make_pair("K","Treboles"));
    cartas.push_back(make_pair("A","Treboles"));

    cartas.push_back(make_pair("1","Diamantes"));
    cartas.push_back(make_pair("2","Diamantes"));
    cartas.push_back(make_pair("3","Diamantes"));
    cartas.push_back(make_pair("4","Diamantes"));
    cartas.push_back(make_pair("5","Diamantes"));
    cartas.push_back(make_pair("6","Diamantes"));
    cartas.push_back(make_pair("7","Diamantes"));
    cartas.push_back(make_pair("8","Diamantes"));
    cartas.push_back(make_pair("9","Diamantes"));
    cartas.push_back(make_pair("10","Diamantes"));
    cartas.push_back(make_pair("J","Diamantes"));
    cartas.push_back(make_pair("Q","Diamantes"));
    cartas.push_back(make_pair("K","Diamantes"));
    cartas.push_back(make_pair("A","Diamantes"));

    cartas.push_back(make_pair("1","Corazones"));
    cartas.push_back(make_pair("2","Corazones"));
    cartas.push_back(make_pair("3","Corazones"));
    cartas.push_back(make_pair("4","Corazones"));
    cartas.push_back(make_pair("5","Corazones"));
    cartas.push_back(make_pair("6","Corazones"));
    cartas.push_back(make_pair("7","Corazones"));
    cartas.push_back(make_pair("8","Corazones"));
    cartas.push_back(make_pair("9","Corazones"));
    cartas.push_back(make_pair("10","Corazones"));
    cartas.push_back(make_pair("J","Corazones"));
    cartas.push_back(make_pair("Q","Corazones"));
    cartas.push_back(make_pair("K","Corazones"));
    cartas.push_back(make_pair("A","Corazones"));

    cartas.push_back(make_pair("1","Espadas"));
    cartas.push_back(make_pair("2","Espadas"));
    cartas.push_back(make_pair("3","Espadas"));
    cartas.push_back(make_pair("4","Espadas"));
    cartas.push_back(make_pair("5","Espadas"));
    cartas.push_back(make_pair("6","Espadas"));
    cartas.push_back(make_pair("7","Espadas"));
    cartas.push_back(make_pair("8","Espadas"));
    cartas.push_back(make_pair("9","Espadas"));
    cartas.push_back(make_pair("10","Espadas"));
    cartas.push_back(make_pair("J","Espadas"));
    cartas.push_back(make_pair("Q","Espadas"));
    cartas.push_back(make_pair("K","Espadas"));
    cartas.push_back(make_pair("A","Espadas"));

    for(int x=0;x<cantMazos;x++){
        mazos.push_back(cartas);
    }
    cantidadDeCartas=cantMazos*cartas.size();
}

vector<pair<string, string>> Numerica::baraje(){
    vector<pair<string, string>> aSeleccionar;
    vector<vector<pair<string, string>>>::iterator it;
    vector<pair<string, string>>::iterator iter;
    int randNumb=0;
    for(it=mazos.begin();it!=mazos.end();++it){
        aSeleccionar=(*it);
        for(iter=aSeleccionar.begin();iter!=aSeleccionar.end();++iter){
            srand(time(NULL));
            randNumb=rand()%aSeleccionar.size()+0;
            mazoBarajado.push_back(aSeleccionar[randNumb]);
            aSeleccionar.erase(aSeleccionar.begin()+randNumb);
        }
        mazos.erase(it);
    }
    return mazoBarajado;
}

string Numerica::getCarta(){
    stringstream carticas;
    vector<pair<string, string>>::iterator it;
    carticas<<"Mazo:\n";
    for(it=mazoBarajado.begin();it!=mazoBarajado.end();++it){
        carticas<<(*it).first<<" de "<<(*it).second<<endl;
    }
    return carticas.str();
}

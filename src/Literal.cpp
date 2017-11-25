#include "Literal.h"

Literal::Literal()
{
    //ctor
}

Literal::~Literal()
{
    //dtor
}

vector<pair<string, string>> Literal::baraje(){
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


void Literal::instancie(int cantMazos){
    cartas.push_back(make_pair("1","Hereda 1 millon"));
    cartas.push_back(make_pair("2","Cada jugador le paga 100"));
    cartas.push_back(make_pair("3","Sale libre de la carcel"));
    cartas.push_back(make_pair("4","Salta 4 campos"));
    cartas.push_back(make_pair("5","Se le devuelven 2000 del cobro de impuestos"));
    cartas.push_back(make_pair("6","Se gano 50000 en la loteria"));
    cartas.push_back(make_pair("7","Sus acciones subieron 50% de valor"));
    cartas.push_back(make_pair("8","El mercado se expande en 3000 personas"));
    cartas.push_back(make_pair("9","Tiene libre el sábado"));
    cartas.push_back(make_pair("10","Por ser este su primer año, no paga impuestos"));

    for(int x=0;x<cantMazos;x++){
        mazos.push_back(cartas);
    }
    cantidadDeCartas=cantMazos*cartas.size();
}

string Literal::getCarta(){
    stringstream carticas;
    vector<pair<string, string>>::iterator it;
    carticas<<"Mazo:\n";
    for(it=mazoBarajado.begin();it!=mazoBarajado.end();++it){
        carticas<<(*it).first<<": "<<(*it).second<<endl;
    }
    return carticas.str();
}

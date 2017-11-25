#include <iostream>
#include <vector>
#include <ostream>
#include <fstream>
#include <sstream>
#include "Baraja.h"
#include "Numerica.h"
#include "Literal.h"

using namespace std;

template<class A>
void leaValor(string tipoVal, A men, A may){
    A val;
    bool listo=false;
    while(!listo){
        cout<<"De un valor de "<<tipoVal<<" entre "<<men<<" y "<<may<<"->";
        cin>>val;
        if(val>men && val<may){
            cout<<"Valor "<<val<<" correctamente leido"<<endl;
            listo=true;
        }else{
            cout<<"El valor debe estar dentro de los limites"<<endl;
        }
    }
}

struct Codones{
    vector<string> base;
    static ofstream escritor;
    stringstream datos;

    void guardeLetras(){
        base.push_back("U");
        base.push_back("C");
        base.push_back("A");
        base.push_back("G");
    }

    string genereCodones(){
        datos<<"Codones:\n";
        for(int x=0;x<4;x++){
            for(int y=0;y<4;y++){
                for(int z=0;z<4;z++){
                    datos<<base[x]<<base[y]<<base[z]<<"\n";
                }
            }
        }
        return datos.str();
    }

    void escriba(string d){
        if(escritor){
            escritor<<d;
        }else{
            cout<<"No esta abierto el archivo de escritura."<<endl;
        }
    }

    static void abraParaEscibir(){
        escritor.open("Codones.txt");
    }

    static void cierreEscrito(){
        escritor.close();
    }
};

bool operator==(const string& a, const string& b){
        bool iguales=false;
        for(unsigned x=0;x<a.length();x++){
            if(a.at(x)==b.at(x) || (a.at(x)=='G' && b.at(x)=='C') || (b.at(x)=='G' && a.at(x)=='C')){
                iguales=true;
            }else if((a.at(x)!='G' || b.at(x)!='G') && a.at(x)!=b.at(x)){
                iguales=false;
            }
        }
        return iguales;
}

ofstream Codones::escritor;

int main()
{
//    string a="UCC";
//    string b="UGG";
//    leaValor<float>("peso en kilos", 50.5, 70.9);
//    Codones c;
//    c.guardeLetras();
//    string data=c.genereCodones();
//    c.abraParaEscibir();
//    c.escriba(data);
//    c.cierreEscrito();
//    if(a==b){
//        cout<<"Son iguales"<<endl;
//    }else{
//        cout<<"Try again :c"<<endl;
//    }
Baraja b;
Numerica n;
Literal l;
n.instancie(2);
l.instancie(2);

n.baraje();
l.baraje();

cout<<n.getCarta()<<endl;
cout<<l.getCarta()<<endl;
    return 0;
}

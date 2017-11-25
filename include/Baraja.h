#ifndef BARAJA_H
#define BARAJA_H
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Baraja
{
    public:
        Baraja();
        virtual ~Baraja();
        string getCarta();

        int cantidadDeCartas;
        vector<pair<string, string>> cartas;
        vector<vector<pair<string, string>>> mazos;
        vector<pair<string, string>> mazoBarajado;
    protected:

    private:
};

#endif // BARAJA_H

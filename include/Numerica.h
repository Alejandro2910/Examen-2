#ifndef NUMERICA_H
#define NUMERICA_H
#include <string>
#include "Baraja.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <sstream>

using namespace std;

class Numerica: public Baraja{
    public:
        Numerica();
        virtual ~Numerica();

        void instancie(int);
        vector<pair<string, string>> baraje();
        string getCarta();

    protected:

    private:
};

#endif // NUMERICA_H

#ifndef LITERAL_H
#define LITERAL_H
#include "Baraja.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <sstream>

using namespace std;

class Literal: public Baraja{
    public:
        Literal();
        virtual ~Literal();


        void instancie(int);
        vector<pair<string, string>> baraje();
        string getCarta();

    protected:

    private:
};

#endif // LITERAL_H

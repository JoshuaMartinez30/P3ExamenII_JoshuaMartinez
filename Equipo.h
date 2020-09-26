#pragma once
#include <iostream>
#include <string>
using namespace std;
class Equipo{
    private:
            string nombre;
            int PJ, G, E, P, GA, GC, DG, PTS;
    public:
        Equipo();
        Equipo(string, int, int, int, int, int, int, int, int);            
        void tostring();
        int get_PTS();
};
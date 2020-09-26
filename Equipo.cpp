#include "Equipo.h"
#include <iostream>
#include <string>
#include <iomanip>
Equipo::Equipo(){
nombre="";
PJ=0;
G=0;
E=0;
P=0;
GA=0;
GC=0;
DG=0;
PTS=0;
}

Equipo::Equipo(string nombre, int PJ, int G, int E, int P, int GA, int GC, int DG, int PTS){
this->nombre=nombre;
this->PJ=PJ;
this->G=G;
this->E=E;
this->P=P;
this->GA=GA;
this->GC=GC;
this->DG=DG;
this->PTS=PTS;
}

int Equipo::get_PTS(){
    return PTS;
}

void Equipo::tostring(){
    cout<<nombre<<setw(3)<<PJ<<setw(3)<<G<<setw(3)<<E<<setw(3)<<P<<setw(4)<<GA<<setw(3)<<GC<<setw(5)<<DG<<setw(5)<<PTS<<endl;
}
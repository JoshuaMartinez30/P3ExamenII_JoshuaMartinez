#pragma once
#include <iostream>
#include "Equipo.h"
#include <conio.h>
using namespace std;
class Nodo{
      private:
            Equipo equipo;
            Nodo *siguiente;
      public:
            Nodo();
            Nodo(Nodo *&, Equipo);
            void insertarLista(Nodo *&, Equipo);
            void mostrarLista(Nodo *lista);
            void set_Equipo(Equipo);
            Equipo get_Equipo();
            void set_siguiente(Nodo *&);
            Nodo* get_siguiente();
};


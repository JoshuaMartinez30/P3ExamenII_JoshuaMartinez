#include "Nodo.h"
#include "Equipo.h"
#include <conio.h>
#include <iostream>
using namespace std;

Nodo::Nodo(){
}

Nodo::Nodo(Nodo *&siguiente, Equipo equipo){
this->siguiente=siguiente;
this->equipo=equipo;
}

void Nodo::insertarLista(Nodo *&lista, Equipo equipo_n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->equipo=equipo_n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while((aux1!= NULL)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if (lista==aux1){
        lista= nuevo_nodo;
    }else{
        aux2->siguiente = nuevo_nodo;
    }   

    nuevo_nodo->siguiente = aux1;
}



void Nodo::mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;
    int contador=1;
    while (actual != NULL){
        cout<<contador<<" ";
        actual->equipo.tostring();
        actual = actual->siguiente;
        contador++;
    }
    
}

void Nodo::set_Equipo(Equipo equipo){
equipo= equipo;
}

Equipo Nodo::get_Equipo(){
return equipo;
}

void Nodo::set_siguiente(Nodo *&siguiente){
siguiente= siguiente;
}

Nodo* Nodo::get_siguiente(){
return siguiente;
}
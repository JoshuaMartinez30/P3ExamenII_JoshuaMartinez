#include <iostream>
#include <fstream>
#include <conio.h>
#include "Nodo.cpp"
#include "Equipo.cpp"
#include <vector>
#include  <iomanip>
using namespace std;

int main(){
    vector<Equipo> lista2;
    Nodo *lista=NULL;
    Nodo *metodo;
    ifstream leer;
    string texto;

    leer.open("Equipos.txt",ios::in);
    if (leer.fail()){
        cout<<"no se pudo abrir el archivo";
        exit(1);
    }
    
    while(!leer.eof()){        
        getline(leer,texto);
        int auxiliar=0, auxiliar2=0;
        string nombre="", numero="";
        int PJ, G, E, P, GA, GC, DG, PTS;
        for (int i = 0; i < texto.size(); i++){
            if (texto.at(i)==','){
                auxiliar=1;
                auxiliar2++;
                if (auxiliar2==2){
                    G = atoi(numero.c_str());
                    numero="";
                }else if (auxiliar2==3){
                    E = atoi(numero.c_str());
                    numero="";
                }else if (auxiliar2==4){
                    P = atoi(numero.c_str());
                    numero="";
                }else if (auxiliar2==5){
                    GA = atoi(numero.c_str());
                    numero="";
                }
            }else if (auxiliar==0){
                nombre+=texto.at(i);
            }else if (auxiliar==1){
                numero+=texto.at(i);
            }
            
            if (i == texto.size()-1){
                    GC = atoi(numero.c_str());
            }
        }
        PJ = G+E+P;
        DG = GA-GC;
        PTS = (G*3)+E;
        Equipo equipo = Equipo(nombre,PJ,G,E,P,GA,GC,DG,PTS);
        lista2.push_back(equipo);
    }
    leer.close();
    Equipo temporal;
    for (int i = 0; i < lista2.size(); i++){
        for (int j = 0; j < lista2.size()-1; j++){
            if (lista2[j].get_PTS() < lista2[j+1].get_PTS()){
                temporal = lista2[j];
                lista2[j]=lista2[j+1];
                lista2[j+1]=temporal;
            }   
        }
    }
    for (int i = 0; i < lista2.size(); i++){
        metodo->insertarLista(lista,lista2[i]);
    }
    cout << setw(15) << " PJ " << setw(3)<<" G "<<setw(3)<<" E "<<setw(3)<<" P "<<setw(3)<<" GA "<<setw(3)<<" GC "<<setw(3)<<" DG "<<setw(3)<<setw(3)<<" PTS"<<endl;
    metodo->mostrarLista(lista);  
}


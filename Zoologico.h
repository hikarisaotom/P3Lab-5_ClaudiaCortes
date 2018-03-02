//Bienvenido
#include <string>
#include <iostream>
#include <vector>
#include "Animales.h"
#include <string>
using namespace std;

#ifndef ZOOLOGICO_H
#define ZOOLOGICO_H

//Inicio clase
class Zoologico
{

    //Atributos
  private:
    vector<Animales *> zonaArtica;
    vector<Animales *> zonaDesertica;
    vector<Animales *> junglaTropical;
    vector<Animales *> sabana;
    int tamano;
    int personas;
    string Nombre;
    //metodos publicos
  public:
    //prototipos de metodos
    //constructor
    Zoologico();
    //Zoologico(vector<Animales *>,vector<Animales *>,vector<Animales *>,vector<Animales *>);

    //metodos accersores / mutadores
    vector<Animales *> getZonaArtica();
    void setZonaArtica(Animales *);
    vector<Animales *> getZonaDesertica();
    void setZonaDesertica(Animales *);
    vector<Animales *> getJunglaTropical();
    void setJunglaTropical(Animales *);
    vector<Animales *> getSabana();
    void setSabana(Animales *);
    void listar();
    void setnombre(string);
    void settamano(int);
    void setpersonas(int);
    //Destructor
    ~Zoologico();

}; //Fin de la clase

#endif

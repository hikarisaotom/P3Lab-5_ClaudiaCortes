//Metodo sets ade gets

#include "Zoologico.h"
#include <iostream>
#include <string>
#include "Animales.h"
using namespace std;

//Cosntructor 1
/*Zoologico::Zoologico(vector<Animales *> zonaArtica,vector<Animales *> zonaDesertica,vector<Animales *> junglaTropical,vector<Animales *> sabana){
    this->zonaArtica=zonaArtica;
    this->zonaDesertica=zonaDesertica;
    this->junglaTropical=junglaTropical;
    this->sabana=sabana;
}//Fin constructor*/

//Constructor2
Zoologico::Zoologico()
{
    vector<Animales *> zonaArtica;
    vector<Animales *> zonaDesertica;
    vector<Animales *> junglaTropical;
    vector<Animales *> sabana;

} //Fin constructor sencillo

vector<Animales *> Zoologico::getZonaArtica()
{
    return zonaArtica;
}

void Zoologico::setZonaArtica(Animales *Animal)
{
    zonaArtica.push_back(Animal);
}

vector<Animales *> Zoologico::getZonaDesertica()
{
    return zonaDesertica;
}

void Zoologico::setZonaDesertica(Animales *Animal)
{
    zonaDesertica.push_back(Animal);
    ;
}

vector<Animales *> Zoologico::getJunglaTropical()
{
    return junglaTropical;
}

void Zoologico::setJunglaTropical(Animales *Animal)
{
    junglaTropical.push_back(Animal);
    ;
}

vector<Animales *> Zoologico::getSabana()
{
    return sabana;
}

void Zoologico::setSabana(Animales *Animal)
{

    sabana.push_back(Animal);
    ;
}

Zoologico::~Zoologico()
{

    cout << "La instancia de Zoologico fue eliminada" << endl;
}

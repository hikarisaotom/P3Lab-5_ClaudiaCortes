

#include "Zoologico.h"
#include <iostream>
#include <string>
#include "Animales.h"
using namespace std;
#include <string>

Zoologico::Zoologico()
{
    tamano = 1;
    personas = 2;
    Nombre = "ZOO 1";
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
void Zoologico::listar()
{
    cout << "LISTANDO" << endl;
    cout << "Sabana" << endl;
    for (int i = 0; i < sabana.size(); i++)
    {
        cout << sabana[i]->toString() << endl;
    }
    cout << "Jungla Tropical" << endl;
    for (int i = 0; i < junglaTropical.size(); i++)
    {
        cout << junglaTropical[i]->toString() << endl;
    }
    cout << "Desierto" << endl;
    for (int i = 0; i < zonaDesertica.size(); i++)
    {
        cout << zonaDesertica[i]->toString() << endl;
    }

    cout << "Artico" << endl;
    for (int i = 0; i < zonaArtica.size(); i++)
    {
        cout << zonaArtica[i]->toString() << endl;
    }
}

void Zoologico::setnombre(string name)
{
    Nombre = name;
}

void Zoologico::settamano(int tam)
{
    tamano = tam;
}

void Zoologico::setpersonas(int per)
{
    personas = per;
}

Zoologico::~Zoologico()
{

    cout << "La instancia de Zoologico fue eliminada" << endl;
}

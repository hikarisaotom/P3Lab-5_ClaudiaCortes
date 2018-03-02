#include <iostream>
using namespace std;
#include <sstream>
#include <typeinfo>
#include <vector>
#include "Zoologico.h"
#include "Animales.h"
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"

//Menu principal del programa.
int menu();
//Prototipos de metodods
Animales *CrearAnimal();
void EliminarAnimal(vector<Animales *>);
void ListarAnimales(Zoologico *Zoo);
void TrasladarAnimales(vector<Animales *>, Zoologico *);
int Tvision();
int Tipo();
int Pelos();

int main()
{
    string Nombre;
    int personas;
    int tamano;
    cout << "NOMBRE DEL ZOO" << endl;
    cin >> Nombre;
    cout << "Capacidad de personas" << endl;
    cin >> personas;
    cout << "Tamano del zoo" << endl;
    cin >> tamano;

    //Zoologico Global que tendra todos los a imale.s
    //Zoologico Zoo;
    //Lista de espera de los animales al zoologico.
    vector<Animales *> Espera;
    Zoologico *Zoo = new Zoologico();
    Zoo->setnombre(Nombre);
    Zoo->settamano(personas);
    Zoo->setpersonas(tamano);
    bool Continuar = 1;
    while (Continuar)
    {
        //Llamado del menu del programa.
        switch (menu())
        {
        case 1:
        { // Agregar
            Espera.push_back(CrearAnimal());
            cout << endl
                 << "ANIMAL CREADO EXITOSAMENTE" << endl;
            /* for (int i = 0; i < Espera.size(); i++)
            {
                cout << Espera[i]->getNombre() << endl
                     << Espera[i]->toString();
            }*/
            break;
        } //Fin del case 1.
        case 2:
        { // Eliminar.
            // EliminarAnimal(Espera);
            if (Espera.size() > 0)
            {
                int Pos = -150;
                while (Pos < 0 && Pos > Espera.size())
                {

                    for (int i = 0; i < Espera.size(); i++)
                    {
                        if (Espera[i] == NULL)
                        {
                            //cout << "--" << endl;
                        }
                        else
                        {
                            cout << i << Espera[i]->toString() << endl;
                        }
                    }
                    cout << "Ingrese la posicion que desea eliminar: " << endl;
                    cin >> Pos;
                }

                delete Espera[Pos];
                Espera[Pos] = NULL;
                cout << endl
                     << "ANIMAL ELIMINADO EXITOSAMENTE :D " << endl;
            }
            else
            {
                cout << "NO  HAY NADA QUE ELIMINAR :C" << endl;
            }
            break;
        } //Fin del case 2

        case 3:
        { //Transferir
            TrasladarAnimales(Espera, Zoo);
            for (int i = 0; i < Espera.size(); i++)
            {
                // delete Lista[i];
                Espera.erase(Espera.begin() + i);
            }
            Espera.clear();
            break;
        } //Fin del case 3

        case 4:
        { //Listar
            //ListarAnimales(Zoo);
            Zoo->listar();
            break;
        } //Fin del case 4.
        case 5:
        { //Listar
            Continuar = false;
            // ListarAnimales(Zoo);
            cout << "SALIENDO...." << endl;
            delete Zoo;
            break;
        } //Fin del case 4.
        default:
        { //SALIR
            Continuar = 0;

            //  delete [] Espera;
            break;
        } //FIn del default

        } //Fin del switch.
    }     //FIn del while.

    return 0;
}

//Menu principal del programa
int menu()
{
    int Respuesta = -100;
    while (Respuesta <= 0 || Respuesta > 5)
    {
        cout << endl
             << endl
             << "Bienvenido al Zoologico 'ZIIE'!!!" << endl
             << "Seleccione la opcion que desea : " << endl;
        cout << "1- Agregar Animal." << endl
             << "2- Eliminar Animal." << endl
             << "3-Transferir al zoologico." << endl
             << "4-Listar Animales" << endl
             << "5-Salir" << endl;
        cin >> Respuesta;
    }
    return Respuesta;
} //Fin del metodo del Menu.

//METODOS DEL PROGRAMA
Animales *CrearAnimal()
{
    Animales Animal;
    string Especie, Nombre, Tipopata, ColorPelaje, ColorOjos;
    int Tamano, tipo, CantidadPatas, LargoPata, Grosor, LargoPelo, TamanoOreja, Audicion, LargoCola, Peluda;
    int tVision, tPelo;
    tipo = Tipo();
    /*cout<<""<<endl;*/
    cout << "Ingrese el nombre de la especie del animal: " << endl;
    cin >> Especie;
    cout << "Ingrese el nombre del animal: " << endl;
    cin >> Nombre;
    cout << "Ingrese el tamano del animal: " << endl;
    cin >> Tamano;
    cout << "Identidificacion de caracteristicas del Animal: " << endl;
    cout << "-> PATAS" << endl
         << "Cantidad de Patas del animal: " << endl;
    cin >> CantidadPatas;
    cout << "Largo de las patas del animal" << endl;
    cin >> LargoPata;
    cout << "Tipo de Patas del Animal" << endl;
    cin >> Tipopata;
    cout << "->PELAJE:" << endl
         << "Color del pelaje" << endl;
    cin >> ColorPelaje;
    cout << "Grosor del pelaje:" << endl;
    cin >> Grosor;
    cout << "Largo del pejale" << endl;
    cin >> LargoPelo;
    cout << "->OJOS: " << endl
         << "Color de ojos" << endl;
    cin >> ColorOjos;
    tVision = Tvision();
    cout << "->OREJAS: " << endl
         << "Tamano de las orejas" << endl;
    cin >> TamanoOreja;
    cout << "Capacidad de audicion" << endl;
    cin >> Audicion;
    cout << "->COLA: " << endl
         << "Largo de la cola: " << endl;
    cin >> LargoCola;
    tPelo = Pelos();
    Patas *pies = new Patas(CantidadPatas, LargoPata, Tipopata);
    Pelaje *pelaje = new Pelaje(ColorPelaje, Grosor, LargoPelo);
    Ojos *ojos = new Ojos(ColorOjos, tVision);
    Orejas *oreja = new Orejas(TamanoOreja, Audicion);
    Cola *cola = new Cola(LargoCola, tPelo);
    return new Animales(Especie, Nombre, Tamano, tipo, pies, pelaje, ojos, oreja, cola);
    // return Animal;
}

void EliminarAnimal(vector<Animales *> Lista)
{
    int Pos = -150;
    while (Pos < 0 && Pos > Lista.size())
    {

        for (int i = 0; i < Lista.size(); i++)
        {
            if (Lista[i] == NULL)
            {
                cout << "--" << endl;
            }
            else
            {
                cout << i << Lista[i]->toString() << endl;
            }
        }
        cout << "Ingrese la posicion que desea eliminar: " << endl;
        cin >> Pos;
    }

    delete Lista[Pos];
    Lista.erase(Lista.begin() + Pos);
    cout << endl
         << "ANIMAL ELIMINADO EXITOSAMENTE :D " << endl;
}

void ListarAnimales(Zoologico *Zoo)
{
    /*cout<<"JUNGLA TROPICAL."<<endl;
    for(int i=0;i<((Zoo->getJunglaTropical).size;i++){
        cout << (Zoo->getJunglaTropical)[i];
    }*/
}
void TrasladarAnimales(vector<Animales *> Lista, Zoologico *Zoo)
{
    /*< "1-Artico." << endl
                 << "2-Desertico." << endl
                 << "3-Tropical." << endl
                 << "4-Sabana." << endl;*/
    for (int i = 0; i < Lista.size(); i++)
    {
        if (Lista[i]->getTipo() == 1)
        { //Artico
            Zoo->setZonaArtica(Lista[i]);
        }
        else if (Lista[i]->getTipo() == 2) //Desertico
        {
            Zoo->setZonaDesertica(Lista[i]);
        }
        else if (Lista[i]->getTipo() == 3)
        { //Tropical
            Zoo->setJunglaTropical(Lista[i]);
        }
        else
        { //Es el Sabana
            Zoo->setSabana(Lista[i]);
        }
    }

    for (int i = 0; i < Lista.size(); i++)
    {
        // delete Lista[i];
        Lista.erase(Lista.begin() + i);
    }
    Lista.clear();

    cout << "SE HA TRASLADADO TODO CORRECTAMENTE" << endl;
}
int Tipo()
{
    int opcion = -1;
    while (opcion < 1 || opcion > 4)
    {
        cout << "Ingrese que tipo de animal es: " << endl;
        cout << "1-Artico." << endl
             << "2-Desertico." << endl
             << "3-Tropical." << endl
             << "4-Sabana." << endl;
        cin >> opcion;
    }
    return opcion;
}

int Tvision()
{
    int Tipo = -1;
    while (Tipo < 1 || Tipo > 2)
    {
        cout << "Vision Nocturna " << endl;
        cout << "1-si." << endl
             << " 2-No." << endl;
        cin >> Tipo;
    }
    return Tipo;
}

int Pelos()
{
    int Tipo = -1;
    while (Tipo < 1 || Tipo > 2)
    {
        cout << "Pelos: " << endl;
        cout << "1-Si." << endl
             << " 2-No." << endl;
        cin >> Tipo;
    }
    return Tipo;
}

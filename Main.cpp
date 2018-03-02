#include <iostream>
using namespace std;
#include <sstream>
#include <typeinfo>
#include <vector>
//#include "Zoologico.h"
#include "Animales.h"
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"

//Menu principal del programa.
int menu();
//Prototipos de metodods
Animales* CrearAnimal();
void EliminarAnimal();
void ListarAnimales(vector *<Animales>);
void TrasladarAnimales(vector *<Animales>);
int Tvision();
int Tipo();
int Pelos();

int main()
{
    //Zoologico Global que tendra todos los a imale.s
    Zoologico Zoo;
    //Lista de espera de los animales al zoologico.
    vector<Animales *> Espera;

    bool Continuar = 1;
    while (Continuar)
    {
        //Llamado del menu del programa.
        switch (menu())
        {
        case 1:
        { // Agregar
            Espera.push_back(CrearAnimal());
            break;
        } //Fin del case 1.
        case 2:
        { // Eliminar.

            break;
        } //Fin del case 2

        case 3:
        { //Transferir

            break;
        } //Fin del case 3

        case 4:
        { //Listar
            break;
        } //Fin del case 4.
        default:
        { //SALIR
            Continuar = 0;
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
    while (Respuesta <= 0 || Respuesta > 4)
    {
        cout << endl
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
Animales * CrearAnimal()
{
    string Especie, Nombre, Tipopata, ColorPelaje, ColorOjos;
    int Tipo,Patas,LargoPata,Grosor,LargoPelo,TamanoOreja,Audicion,LargoCola,Peluda;
    int TVision,TPelo;
    Tipo = Tipo();
    /*cout<<""<<endl;*/
    cout<< "Ingrese el nombre de la especie del animal: " << endl;
    cin >> Especie;
    cout << "Ingrese el nombre del animal: " << endl;
    cin >> Nombre;
    cout<<"Identidificacion de caracteristicas del Animal: "<<endl;
    cout<<"-> PATAS"<<endl<<"Cantidad de Patas del animal: "<<endl;
    cin>>Patas;
    cout<<"Largo de las patas del animal"<<endl;
    cin>>LargoPata;
    cout << "Tipo de Patas del Animal" << endl;
    cin>>Tipopata;
    cout << "->PELAJE:" << endl<<"Color del pelaje"<<endl;
    cin >> ColorPelaje;
    cout << "Grosor del pelaje:" << endl;
    cin>>Grosor;
    cout << "Largo del pejale" << endl;
    cin>>LargoPelo;
    cout << "->OJOS: " << endl<<"Color de ojos"<<endl;
    cin >> ColorOjos;
    Tvision = Tvision();
    cout << "->OREJAS: " << endl<<"Tamano de las orejas"<<endl;
    cin>>TamanoOreja;
    cout << "Capacidad de audicion" << endl;
    cin>>Audicion;
    cout << "->COLA: " << endl<<"Largo de la cola: "<<endl;
    cin>>LargoCola;
    TPelo = Pelos();
}

void EliminarAnimal(){
}

void ListarAnimales(vector *<Animales>){

}
void TrasladarAnimales(vector *<Animales>){

}

int Tipo(){
    int opcion = -1;
    while (opcion < 1 || opcion > 5) {
        cout << "Ingrese que tipo de animal es: " << endl;
        cout << "1-Árticos." << endl
             << "2-Desérticos." << endl
             << "3-Tr.opicales." << endl
             << "4-Sabana" << endl;
        cin >> opcion;
    }
    return opcion;
}

int Tvision(){
    int Tipo = -1;
    while (Tipo< 1 || Tipo > 2){
        cout << "Vision Nocturna " << endl;
        cout << "1-si."<<endl<<" 2-No."<<endl;
        cin >> Tipo;
    }
    return Tipo;
}

int Pelos(){
    int Tipo = -1;
    while (Tipo < 1 || Tipo > 2) {
        cout << "Pelos: " << endl;
        cout<<"1-Si."<<endl<<" 2-No."<<endl;
        cin >> Tipo;
    }
    return Tipo;
}

/*
    vector<Persona*> personas;

    personas.push_back(new FireBender("pp","rasdsa", 9, "t", 8,6));
    personas.push_back(new FireBender("pp","asda", 9, "t", 8,6));
    personas.push_back(new Persona("c","rooko", 9, "t"));

    for(int i = 0; i<personas.size(); i++){
        cout<< personas[i]->getNombre() << endl;

    }


    for(int i = 0; i<personas.size(); i++){
        if(typeid(*personas[i]) == typeid(FireBender)){
            cout<< "sii "<< endl;
        }
        
       // cout<< typeid(FireBender).name()<< endl;
        //cout<< typeid(*personas[i]).name()<< endl;
    }

    delete personas[2];
    personas[2] = NULL;

    for(int i =0; i< personas.size(); i++){
        if(personas[i] == NULL){
            cout<< "vacio" << endl;
        }else{
            personas[i]->setNombre("ahora");
            cout<< personas[i]->getNombre() << i<< endl;
        }
    }

    */
//============================================================================
// Name        : puntero_a_estructura.cpp
// Author      : Jose Marroquin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Equipo{
	char* nombre;
	int integrantes;
	int posicion;
};

int main() {
Equipo ef;

ef.nombre = "Jalapa";
ef.integrantes = 17;
ef.posicion = 1;

Equipo *puntero;
puntero = &ef;

cout<<"la posicion de la estructura ef es                      : "<<puntero<<endl;
cout<<"la posicion del nombre del equipo es                    : "<<&puntero->nombre<<endl;
cout<<"la posicion del numero de integrantes del del equipo es : "<<&puntero->integrantes<<endl;
cout<<"la posicion de la posicion del equipo es                : "<<&puntero->posicion<<endl;

}

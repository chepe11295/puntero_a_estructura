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

Equipo *punstruct;
punstruct = &ef;

cout<<"la posicion de la estructura ef es                      : "<<&punstruct<<endl;
cout<<"la posicion del nombre del equipo es                    : "<<&ef.nombre<<endl;
cout<<"la posicion del numero de integrantes del del equipo es : "<<&ef.integrantes<<endl;
cout<<"la posicion de la posicion del equipo es                : "<<&ef.posicion<<endl;

}

#pragma once
#include "Persona.h"

template <class T>
class Nodo
{
public:

	Nodo();

	Persona Datos;
	Nodo <T> *Nodizq = nullptr;
	Nodo <T> *NodDer = nullptr;

	unsigned int NIVIZQ = 0;
	unsigned int NIVDER = 0;
	
	//solo para el caso de AVL
	Nodo <T> *NodAnt = nullptr;

	void CrearNodos(Nodo<T> * & );

	void RevisarDesbalance();
	 
	int RevisarNivelIzq();

	int RevisarNivelDer();

	void rotacionderecha();

	void rotacionizquierda();

	void imprimirinorder();
	void imprimirpostorden();
	void imprimirpreorder();

	~Nodo();
};
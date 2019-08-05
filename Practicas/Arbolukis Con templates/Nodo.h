#pragma once
#include "Persona.h"

template <class T>
class Nodo
{
public:

	Nodo();

	T Arsene;
	Nodo <T> *Nodizq = nullptr;
	Nodo <T> *NodDer = nullptr;

	


	void imprimirPreorder(Nodo<T> *);

	void imprimirInorder(Nodo<T> *);

	void imprimirPostorden(Nodo<T> *);

	//void InsertarNodo

	~Nodo();
	//void crea_arbolukis2000(Nodo<T>* Raiz, Nodo<T> A);
};
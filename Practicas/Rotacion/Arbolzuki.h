#pragma once
#include "Nodo.h"

template <class T>
class Arbolzuki
{
public:
	Arbolzuki();

	Arbolzuki(T);

	Nodo<T> * Raiz;

	void crea_arbolukis2000(Arbolzuki<T> *, Nodo<T>);

	void Hakai(Nodo<T> *, int);

	void RotaccionDer(Nodo<T> *&, Nodo<T> *&);

	void RotaccionIzq(Nodo<T> *&, Nodo<T> *&);

	~Arbolzuki();
};
 

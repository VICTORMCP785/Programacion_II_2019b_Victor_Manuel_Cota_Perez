#include "Nodo.h"
#include <string>

template <class T>
Nodo<T>::Nodo()
{

}

template <class T>
void Nodo<T>::imprimirPreorder(Nodo *N)
{
	cout << N->Arsene.Ape << " " << N->Arsene.Nom << " " << N->Arsene.edad << endl;
	if (N->Nodizq != nullptr)
	{
		imprimirPreorder(N);
	}
	if (N->NodDer != nullptr)
	{
		imprimirPreorder(N);
	}
}

template <class T>
void Nodo<T>::imprimirInorder(Nodo *N)
{
	
	if (N->Nodizq != nullptr)
	{
		imprimirPreorder(N);
	}
	cout << N->Arsene.Ape << " " << N->Arsene.Nom << " " << N->Arsene.edad << endl;
	if (N->NodDer != nullptr)
	{
		imprimirPreorder(N);
	}
}

template <class T>
void Nodo<T>::imprimirPostorden(Nodo *N)
{
	
	if (N->Nodizq != nullptr)
	{
		imprimirPreorder(N);
	}
	if (N->NodDer != nullptr)
	{
		imprimirPreorder(N);
	}
	cout << N->Arsene.Ape << " " << N->Arsene.Nom << " " << N->Arsene.edad << endl;
}

template <class T>
Nodo<T>::~Nodo()
{

}

template class Nodo<Persona>;
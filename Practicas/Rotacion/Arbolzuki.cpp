#include "Arbolzuki.h"
#include "Nodo.h"

template<class T>
Arbolzuki<T>::Arbolzuki()
{
}

template <class T>
Arbolzuki<T>::Arbolzuki( T A )
{
	Raiz->Arsene = A;
}

template <class T>
void Arbolzuki<T>::Hakai(Nodo<T> *N, int NumNodo)
{
	if (N->Nodizq == nullptr and N->NodDer == nullptr)
	{
		delete N;
	}
	else if (N->Nodizq == nullptr and N->NodDer != nullptr)
	{
		Nodo<T> *temp = N->NodDer;
		N->NodDer = nullptr;
		delete N;
	}
	else if (N->Nodizq != nullptr and N->NodDer == nullptr)
	{
		Nodo<T> *temp = N->Nodizq;
		N->Nodizq = nullptr;
		delete N;
	}
	else if (N->Nodizq != nullptr and N->NodDer != nullptr)
	{
		Nodo<T> *temp1 = N->Nodizq;
		Nodo<T> *temp = N->NodDer;
		N->NodDer = nullptr;
		N->Nodizq = nullptr;
		delete N;
	}
}

template <class T>
void Arbolzuki<T>::RotaccionDer(Nodo<T> * & Pivot, Nodo<T> * & Raiz)
{
	/*Nodo<T> * temp = Pivot->NodDer;
	anterior->NodDer = nullptr;
	anterior->Nodizq = nullptr;
	Pivot->NodDer = anterior;
	anterior->Nodizq = temp;*/

	Raiz->Nodizq = nullptr;
	Raiz->Nodizq = Pivot->NodDer;
	Pivot->NodDer = nullptr;
	Pivot->NodDer = Raiz;
}

template<class T>
void Arbolzuki<T>::RotaccionIzq(Nodo<T> * & Pivot, Nodo<T> * & Rai)
{
	Raiz->NodDer = nullptr;
	Raiz->NodDer = Pivot->Nodizq;
	Pivot->Nodizq = nullptr;
	Pivot->Nodizq = Raiz;
}

template <class T>
void Arbolzuki<T>::crea_arbolukis2000(Arbolzuki<T> *Raiz, Nodo<T> A)
{
	if (A.Arsene.Ape < Raiz->Raiz->Arsene.Ape)
	{
		if (Raiz->Raiz->Nodizq != nullptr)
		{
			crea_arbolukis2000(Raiz, A);
		}
		else
		{
			Raiz->Raiz->Nodizq = &A;
		}
	}

	if (A.Arsene.Ape > Raiz->Raiz->Arsene.Ape)
	{
		if (Raiz->Raiz->Nodizq != nullptr)
		{
			crea_arbolukis2000(Raiz, A);
		}
		else
		{
			Raiz->Raiz->NodDer = &A;
		}
	}
}

template <class T>
Arbolzuki<T>::~Arbolzuki()
{

}

template class Arbolzuki<Persona>;
#include "Arbolzuki.h"
#include "Nodo.h"

Arbolzuki::Arbolzuki()
{

}

void Arbolzuki::crea_arbolukis2000(Nodo *Raiz, Nodo A)
{
	if (A.Ape < Raiz->Ape)
	{
		if (Raiz->Nodizq != nullptr)
		{
			crea_arbolukis2000(Raiz, A);
		}
		else
		{
			Raiz->Nodizq = &A;
		}
	}

	if (A.Ape > Raiz->Ape)
	{
		if (Raiz->Nodizq != nullptr)
		{
			crea_arbolukis2000(Raiz, A); 
		}
		else
		{
			Raiz->NodDer = &A;
		}
	}
}

void Arbolzuki::Hakai(Nodo *N, int NumNodo)
{
	if (N->Nodizq == nullptr and N->NodDer == nullptr)
	{
		delete N;
	}
	else if (N->Nodizq == nullptr and N->NodDer != nullptr)
	{
		Nodo *temp = N->NodDer;
		N->NodDer = nullptr;
		delete N;
	}
	else if (N->Nodizq != nullptr and N->NodDer == nullptr)
	{
		Nodo *temp = N->Nodizq;
		N->Nodizq = nullptr;
		delete N;
	}
	else if (N->Nodizq != nullptr and N->NodDer != nullptr)
	{
		Nodo *temp1 = N->Nodizq;
		Nodo *temp = N->NodDer;
		N->NodDer = nullptr;
		N->Nodizq = nullptr;
		delete N;
	}
}


Arbolzuki::~Arbolzuki()
{

}

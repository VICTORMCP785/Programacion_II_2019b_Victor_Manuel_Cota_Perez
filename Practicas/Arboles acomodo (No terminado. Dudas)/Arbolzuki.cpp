#include "Arbolzuki.h"
#include "Nodo.h"

int i = 0;

Arbolzuki::Arbolzuki()
{
}

void Arbolzuki::crea_arbolukis2000(Nodo *Raiz, Nodo arr[], int Lim)
{
	
	if (arr[i].Ape < Raiz->Ape)
	{
		if (Raiz->Nodizq != nullptr)
		{
			crea_arbolukis2000(Raiz, arr, Lim);
		}
		else
		{
			Raiz->Nodizq = &arr[i];
			i++;
			crea_arbolukis2000(Raiz, arr, Lim);
		}
	}

	if (arr[i].Ape > Raiz->Ape)
	{
		if (Raiz->Nodizq != nullptr)
		{
			crea_arbolukis2000(Raiz, arr, Lim);
		}
		else
		{
			Raiz->NodDer = &arr[i];
			i++;
			crea_arbolukis2000(Raiz, arr, Lim);
		}
	}

	if (arr[i].Ape == Raiz->Ape)
	{
		
	}
}


Arbolzuki::~Arbolzuki()
{

}

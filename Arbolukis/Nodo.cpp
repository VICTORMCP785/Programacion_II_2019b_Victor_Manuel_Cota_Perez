#include "Nodo.h"
#include <string>


Nodo::Nodo()
{

}

void Nodo::imprimirPreorder(Nodo *N)
{
	cout << N->Ape << " " << N->Nom << " " << N->edad << endl;
	if (N->Nodizq != nullptr)
	{
		imprimirPreorder(N);
	}
	if (N->NodDer)
	{
		imprimirPreorder(N);
	}
}

void Nodo::imprimirInorder(Nodo *N)
{
	
	if (N->Nodizq != nullptr)
	{
		imprimirPreorder(N);
	}
	cout << N->Ape << " " << N->Nom << " " << N->edad << endl;
	if (N->NodDer)
	{
		imprimirPreorder(N);
	}
}

void Nodo::imprimirPostorden(Nodo *N)
{
	
	if (N->Nodizq != nullptr)
	{
		imprimirPreorder(N);
	}
	if (N->NodDer)
	{
		imprimirPreorder(N);
	}
	cout << N->Ape << " " << N->Nom << " " << N->edad << endl;
}

Nodo::~Nodo()
{

}

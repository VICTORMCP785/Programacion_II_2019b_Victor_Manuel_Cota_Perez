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
	if (N->NodDer != nullptr)
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
	if (N->NodDer != nullptr)
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
	if (N->NodDer != nullptr)
	{
		imprimirPreorder(N);
	}
	cout << N->Ape << " " << N->Nom << " " << N->edad << endl;
}

Nodo::~Nodo()
{

}

std::istream & operator>>(std::istream &inp, Nodo & N)
{
	std::cout << "Ingrese su Apellido: " << std::endl;
	inp >> N.Ape;
	std::cout << "Ingrese su Nombre: " << std::endl;
	inp >> N.Nom;
	std::cout << "Ingrese su Edad: " << std::endl;
	inp >> N.edad;

	return inp;
}

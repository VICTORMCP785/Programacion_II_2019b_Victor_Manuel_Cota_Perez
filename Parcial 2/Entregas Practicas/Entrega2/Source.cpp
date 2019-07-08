#include <iostream>
#include "Nodo.h"
#include "Cola.h"
#include <string>
#include "Lista.h"

using namespace std;

void Busqueda(Nodo *nodo[3])
{
	int Inicio = 1;
	int Final = 6;
	Nodo *dato;
	cout << "introduce edad deceada." << endl;
	//cin >> dato;
	bool i = false;
	cout << "introduce edad" << endl;
	int mitad = (Inicio + Final) / 2;

	while (Inicio <= Final)
	{
		mitad = (Inicio + Final) / 2;

		if (nodo[mitad] == dato) // revisa si la mitad es lo mismo que el dato buscado
		{
			i = true;
			break;
		}

		if (true) // si no revisa si es mayor del dato
		{
			Final = mitad;
			mitad = (Inicio + Final) / 2;
		}

		if (true) // si no revisa si es menor al dato
		{
			Inicio = mitad;
			mitad = (Inicio + Final) / 2;
		}
	}
}


void ordenamiento(Nodo *N[3])
{
	int Limit = 3;
	Nodo *aux = new Nodo;
	for (int i = 0; i < Limit-1; i++)
	{
		for (int j = 0; j < Limit-1; j++)
		{
			if (N[j] > N[j + 1])
			{

				aux = N[j];
				N[j] = N[j + 1];
				N[j + 1] = aux;
			}
		}
	}
	
	cout << "Quieres ordenarlos? 1 = Si 2 = No" << endl;
	unsigned int Eleccion;
	cin >> Eleccion;
	if (Eleccion == 1)
	{
		Busqueda(N);
	}
	else if (Eleccion == 2)
	{
		Busqueda(N);
	}
}

int main()
{
	Nodo *PTR1 = new Nodo;
	Nodo *PTR2 = new Nodo;
	Nodo *PTR3 = new Nodo;
	Nodo *ptrarr[] = { PTR1, PTR2, PTR3 };

	for (int i = 0; i < 3; i++)
	{
		cin >> ptrarr[i]->Nombre;
		cin >> ptrarr[i]->Edad; 
	}

	cout << "opciones:" << endl;
	cout << "1 = " << endl;
	

	delete ptrarr;
	delete PTR1;

	return 0;
}

ListaN::ListaN()
{
	Ptr = NULL;
}

void ListaN::SigNodo( Nodo *nodo )
{
	Ptr = new Nodo();
}

string ListaN::strings()
{

}

ListaN::ListaN()
{

}

ListaN::~ListaN()
{

}


//un ptr = *ptr
//un ptr de ptr = **ptr
//una lista de doble puntero que guarde 1 puntero.
//usar otro metodo de busqueda y ordenamiento mas rapido.
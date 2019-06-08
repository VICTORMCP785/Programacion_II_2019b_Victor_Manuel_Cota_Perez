#include <iostream>
#include <string>
#include "Enum.h"
#include "Animales.h"
#include "Mamiferos.h"
#include "Leon.h"
#include "Panda.h"
#include "Tigre.h"
#include "Oviparos.h"
#include "Aves.h"
#include "Cocodrilo.h"

using namespace std;

void BusBinariaEdad(string Nombre[7], int Edad[7])
{
	int Inicio = 1;
	int Final = 6;
	int dato;
	bool i = false;
	cout << "introduce edad" << endl;
	int mitad = (Inicio + Final) / 2;

	while (Inicio <= Final)
	{
		mitad = (Inicio + Final) / 2;

		if (Edad[mitad] == dato)
		{
			i = true;
			break;
		}

		if (Edad[mitad] > dato)
		{
			Final = mitad - 1;
			mitad = (Inicio + Final) / 2;
		}

		if (Edad[mitad] < dato)
		{
			Inicio = mitad + 1;
			mitad = (Inicio + Final) / 2;
		}
	}

	if (i)
	{
		cout << Nombre[mitad] << " " << Edad[mitad] << " años" << endl;
	}
	else
	{
		cout << "no se encontro el numero" << endl;
	}

}

void BusBinariaNombre(string Nombre[7], int Edad[7])
{
	bool i = false;
	int Inicio = 1;
	int Final = 6;
	string dato;
	int mitad = (Inicio + Final) / 2;

	while (Inicio <= Final)
	{
		mitad = (Inicio + Final) / 2;

		if (Nombre[mitad] == dato)
		{
			i = true;
			break;
		}

		if (Nombre[mitad] > dato)
		{
			Final = mitad;
			mitad = (Inicio + Final) / 2;
		}

		if (Nombre[mitad] < dato)
		{
			Inicio = mitad;
			mitad = (Inicio + Final) / 2;
		}
	}



	if (i)
	{
		cout << Nombre[mitad] << " " << Edad[mitad] << " años" << endl;
	}
	else
	{
		cout << "no se encontro el Nombre" << endl;
	}
}

void quickEdad(int Der, int izq, string Nombre[10], int Edad[10])
{
	int n = 0;
	int i = izq;
	int j = Der;
	int p = Edad[(izq + Der) / 2];
	string aux1;
	int aux2;

	while (i < j)
	{
		while (Edad[i] < p)
		{
			i++;
		}
		while (Edad[j] > p)
		{
			j--;
		}
		if (i <= j)
		{
			if (Edad[i] == Edad[j])
			{
				if (Nombre[i] < Nombre[j])
				{
					aux1 = Nombre[i];
					aux2 = Edad[i];
					Nombre[i] = Nombre[j];
					Nombre[j] = aux1;
					Edad[i] = Edad[j];
					Edad[j] = aux2;
				}
			}
			else if (Edad[i] < Edad[j])
			{
				aux1 = Nombre[i];
				aux2 = Edad[i];
				Nombre[i] = Nombre[j];
				Nombre[j] = aux1;
				Edad[i] = Edad[j];
				Edad[j] = aux2;
			}
			i++;
			j--;
		}
	}
	if (izq < j)
	{
		quickNombre(j, izq, Nombre, Edad);
	}
	if (i < Der)
	{
		quickNombre(Der, i, Nombre, Edad);
	}

	if (n == 0)
	{
		n++;

	}

}

void quickNombre(int Der, int izq, string Nombre[10], int Edad[10])
{
	int n = 0;
	int i = izq;
	int j = Der;
	string p = Nombre[(izq + Der) / 2];
	string aux1;
	int aux2;

	while (i < j)
	{
		while (Nombre[i] < p)
		{
			i++;
		}
		while (Nombre[j] > p)
		{
			j--;
		}
		if (i <= j)
		{
			if (Nombre[i] == Nombre[j])
			{
				if (Edad[i] < Edad[j])
				{
					aux1 = Nombre[i];
					aux2 = Edad[i];
					Nombre[i] = Nombre[j];
					Nombre[j] = aux1;
					Edad[i] = Edad[j];
					Edad[j] = aux2;
				}
			}
			else if (Nombre[i] < Nombre[j])
			{
				aux1 = Nombre[i];
				aux2 = Edad[i];
				Nombre[i] = Nombre[j];
				Nombre[j] = aux1;
				Edad[i] = Edad[j];
				Edad[j] = aux2;
			}
			i++;
			j--;
		}
	}
	if (izq < j)
	{
		quickNombre(j, izq, Nombre, Edad);
	}
	if (i < Der)
	{
		quickNombre(Der, i, Nombre, Edad);
	}

	if (n == 0)
	{
		n++;
		int eleccion;
		cout << "1 Buscar por nombre \n2 Buscar por edad" << endl;
		if (eleccion == 1)
		{
			BusBinariaNombre(Nombre, Edad);
		}
		else if (eleccion == 2)
		{
			BusBinariaEdad(Nombre, Edad);
		}
	}

}



int main()
{
	Aves aves;
	Leon leon;
	Cocodrilo cocodrilo;
	Tigre tigre;
	Panda panda;

	cout << "Ave Nombre =" << endl;
	cin >> aves.Nombre;
	cout << "Ave Edad =" << endl;
	cin >> aves.Edad;
	//aves.salud = Bien;

	cout << "Leon Nombre =" << endl;
	cin >> leon.Nombre;
	cout << "Leon Edad =" << endl;
	cin >> leon.Edad;
	//leon.salud = Bien;

	cout << "Cocodrilo Nombre =" << endl;
	cin >> cocodrilo.Nombre;
	cout << "Cocodrilo Edad =" << endl;
	cin >> cocodrilo.Edad;
	//cocodrilo.salud = Mal;

	cout << "Tigre Nombre =" << endl;
	cin >> tigre.Nombre;
	cout << "Tigre Edad =" << endl;
	cin >> tigre.Edad;
	//tigre.salud = Critico;

	cout << "Panda Nombre =" << endl;
	cin >> panda.Nombre;
	cout << "Panda Edad =" << endl;
	cin >> panda.Edad;
	//panda.salud = Critico;

	string arr1[6] = { aves.Nombre, leon.Nombre, cocodrilo.Nombre, tigre.Nombre, panda.Nombre };
	int arr2[6] = { aves.Edad, leon.Edad, cocodrilo.Edad, tigre.Edad, panda.Edad };
	SALUD arr3[6] = { aves.salud, leon.salud , cocodrilo.salud, tigre.salud, panda.salud };

	int eleccion;
	cout << "1 ordenar por nombre \n2 ordenar por edad" << endl;
	if (eleccion == 1)
	{
		quickNombre(5, 0, arr1, arr2);
	}
	else if (eleccion == 2)
	{
		quickEdad(5, 0, arr1, arr2);
	}
	return 0;
}
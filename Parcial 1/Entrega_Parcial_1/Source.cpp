#include <iostream>
#include <string>
#include "Animales.h"


using namespace std;

int n = 0;

void BusBinariaEdad(string Nombre[12], int Edad[12])
{
	int Inicio = 1;
	int Final = 6;
	int dato;
	cout << "introduce edad deceada." << endl;
	cin >> dato;
	bool i = false;
	cout << "introduce edad" << endl;
	int mitad = (Inicio + Final) / 2;

	while (Inicio <= Final)
	{
		mitad = (Inicio + Final) / 2;

		if (Edad[mitad] == dato) // revisa si la mitad es lo mismo que el dato buscado
		{
			i = true; // indica que lo encontro
			break;
		}

		if (Edad[mitad] > dato) // si no revisa si es mayor del dato
		{
			Final = mitad - 1;
			mitad = (Inicio + Final) / 2;
		}

		if (Edad[mitad] < dato) // si no revisa si es menor al dato
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
		cout << "no se encontro el numero" << endl; //si no se encuentra en el array imprime
	}

}

void BusBinariaNombre(string Nombre[12], int Edad[12])
{
	int Inicio = 1;
	int Final = 6;
	string dato;
	cout << "introduce edad deceada." << endl;
	cin >> dato;
	bool i = false;
	cout << "introduce edad" << endl;
	int mitad = (Inicio + Final) / 2;

	while (Inicio <= Final)
	{
		mitad = (Inicio + Final) / 2;

		if (Nombre[mitad] == dato) // revisa si la mitad es lo mismo que el dato buscado
		{
			i = true;
			break;
		}

		if (Nombre[mitad] > dato) // si no revisa si es mayor del dato
		{
			Final = mitad;
			mitad = (Inicio + Final) / 2;
		}

		if (Nombre[mitad] < dato) // si no revisa si es menor al dato
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
		cout << "no se encontro el Nombre" << endl; // si no se encuentra en el array imprime
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
		if (i <= j) // ordena con prioridad la edad de los animales
		{
			aux1 = Nombre[i];
			aux2 = Edad[i];
			Nombre[i] = Nombre[j];
			Nombre[j] = aux1;
			Edad[i] = Edad[j];
			Edad[j] = aux2;
			i++;
			j--;
		}
	}
	if (izq < j)
	{
		quickEdad(j, izq, Nombre, Edad);
	}
	if (i < Der)
	{
		quickEdad(Der, i, Nombre, Edad);
	}

	if (n == 0)
	{
		n++;
		int eleccion;
		cout << "1 Buscar por nombre \n2 Buscar por edad" << endl;
		cin >> eleccion;
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

void quickNombre(int Der, int izq, string Nombre[10], int Edad[10])
{
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
		if (i <= j) // ordena con prioridad los nombres de los animales
		{
			aux1 = Nombre[i];
			aux2 = Edad[i];
			Nombre[i] = Nombre[j];
			Nombre[j] = aux1;
			Edad[i] = Edad[j];
			Edad[j] = aux2;
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
		cin >> eleccion;
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

	// inputs de datos
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

	cin >> eleccion;
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
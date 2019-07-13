#include <iostream>
#include <string>
#include "Lista.h"
#include "Nodo.h"
#include "Ordenamiento.h"
using namespace std;

void Push_NoPosicion() 
{
	SingleLista SimplList;
	SingleNode * N = new SingleNode();
	cin >> *N;
	SimplList.push(N);
}

void Push_Posicion()
{
	unsigned int pos;
	cout << "que posicion quieres ponerlo" << endl;
	cin >> pos;
	SingleLista SimplList;
	SingleNode * N = new SingleNode();
	cin >> *N;
	SimplList.push(N, pos);
}

void Pull_Noposicion()
{
	SingleLista SimplList;
	SingleNode*Temp = SimplList.pull();
	if (Temp == nullptr)
	{
		cout << "No hay elementos" << endl;
	}
	else
	{
		cout << *Temp;
	}
	delete Temp;
}

void Pull_Posicion()
{
	unsigned int pos;
	cout << "que posicion quieres eliminar" << endl;
	cin >> pos;
	SingleLista SimplList;
	SingleNode*Temp = SimplList.pull(pos);
	if (Temp == nullptr)
	{
		cout << "No hay elementos" << endl;
	}
	else
	{
		cout << *Temp;
	}
	delete Temp;
}

void Menu_Lista_Simple()
{
	char ele;
	cout << "1 = ingresar un nodo en la lista sin importar su posicion" << endl;
	cout << "2 = quitar un nodo en la lista" << endl;
	cout << "3 = ingresar un nodo en la lista en posicion" << endl;
	cout << "4 = quitar un nodo en la lista con posicion" << endl;
	cin >> ele;
	switch (ele)
	{
	case '1':
		Push_NoPosicion();
	case '2':
		Pull_Noposicion();
	case '3':
		Push_Posicion();
	case '4':
		Pull_Posicion();
	default:
		break;
	}
}

void Menu()
{
	cout << "Menu:" << endl;
	cout << "1 = Listas Simples" << endl;
	cout << "2 = Listas Enlazadas" << endl;
	cout << "3 = Salir" << endl;
	char Eleccion;
	cin >> Eleccion;
	switch (Eleccion)
	{
	case '1':
		Menu_Lista_Simple();
	case '2':

	case '3':
		break;
	default:
		break;
	}

}

int main()
{
	

	Menu();

	cin.get();
	return 0;
}
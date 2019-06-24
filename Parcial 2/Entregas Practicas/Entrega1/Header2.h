#include "Header.h"
#include <iostream>

using namespace std;

class Pila
{
	Nodo *UltimoNodo = nullptr;
	void add(Nodo nodo)
	{
		Nodo *Temp = UltimoNodo;
		UltimoNodo = &UltimoNodo->Ultimo();
		delete Temp;
	}
	void Pull()
	{

	}
	void Print()
	{

	}
	void Clear()
	{

	}
};
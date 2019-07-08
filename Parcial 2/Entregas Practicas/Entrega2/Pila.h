#pragma once
#include "Nodo.h"
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
	void Print()
	{

	}
};
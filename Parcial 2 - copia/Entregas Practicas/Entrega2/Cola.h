#pragma once
#include "Nodo.h"
#include <iostream>

using namespace std;

class Cola
{
	Nodo *PrimerNodo = nullptr;
	void add(Nodo * & nodo)
	{
		if (PrimerNodo == nullptr)
		{
			PrimerNodo = nodo;
		}
		else
		{
			PrimerNodo->add(nodo);
		}
	}
	void Print()
	{
		cout << PrimerNodo << endl;
	}
	void Clear()
	{
		//PrimerNodo.clear();
	}
};
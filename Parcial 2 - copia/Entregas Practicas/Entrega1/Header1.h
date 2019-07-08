#include "Header.h"
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
	void Pull()
	{

	}
	void Print()
	{

	}
	void Clear()
	{
		//PrimerNodo.clear();
	}
};
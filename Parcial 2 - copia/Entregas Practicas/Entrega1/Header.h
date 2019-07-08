#include <iostream>

using namespace std;

class Nodo
{
public:
	string Nombre;
	unsigned int Edad;
	Nodo *ptr = nullptr;
	Nodo add(Nodo * & Next)
	{
		ptr = Next;
	}
	//~Nodo();
};

#include <iostream>
#include "Enum.h"

using namespace std;

class Animales
{
protected:
	
public:
	string Nombre;
	int Edad;
	SALUD salud;
	virtual int Patas() = 0;
	virtual int Reproduccion() = 0;
	virtual int Piel() = 0;
	virtual int Caza() = 0;
	int Dormir()
	{

		return 0;
	}

};

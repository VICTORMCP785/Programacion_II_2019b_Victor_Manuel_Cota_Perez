#include <iostream>
#include "Enum.h"

using namespace std;

/*enum SALUD
{
	Bien, Mal, Critico
};*/

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

class oviparos : public Animales
{
public:
	int Reproduccion()
	{
		cout << "Se reproducen mediante huevos." << endl;
		return 0;
	}
};

class Aves : public oviparos
{
public:
	int Caza()
	{
		cout << "" << endl;
		return 0;
	}
	int Patas()
	{
		cout << "Cuentan con 2 patas" << endl;
		return 0;
	}
	int Piel()
	{
		cout << "Su piel tiene llena de plumas" << endl;
		return 0;
	}
};

class reptiles : public oviparos
{
public:
	int Piel()
	{
		cout << "Cuentan con una piel escamosa" << endl;
		return 0;
	}
};

class Cocodrilo : public reptiles
{
public:
	int Caza()
	{
		cout << "Al ser carnivoros se dedican a la caza de presas cerca de su habitat" << endl;
		return 0;
	}
	int Patas()
	{
		cout << "Cuentan con 4 patas" << endl;
		return 0;
	}
};

class Mamiferos : public Animales
{
public:
	int Reproduccion()
	{
		cout << "Se reproducen la gestacion en el vientre" << endl;
		return 0;
	}
};

class Leon : public Mamiferos
{
public:
	int Caza()
	{
		cout << "En la cuestion de caza el macho se queda cuidando de sus crias y las hembras van a cazar" << endl;
		return 0;
	}
	int Piel()
	{
		cout << "la piel cuenta con un pelaje en el caso de los machos cuentan con una gran melena" << endl;
		return 0;
	}
	int Patas()
	{
		cout << "Cuentan con 4 patas" << endl;
		return 0;
	}

};

class Tigre : public Mamiferos
{
public:
	int Caza()
	{
		cout << "Al ser carnivoros consumen en su mayoria carne de otros animeles " << endl;
		return 0;
	}
	int Piel()
	{
		cout << "Cuentan con un pelaje cuentan con un pelaje de color naranja con rayas negras" << endl;
		return 0;
	}
	int Patas()
	{
		cout << "Cuentan con 4 patas" << endl;
		return 0;
	}
};

class Panda : public Mamiferos
{
public:
	int Caza()
	{
		cout << "Su alimentacion consiste en su mayoria en bambu" << endl;
		return 0;
	}
	int Piel()
	{
		cout << "cuentan con una piel con un pelaje de color blanco y negro" << endl;
		return 0;
	}
	int Patas()
	{
		cout << "Cuentan con 4 patas" << endl;
		return 0;
	}
};
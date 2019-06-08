#include <iostream>
#include "Mamiferos.h"




using namespace std;


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
	}
};
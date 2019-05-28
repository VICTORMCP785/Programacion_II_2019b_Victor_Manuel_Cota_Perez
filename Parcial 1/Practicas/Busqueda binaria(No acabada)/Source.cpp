#include <iostream>

using namespace std;

class Animales
{
public:
	//virtual const string Nombre() = 0;
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

class reptiles : public oviparos
{
public:
	int Piel()
	{
		cout << "Cuentan con una piel escamosa" << endl;
		return 0;
	}
};

class aves : public oviparos
{
public:
	const string Nombre = "Nue";
	int Piel()
	{
		cout << "Su piel tiene llena de plumas" << endl;
		return 0;
	}
};

class Leon : public Mamiferos
{
public:
	const string Nombre = "Regulus";
	int Patas = 4;
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

};

class Tigre : public Mamiferos
{
public:
	const string Nombre = "Aisaka";
	int Patas = 4;
	int Caza()
	{
		cout << "Al ser carnivoros consumen en su mayoria carne de otros animeles " << endl;
		return 0;
	}
	int piel()
	{
		cout << "Cuentan con un pelaje cuentan con un pelaje de color naranja con rayas negras" << endl;
		return 0;
	}
};

class Panda : public Mamiferos
{
public:
	const string Nombre = "Kaede";
	int Patas = 4;
	int Caza()
	{
		cout << "Su alimentacion consiste en su mayoria en bambu" << endl;
		return 0;
	}
	int piel()
	{
		cout << "cuentan con una piel con un pelaje de color blanco y negro" << endl;
		return 0;
	}
};

class Cocodrilo : public reptiles
{
public:
	string Nombre = "Ronnin";
	int Patas = 4;
	int Caza()
	{
		cout << "Al ser carnivoros se dedican a la caza de presas cerca de su habitat" << endl;
		return 0;
	}
};

void quick()
{
	int i = izq;
	int j = Der;
	int p = N[(izq + Der) / 2];
	int aux;

	while (i < j)
	{
		while (N[i] < p)
		{
			i++;
		}
		while (N[j] > p)
		{
			j--;
		}
		if (i <= j)
		{
			aux = N[i];
			N[i] = N[j];
			N[j] = aux;
			i++;
			j--;
		}
	}
	if (izq < j)
	{
		Quicksort(j, N, izq);
	}
	if (i < Der)
	{
		Quicksort(Der, N, i);
	}
	
	int n = 0;
	if (n==0)
	{
		n++;
		
	}

}



int main()
{

	Leon leon;
	


	string arr[6];
	arr[0] = leon.Nombre;



	return 0;
}
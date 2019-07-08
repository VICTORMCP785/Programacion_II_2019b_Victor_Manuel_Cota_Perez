#include <iostream>

using namespace std;

void Burbuja(int Limit, int N[255])
{
	int aux;
	for (int i = 0; i < Limit; i++)//ordenamiento burbuja
	{
		for (int j = 0; j < Limit; j++)
		{
			if (N[j] > N[j + 1])
			{

				aux = N[j];
				N[j] = N[j + 1];
				N[j + 1] = aux;
			}
		}
	}

	for (int j = 0; j < Limit; j++)//imprime ya ordenado
	{
		cout << N[j] << " ";
	}
}

void Quicksort(int Der, int N[255], int izq)
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

	for (int j = 0; j < Der; j++)//imprime ya ordenado
	{
		cout << N[j] << " ";
	}
}

int main()
{
	int Num[255];
	int Limit;
	cout << "Cuantos numeros quiere guardar? (limite 255)" << endl;
	cin >> Limit;
	cout << "ingrese los numeros" << endl;
	for (int i = 0; i < Limit; i++)
	{
		cin >> Num[i]; 
	}

	int eleccion;
	cout << "1 = ordenamiento burbuja \n2 = Quicksort" << endl;
	cin >> eleccion;

	if (eleccion == 1)
	{
		Burbuja(Limit, Num);
	}
	else if (eleccion == 2)
	{
		Quicksort(Limit, Num, 0);
	}


	cin.ignore();
	cin.get();
	return 0;
}
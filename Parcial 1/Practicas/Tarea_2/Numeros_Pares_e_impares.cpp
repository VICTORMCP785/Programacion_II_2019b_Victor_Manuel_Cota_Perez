#include <iostream>
#include <stdio.h>

using namespace std;

void Par_e_Impar()
{
	int numero;
	cout << "escribe un numero: ";
	scanf_s("%d", &numero);

	int resultado = numero & 1;// analiza el numero y lo compara con el numero final de su codigo binario

	if (resultado)// interpreta como true cuando ambos numeros son 1
	{
		cout << "el numero " << numero << " es Impar";
	}
	else// cuando los numeros son 0 & 1 es par
	{
		cout << "el numero " << numero << " es Par";
	}
}

void Num_x10()
{
	int Num;
	int resultado;
	int resultado2;
	cin >> Num;

	resultado = Num << 3;
	resultado2 = Num << 1;
	resultado = resultado + resultado2;

	cout << Num << " X 10 = " << resultado << endl;
}

int main()
{
	int eleccion;
	cout << "1 = Numeros pares e impares \n2 = numeros x10" << endl;
	cin >> eleccion;
	if (eleccion == 1)
	{
		Par_e_Impar();
	}
	else if (eleccion == 2)
	{
		Num_x10();
	}

	cin.ignore();
	cin.get();
	return 0;
}
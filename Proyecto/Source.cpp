#include "Nodo.h"
#include "Persona.h"
#include "Arbolzuki.h"

void Menu_Imprimir()
{

	string eleccion;
	cout << "1 = imprimir inorden, 2 = imprimir postorden, 3 = imprimir Preorder" << endl;
	cin >> eleccion;
	if (eleccion == "1")
	{
		
	}
	else if (eleccion == "2")
	{

	}
	else if (eleccion == "3")
	{

	}
	else
	{
		cout << "numero no valido" << endl;
		Menu_Imprimir();
	}
}

void Menu_Arboles_Binarios()
{
	bool banderuki = true;
	string eleccion;
	ArbolBinario <Persona> *Raiz = new ArbolBinario <Persona>();
	Nodo <Persona> *nodo = nullptr;
	cin >> eleccion;
	if (eleccion == "1")
	{
		cout << "1 = crear Un nodo \n2 = dejar de crear nodos \n3 = ver instrucciones" << endl;
		while (banderuki)
		{
			cin >> eleccion;
			if (eleccion == "1")
			{
				nodo->Datos = Persona();
				Raiz->Creaccion_Nodos(nodo);
			}
			else if (eleccion == "2")
			{
				banderuki = false;
			}
			else if (eleccion == "3")
			{
				cout << "1 = crear otro nodo \n2 = dejar de crear nodos \n3 = ver instrucciones" << endl;
			}
			else if (eleccion == "4")
			{
				Menu_Imprimir();
			}
			else
			{
				cout << "Numero No valido" << endl;
			}
		}
	}	
}

void Menu_Arboles_AVL()
{
	bool banderuki = true;
	string eleccion;
	Arbol_AVL <Persona> *Raiz = new Arbol_AVL <Persona>();
	Nodo <Persona> *nodo = nullptr;
	cin >> eleccion;
	if (eleccion == "1")
	{
		cout << "1 = crear Un nodo \n2 = dejar de crear nodos \n3 = ver instrucciones" << endl;
		while (banderuki)
		{
			cin >> eleccion;
			if (eleccion == "1")
			{
				nodo->Datos = Persona();
				Raiz->creacion_de_nodos(nodo);
			}
			else if (eleccion == "2")
			{
				banderuki = false;
			}
			else if (eleccion == "3")
			{
				cout << "1 = crear otro nodo \n2 = dejar de crear nodos \n3 = ver instrucciones" << endl;
			}
			else if (eleccion == "4")
			{
				Menu_Imprimir();
			}
			else
			{
				cout << "Numero No valido" << endl;
			}
		}
	}
}

int main()
{
	char eleccion;
	cout << "1 = crear arboles binarios \n2 = crear arboles AVL" << endl;
	cin >> eleccion;
	if (eleccion == '1')
	{
		Menu_Arboles_Binarios();
	}
	else if (eleccion == '2')
	{
		
	}
	
	/*
	while (true)
	{
		cout << "1 = Preorder \n 2 = Postorder \n 3 = Inorder \n 4 = Salir" << endl;
		char ele;
		if (ele = '1')
		{
			//Raiz->imprimirPreorder(Raiz);
		}
		else if (ele = '2')
		{
			//Raiz->imprimirPostorden(Raiz);
		}
		else if (ele = '3')
		{
			//Raiz->imprimirInorder(Raiz);
		}
		else
		{
			break;
		}
	}
	*/

	cin.ignore();
	cin.get();
	return 0;
}
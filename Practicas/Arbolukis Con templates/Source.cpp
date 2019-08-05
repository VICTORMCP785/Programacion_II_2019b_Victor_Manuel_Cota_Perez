//#include "Nodo.h"
#include "Arbolzuki.h"

template <class T>
void Creaccion_Nodos(Arbolzuki<T> *Raiz)
{
	Arbolzuki creacion;
	Nodo N;
	N.Arsene = Persona();


	creacion.crea_arbolukis2000 <T> (Raiz, N);
}

int main()
{
	bool banderuki = true;
	Arbolzuki<Persona> *Raiz = new Arbolzuki<Persona> (Persona());
	string eleccion;
	cout << "1 = crear nodo \n2 = salir" << endl;
	cin >> eleccion;
	if (eleccion == "1")
	{
		
		cout << "1 = crear otro nodo \n2 = dejar de crear nodos \n3 = ver instrucciones" << endl;
		while (banderuki)
		{
			cin >> eleccion;
			if (eleccion == "1")
			{
			
			}
			else if (eleccion == "2")
			{
				banderuki = false;
			}
			else if (eleccion == "3")
			{
				cout << "1 = crear otro nodo \n2 = dejar de crear nodos \n3 = ver instrucciones" << endl;
			}
			else
			{
				cout << "Numero No valido" << endl;
			}
		}
	}
	else if( eleccion == "2")
	{
		cin.ignore();
		cin.get();
		return 0;
	}
	else
	{
		cout << "Opcion No valida" << endl;
		main();
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

}
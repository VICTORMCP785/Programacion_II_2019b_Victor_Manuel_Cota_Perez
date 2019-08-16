#include "Nodo.h"
#include <string>

template <class T>
Nodo<T>::Nodo()
{

}

template<class T>
void Nodo<T>::CrearNodos(Nodo<T> * & nodo)//crea nodos
{
	if (this > nodo)
	{
		if (NodDer != nullptr)
		{
			NodDer->CrearNodos(nodo);
		}
		else
		{
			NodDer = nodo;
			RevisarDesbalance();
		}
	}
	else if (this < nodo)
	{
		if (Nodizq != nullptr)
		{
			Nodizq->CrearNodos(nodo);
		}
		else
		{
			Nodizq = nodo;
			RevisarDesbalance();
		}
	}
}

template<class T>
void Nodo<T>::RevisarDesbalance()//Revisa si hay desbalance
{
	unsigned int I = RevisarNivelIzq();
	unsigned int D = RevisarNivelDer();
	int diferencia = I - D;

	if (diferencia <= -2)
	{
		rotacionderecha();
	}
	else if (diferencia >= 2)
	{
		rotacionizquierda();
	}
	else
	{
		cout << "Esta Balanceado" << endl;
	}
}

template<class T>
int Nodo<T>::RevisarNivelIzq()//Revisar Los Niveles del nodo izq
{
	if (this->Nodizq != nullptr)
	{
		RevisarNivelIzq();
	}
	else
	{
		NIVIZQ += 1;
		this->Nodizq;
	}
	return NIVIZQ;
}

template<class T>
int Nodo<T>::RevisarNivelDer()//Revisa los niveles Del nodo derecho
{
	if (this->Nodizq != nullptr)
	{
		NIVIZQ += 1;
		RevisarNivelIzq();
	}
	else
	{
		NIVIZQ += 1;
		this->Nodizq;
	}
	return NIVIZQ;
}

template<class T>
void Nodo<T>::rotacionderecha()//Funcion Para La Rotacion Derecha
{
	if (this->Nodizq = nullptr)
	{
		Nodo<T> *P = this->Nodizq;
		if (P->Nodizq != nullptr)
		{
			this->NodDer = P->Nodizq;
		}
		else
		{
			this->NodDer = nullptr;
		}
		P->Nodizq = this;
	}
}

template<class T>
void Nodo<T>::rotacionizquierda()//Funcion Para La Rotacion Izquierda
{
	Nodo<T> *P = this->NodDer;
	if (P->NodDer != nullptr)
	{
		this->Nodizq = P->NodDer;
	}
	else
	{
		this->Nodizq = nullptr;
	}
	P->NodDer = this;
}

template<class T>
void Nodo<T>::imprimirinorder()
{
	if (Nodizq != nullptr)
	{
		Nodizq->imprimirinorder();
	}
	cout << Datos << endl;
	if (NodDer != nullptr)
	{
		NodDer->imprimirinorder();
	}
}

template<class T>
void Nodo<T>::imprimirpostorden()
{
	if (Nodizq != nullptr)
	{
		Nodizq->imprimirpostorden();
	}
	cout << Datos << endl;
	if (NodDer != nullptr)
	{
		NodDer->imprimirpostorden();
	}
}

template<class T>
void Nodo<T>::imprimirpreorder()
{
	if (Nodizq != nullptr)
	{
		Nodizq->imprimirpreorder();
	}
	cout << Datos << endl;
	if (NodDer != nullptr)
	{
		NodDer->imprimirpreorder();
	}
}


/*
template <class T>
void Arbol_AVL<T>::Creacion_de_Arboles_Binarios(Nodo <T> A)
{
	if (A.Datos.Ape < Raiz->Raiz->Datos.Ape)
	{
		if (Raiz->Raiz->Nodizq != nullptr)
		{
			Creacion_de_Arboles_Binarios(Raiz, A);
		}
		else
		{
			Raiz->Raiz->Nodizq = &A;
		}
	}

	if (A.Datos.Ape > Raiz->Raiz->Datos.Ape)
	{
		if (Raiz->Raiz->Nodizq != nullptr)
		{
			Creacion_de_Arboles_Binarios(Raiz, A);
		}
		else
		{
			Raiz->Raiz->NodDer = &A;
		}
	}
}
*/

template <class T>
Nodo<T>::~Nodo()
{

}

template class Nodo<Persona>;
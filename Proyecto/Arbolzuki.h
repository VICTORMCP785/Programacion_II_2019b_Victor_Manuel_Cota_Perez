#pragma once
#include "Nodo.h"

template <class T>
class Arbolzuki
{
public:
	Arbolzuki();
	
	//Arbolzuki(T);

	Nodo<T> *Raiz = nullptr;
	
	/*
	void imprimirPreorder(Nodo<T> *);

	void imprimirInorder(Nodo<T> *);

	void imprimirPostorden(Nodo<T> *);
	*/

	void inorder();
	void postorden();
	void preorder();

	~Arbolzuki();
};

template <class T>
class ArbolBinario : public Arbolzuki<T>
{
public:
	ArbolBinario();

	Nodo<T> *Raiz = nullptr;

	void Creaccion_Nodos(Nodo <T> *);
};
 
template <class T>
class Arbol_AVL : public Arbolzuki<T>
{
public:
	Arbol_AVL();

	Nodo<T> *Raiz = nullptr;

	void creacion_de_nodos(Nodo <T> *);
};
#pragma once
#include "Lista.h"

class SingleLista;
class DoubleLista;
class SingleNode;
class DoubleNode;

class Ordenamiento 
{
private:

	static SingleNode* swap(SingleNode *, SingleNode *);

	static DoubleNode* swap(DoubleNode *, DoubleNode *);

public:

	static void bubble(SingleLista & L);

	static void bubble(DoubleLista &);

	static void quick(SingleLista &);

	static void quick(DoubleLista &);
};
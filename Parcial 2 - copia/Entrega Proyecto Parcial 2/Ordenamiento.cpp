#include "Ordenamiento.h"

SingleNode * Ordenamiento::swap(SingleNode *A, SingleNode *B)
{
	A->next = B->next;
	B->next = A;
	return B;
}

DoubleNode * Ordenamiento::swap(DoubleNode *, DoubleNode *)
{

	return nullptr;
}

void Ordenamiento::bubble(SingleLista & L)
{
	
	SingleNode ** iter;
	SingleNode * a, *b;
	unsigned int size = L.size();
	bool swapped = false;
	for (unsigned int i = 0; i < size; i++) {
		iter = L.start;
		for (unsigned int j = 0; j < size - i - 1; j++) {
			a = *iter;
			b = a;
			if (*a > *b) {
				swapped = true;
				*iter = swap(a, b);
			}

			*iter = (*iter)->next;
		}
		if (!swapped)
			break;
	}
	
}

void Ordenamiento::bubble(DoubleLista & L)
{

}

void Ordenamiento::quick(SingleLista & L)
{

}

void Ordenamiento::quick(DoubleLista & L)
{
}

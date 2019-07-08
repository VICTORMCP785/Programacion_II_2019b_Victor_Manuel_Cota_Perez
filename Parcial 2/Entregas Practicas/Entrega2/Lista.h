#pragma once
#include "Nodo.h"

class ListaN
{
public:
	ListaN();
	void SigNodo(Nodo *SigNodo);
	string strings();
	ListaN();
	~ListaN();
protected:
	Nodo *Ptr;
};

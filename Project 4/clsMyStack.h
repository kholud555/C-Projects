#pragma once

#include <iostream>
#include "clsMyQueue.h"
using namespace std;
template <class T>

class  clsMyStack :public   clsMyQueue <T>
{


public:

	void push(T Item)
	{
		this->InsertAtFront(Item);
	}

	T Top()
	{
		return this->front();

	}

	T Bottom()
	{
		return this->back();

	}

};



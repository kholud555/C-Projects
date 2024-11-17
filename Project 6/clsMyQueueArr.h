#pragma once
#include <iostream>
using namespace std;
#include "clsDynamicArray.h"
template <class T>
class clsMyQueueArr
{
protected:
	//composition
	clsDynamicArray <T> _MyArr;

public:

	clsMyQueueArr(int Lenght = 0): _MyArr(Lenght)
	{
	}

	void push(T NewItem)
	{
		_MyArr.InsertAtEnd(NewItem);
	}

	void pop()
	{
		_MyArr.DeleteLastItem();
	}

	T front()
	{
		return _MyArr.GetItem(0);
	}

	T back()
	{
		return _MyArr.GetItem(this->Size()-1);
	}

	int Size()
	{
		return _MyArr.Size();
	}

	bool IsEmpty()
	{
		return _MyArr.Size() == 0;
	}

	T GetItem(int Index)
	{
		return _MyArr.GetItem(Index);
	}

	void InsertAtBiginning(T Item)
	{
		_MyArr.InsertAtBignning(Item);
	}

	void Reverse()
	{
		_MyArr.Reverse();
	}

	void UpdateItem(int Index, T NewValue)
	{
		_MyArr.SetItem(Index, NewValue);
	}

	void InsertAfter(int Index, T NewValue)
	{
		_MyArr.InsertAfter(Index, NewValue);
	}

	void InsertAtFront(T Value)
	{
		_MyArr.InsertAtBignning(Value);
	}

	void InsertAtBack(T Value)
	{
		_MyArr.InsertAtEnd(Value);
	}

	void Clear()
	{
		_MyArr.Clear();
	}

	void Print()
	{
		_MyArr.PrintList();
	}
};





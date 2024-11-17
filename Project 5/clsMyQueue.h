#pragma once
#include <iostream>
using namespace std;
#include "clsDbLinkedList.h"
template <class T>
class clsMyQueue 
{
protected:
	//composition
	clsDblLinkedList <T> _MyArr;
public:

	 void push(T NewItem)
	 {
		 _MyArr.InsertAtEnd(NewItem);
	 }

	void pop()
	{
		_MyArr.DeleteLastNode();
	}

	T front()
	{
		return _MyArr.head->value;
	}

	T back()
	{
		return _MyArr.GetItem(0);
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

	void Reverse()
	{
		_MyArr.Reverse();
	}

	void UpdateItem(int Index, T NewValue)
	{
		 _MyArr.UpdateItem(Index, NewValue);
	}

	void InsertAfter(int Index, T NewValue)
	{
		 _MyArr.InsertAfter(Index, NewValue);
	}

	void InsertAtFront(T Value)
	{
		_MyArr.InsertAtBegining(Value);
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



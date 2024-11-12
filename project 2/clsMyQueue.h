#pragma once
#include <iostream>
using namespace std;
#include "clsDbLinkedList.h"
template <class T>
class clsMyQueue 
{
protected:
	//composition
	clsDblLinkedList <T> _MyList;
public:

	 void push(T NewItem)
	 {
		 _MyList.InsertAtEnd(NewItem);
	 }

	void pop()
	{
		_MyList.DeleteLastNode();
	}

	T front()
	{
		return _MyList.head->value;
	}

	T back()
	{
		return _MyList.GetItem(0);
	}

	int Size()
	{
		return _MyList.Size();
	}

	bool IsEmpty()
	{
		return _MyList.Size() == 0;
	}

	T GetItem(int Index)
	{
		return _MyList.GetItem(Index);
	}

	void Reverse()
	{
		_MyList.Reverse();
	}

	void UpdateItem(int Index, T NewValue)
	{
		 _MyList.UpdateItem(Index, NewValue);
	}

	void InsertAfter(int Index, T NewValue)
	{
		 _MyList.InsertAfter(Index, NewValue);
	}

	void InsertAtFront(T Value)
	{
		_MyList.InsertAtBegining(Value);
	}

	void InsertAtBack(T Value)
	{
		_MyList.InsertAtEnd(Value);
	}

	void Clear()
	{
		_MyList.Clear();
	}

	void Print()
	{
		_MyList.PrintList();
	}
};


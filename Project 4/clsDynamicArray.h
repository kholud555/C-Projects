#pragma once
#include <iostream>
using namespace std;
template <class T>
class clsDynamicArray
{
protected:

	int _Length = 0;
	T* _TempArr;
	
public:

	T* arr;

	clsDynamicArray(int Length)
	{
		if (Length < 0)
			Length = 0;

		_Length = Length;

		arr = new T[_Length];
	}

	// Destructor to release allocated memory
	~clsDynamicArray()
	{
		delete[] arr;
	}

	bool SetItem(int Index, T Value)
	{

		if (_Length < 0 || Index >= _Length)
			return false;

		arr[Index] = Value;
		return true;
	}

	bool IsEmpty()
	{
		return _Length == 0;
	}

	int Size()
	{
		return _Length;
	}

	void Resize(int NewLenght)
	{
		if (NewLenght == _Length)
			return;

		if (NewLenght < 0)
			_Length = 0;

		_TempArr = new T[NewLenght];

		if (NewLenght < _Length)
			_Length = NewLenght;

		for (int i = 0; i < _Length; i++)
		{
			_TempArr[i] = arr[i];
		}

		_Length = NewLenght;
		delete[] arr;
		arr = _TempArr;
	}

	T GetItem(int Index)
	{
		return arr[Index];
	}

	void Reverse()
	{
		_TempArr = new T[_Length];

		for (int i = 0; i < _Length; i++)
		{
			_TempArr[i] = arr[_Length - 1- i];
		}

		delete[] arr;
		arr = _TempArr;
	}

	void Clear()
	{
		_Length = 0;
		_TempArr = new T[0];
		delete[] arr;
		arr = _TempArr;
	}

	bool DeleteItemAt(int Index)
	{
		if (Index >= _Length || Index < 0)
			return false;


		_Length--;

		_TempArr = new T[_Length];

		//copy all before index
		for (int i = 0; i < Index; i++)
		{
			_TempArr[i] = arr[i];
		}

		//copy all after index
		for (int i = Index+1; i < _Length+1; i++)
		{
			_TempArr[i - 1] = arr[i];
		}
		
		delete[] arr;
		arr = _TempArr;
		return true;
	}

	void DeleteFirstItem()
	{
		 DeleteItemAt(0);
	}

	void DeleteLastItem()
	{
		 DeleteItemAt(_Length-1);
	}

	int Find(T Value)
	{
		for (int i = 0; i < _Length; i++)
		{
			if (arr[i] == Value)
				return i;
		}

		return -1;
	}

	bool DeleteItem(T Value)
	{
		int Index = 0;
		Index = Find(Value);

		if (Index == -1)
			return false;
		
		DeleteItemAt(Index);
    	return true;
	}

	void InsertAt(int Index, T Value)
	{
	/*	if (Index >= 0 || Index > _Length)
			return;*/

		_Length++;

		_TempArr = new T[_Length];

		
		for (int i = 0; i < Index; i++)
		{
			_TempArr[i] = arr[i];
		}

		_TempArr[Index] = Value;

		for (int i = Index + 1; i < _Length-1; i++)
		{
			_TempArr[i +1] = arr[i];
		}
		delete[] arr;
		_TempArr = arr;

	}

	void PrintList()
	{
		for (int i = 0; i < _Length; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
	}

};


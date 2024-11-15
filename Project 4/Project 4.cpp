// Project 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "clsDynamicArray.h"

int main()
{
    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty: " << MyDynamicArray.IsEmpty();
    cout << "\nSize: " << MyDynamicArray.Size();

    cout << "\nArray: ";
    MyDynamicArray.PrintList();

    /*MyDynamicArray.Resize(2);
    cout << "\nArray: ";
    MyDynamicArray.PrintList();

    MyDynamicArray.Resize(10);
    cout << "\nArray: ";
    MyDynamicArray.PrintList();*/

  /*  cout << "\nGet Item: " << MyDynamicArray.GetItem(2);

    MyDynamicArray.Reverse();
    cout << "\nReverse Array: ";
    MyDynamicArray.PrintList();

    MyDynamicArray.Clear();
    MyDynamicArray.PrintList();*/

    /*MyDynamicArray.DeleteFirstItem();
    cout << "\nArray: ";
    MyDynamicArray.PrintList(); 

    MyDynamicArray.DeleteLastItem();
    cout << "\nArray: ";
    MyDynamicArray.PrintList();*/

  /*  int Index = MyDynamicArray.Find(10);

    if (Index == -1)
        cout << "\nItem was not found :-(\n";
    else
        cout << "\n30 is found at index : " << Index;

    MyDynamicArray.DeleteItem(50);
    cout << "\n\nArray Item after deleting 30 :";
    cout << "\nArray Size : " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintList();*/

    MyDynamicArray.InsertAt(2, 300);

    cout << "\nArray Size : " << MyDynamicArray.Size() << endl;
    MyDynamicArray.PrintList();
}


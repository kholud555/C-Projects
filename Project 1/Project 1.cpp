

#include <iostream>
#include "clsDbLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <int> MydblLinkedList;

    if (MydblLinkedList.IsEmpty())
        cout << "\n\nYes, List is empty.\n";
    else
        cout << "\n\nNo, List is not empty.\n";

    MydblLinkedList.InsertAtBegining(5);
    MydblLinkedList.InsertAtBegining(4);
    MydblLinkedList.InsertAtBegining(3);
    MydblLinkedList.InsertAtBegining(2);
    MydblLinkedList.InsertAtBegining(1);

   cout << "\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    /*clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);

    if (N1 != NULL)
        cout << "\nNode with value 2 is found :-)\n";
    else
        cout << "\nNode is not found :-(\n";

    MydblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end:\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
    MydblLinkedList.DeleteNode(N2);
    cout << "\nAfter Deleting 4:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteFirstNode();
    cout << "\nAfter Deleting First Node:\n";
    MydblLinkedList.PrintList();

    cout << "\nAfter Deleting Last Node:\n";
    MydblLinkedList.DeleteLastNode();
    MydblLinkedList.PrintList();*/

   /* if (MydblLinkedList.IsEmpty())
        cout << "\n\nYes, List is empty.\n";
    else
        cout << "\n\nNo, List is not empty.\n";*/

  /*  MydblLinkedList.Clear();*/

   /* cout << "\nThe Number Of the Linked List = " << MydblLinkedList.Size();*/

    MydblLinkedList.Reverse();

    cout << "\nLinked List Content:\n";
    MydblLinkedList.PrintList();


   
}

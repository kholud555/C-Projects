#pragma once
#include <iostream>
using namespace std;
template <class T>
class clsDblLinkedList
{
protected:
    int _Size = 0;
public:
    class Node {
    public:
		T value;
		Node* next;
		Node* prev;
	};

    Node* head = NULL;

    
   
    void InsertAtBegining(T Value)
    {
       
        Node* new_node = new Node();

        new_node->value = Value;
        new_node->next = head;
        new_node->prev = NULL;

        if (head != NULL)
        {
            head->prev = new_node;
        }

        head = new_node;
        _Size++;
       
    }

    Node* Find(T Value)
    {
        Node* Current = head;
        while (Current != NULL) {

            if (Current->value == Value)
                return Current;


            Current = Current->next;
        }

        return NULL;

    }

    void InsertAfter(Node* Prev_node,T Value)
    {
        if (Prev_node == NULL)
        {
            cout << "\n The given pervious node cann't be null";
            return;
        }

        Node* new_node = new Node();

        new_node->value = Value;
        new_node->next = Prev_node->next;

        Prev_node->next = new_node;
        _Size++;
    }

    void InsertAtEnd(T Value)
    {
        Node* new_node = new Node();

        new_node->value = Value;

        if (head == NULL)
        {
            new_node->prev = NULL;
            head = new_node;
            
        }
        else {
            Node* Current = head;
            while (Current->next != NULL)
            {
                Current = Current->next;
            }

            Current->next = new_node;
            new_node->next = NULL;
            new_node->prev = Current;


        }
        _Size++;
    }

    void DeleteNode(Node*& NodeToDelete)
    {
        if (head == NULL || NodeToDelete == NULL)
            return;

        if (head == NodeToDelete)
            head = NodeToDelete->next;

        if (NodeToDelete->prev != NULL)
            NodeToDelete->prev->next = NodeToDelete->next;

        if (NodeToDelete->next != NULL)
            NodeToDelete->next->prev = NodeToDelete->prev;

        delete NodeToDelete;
        _Size--;

    }

   void DeleteFirstNode()
    {
        if (head == NULL) {
            return;
        }
        Node* Temp = head;

        head = head->next;

        if (head != NULL) {
            head->prev = NULL;
        }
           

        delete Temp;
        _Size--;
    }

   void DeleteLastNode()
   {
       if (head == NULL)
       {
           return;
       }

       if (head->next == NULL)
       {
           delete head;
           head = NULL;
           _Size--;
           return;
       }


       Node* Current = head;
       while (Current->next->next != NULL)
       {
           Current = Current->next;
       }

       Node* Temp = Current->next;

       Current->next = NULL;

       delete Temp;
       _Size--;
   }

   int Size()
   {
       return _Size;
   }

   bool IsEmpty()
   {
       return(_Size == 0 ? true : false);
   }

   void Clear()
   {
       while (_Size > 0)
       {
           DeleteFirstNode();

       }
   }

   void Reverse()
   {
       Node* Current = head;
       Node* temp = nullptr;
       while (Current != nullptr)
       {
           temp = Current->prev;
           Current->prev = Current->next;
           Current->next = temp;
           Current = Current->prev;
       }

       if (temp != nullptr)
           head = temp->prev;
   }

   Node* GetNode(int Index)
   {

       int Counter = 0;

       if (Index > _Size - 1 || Index < 0)
           return 0;

       Node* Current = head;
       while (Current != NULL && (Current->next != NULL)) {

           if (Counter == Index)
               break;

           Current = Current->next;
           Counter++;

       }

       return Current;
   }

   T GetItem(int Index)
   {
       Node* ItemNode = GetNode(Index);

       if (ItemNode == NULL)
       {
           return NULL;
       }
       else {
           return ItemNode->value;
       }         
   }

   bool UpdateItem(int Index, T NewValue)
   {
       Node* Item = GetNode(Index);
       if (Item != NULL)
       {
           Item->value = NewValue;
           return true;
       }
       else
       {
           return false;
       }
       
   }

   bool InsertAfter(int Index, T NewValue)
   {
       Node* ItemNode = GetNode(Index);

       if (ItemNode != NULL)
       {
           InsertAfter(ItemNode, NewValue);
           return true;
       }
       else
       {
           return false;
       }
           

       
   }

    void PrintList()
    {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->value << " ";
            temp = temp->next;
        }
    }
};










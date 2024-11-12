#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP

#include "Node.cpp"
#include <iostream>
using namespace std;

class LinkedList
{
public:
    Node* head = nullptr;
    Node* tail = nullptr;
    int count = 0;

    bool isEmpty()
    {
        return head == nullptr;
    }

    int size()
    {
        return count;
    }

    void Append(int data)
    {
        Node* newnode = new Node(data);

        if (isEmpty())
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->Next = newnode;
            tail = newnode;
        }
        count += 1;
    }

    void Remove(int data)
    {
        if (isEmpty())
        {
            cout << "List Empty\n";
            return;
        }

        // If the node to be removed is the head
        if (head->data == data)
        {
            Node* temp = head;
            head = head->Next;
            delete temp;
            count -= 1;

            // If the list becomes empty after removal
            if (head == nullptr)
                tail = nullptr;

            return;
        }

        Node* previous = head;
        Node* current = head->Next;

        while (current != nullptr)
        {
            if (current->data == data)
            {
                previous->Next = current->Next;
                // If the node to be removed is the tail
                if (current == tail)
                {
                    tail = previous;
                }
                delete current;
                count -= 1;
                return;
            }

            previous = current;
            current = current->Next;
        }
    }

    void print()
    {
        Node* current = head;

        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->Next;
        }

    }

    int  find(int value){

        Node* current = head;

        while(current != nullptr)
        {
            if(current->data == value)
            {
                cout << current->data;
            }
            
            current = current->Next;
        }

        return -1;

        
    }
    
};

#endif

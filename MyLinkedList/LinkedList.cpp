#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP

#include "Node.cpp"

#include<iostream>
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

            // first i create a new node , and pass the value that the user is inputing into the constructor.

            Node* newnode = new Node(data);

            // case 1 if the list is Empty.
             // assign the head and tail to that value

            if(isEmpty())
            {
                head = newnode;
                tail = newnode;
                count+= 1;

            }

            // else if it is not empty. then we assign that value to tail's next . and set it to tail. 

            else{

                tail->Next = newnode;
                tail = newnode;
                count += 1;
            }



        }

        void Remove(int data)
        {
            Node* current = head;

            while(current->data != data || current == nullptr){
                Node* temp = current->Next; // value we looking for
                Node* found = temp->Next;

                if(current->Next->data == data)
                {
                    
                    current->Next = temp;
                    delete temp;

                }

                current = current->Next;
            }

        }

        void print()
        {
            Node* current = this->head;

            while(current != nullptr)
            {
                cout << current->data << endl;
                current = current->Next;
                
            }


        }
};




#endif
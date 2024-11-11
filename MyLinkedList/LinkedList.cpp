#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP

#include "Node.cpp"

using namespace std;

class LinkedList
{
    public:

        Node head;
        Node tail;
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
            Node* newnode(data);

            if(isEmpty)
            {
                head == newnode;

            }

            else{

                tail.Next = newnode;
                newnode.Next = tail;
            }


        }
}




#endif 
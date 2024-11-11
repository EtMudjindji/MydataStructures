#ifndef NODE_H
#define NODE_H

class Node
{
public:
    int data;
    Node* Next;  // to hold the next address

    Node(int value)
    {
        this->data = value; 
        Next = nullptr; // Initialize Next to nullptr
    }
};

#endif

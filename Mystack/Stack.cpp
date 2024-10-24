#ifndef STACK_H
#define STACK_H

#include "Node.cpp"
#include <iostream>

using namespace std;

class MyStack {
    public:
        Node* Top = nullptr;

        bool isEmpty() {
            return Top == nullptr;
        }

        void push(int value) {
            Node* newnode = new Node(value);
            if (isEmpty()) {
                Top = newnode;
            } else {
                newnode->next = Top;
                Top = newnode;
            }
        }

        int stackSize() {
            int i = 0;
            Node* current = Top;
            while (current != nullptr) {
                i++;
                current = current->next;
            }
            return i;
        }

        int pop() {
            if (isEmpty()) {
                // Add your own error handling here if needed
                return -1; // or some indication that the stack is empty
            }
            int value = Top->data;
            Node* temp = Top;
            Top = temp->next;
            delete temp;
            return value;
        }

        void printValues() {
            int i = 0;
            Node* current = Top;
            while (current != nullptr) {
                
                    cout << current->data << endl;
                    
                
                i++;
                current = current->next;
            }
        }
};




#endif 




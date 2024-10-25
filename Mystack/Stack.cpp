#ifndef STACK_H
#define STACK_H

#include "Node.cpp"
#include <iostream>

using namespace std;

template <typename T>


class MyStack {
    public:
        Node<T>* Top = nullptr;

        bool isEmpty() {
            return Top == nullptr;
        }

        void push(T value) {
            Node<T>* newnode = new Node(value);
            if (isEmpty()) {
                Top = newnode;
            } else {
                newnode->next = Top;
                Top = newnode;
            }
        }

        int stackSize() {
            int i = 0;
            Node<T>* current = Top;
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
            T value = Top->data;
            Node<T>* temp = Top;
            Top = temp->next;
            delete temp;
            return value;
        }

        void printValues() {
            Node<T>* current = Top;
            while (current != nullptr) {
                cout << current->data << endl;
                current = current->next;
            }
        }

        T peek(int userInput) {
            int i = 0; 
            Node<T>* currentNode = Top; 
            while (currentNode != nullptr) {
                if (i == userInput) {
                    return currentNode->data;
                }
                currentNode = currentNode->next;
                i++; 
            }
             return -1;
        }

        void changeValueAt(int position,T value)
        {
            Node<T>* current = this->Top;
            
            int i = 0 ;
            if(isEmpty())
            {
               logic_error("sorry stack is empty"); 
            }

            while(current != nullptr)
            {

                if(i == position)
                {
                    current->data = value;
                }
                current = current->next;
                ++i;
            }
        }

        bool Find(T value)
        {
            Node<T>* current = this->Top;

            while(current != nullptr)
            {
                if(current->data == value)
                {
                    return true;
                }

                current = current->next;
            }

            return false;
        }
};

#endif

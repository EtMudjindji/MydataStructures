#ifndef MYSTACKARRAY_H
#define MYSTACKARRAY_H

using namespace std;
#include <iostream>

class MyArrayStack {
    public:
        int size;
        int* Number;
        int top;

        MyArrayStack(int initialSize = 5) : size(initialSize), top(-1) {
            Number = new int[size];
        }

        ~MyArrayStack() {
            delete[] Number;
        }

        bool IsEmpty() {
            return top == -1;
        }

        bool isFull() {
            return top == size - 1; // Correct condition for full stack
        }

        void resize() {
            int newSize = size * 2;
            int* newArray = new int[newSize];
            for (int i = 0; i < size; ++i) {
                newArray[i] = Number[i];
            }
            delete[] Number;
            Number = newArray;
            size = newSize;
            cout << "Stack resized to " << newSize << " elements.\n";
        }

        void push(int data) {
            if (isFull()) {
                resize();
            }
            Number[++top] = data;
        }

    // Peek Function return the value at that position
        void peek(int position)
        {
            return Number[i];
        }

        void printStack() {
            if (IsEmpty()) {
                cout << "Stack is Empty\n";
                return;
            }
            for (int i = 0; i <= top; ++i) {
                cout << Number[i] << endl;
            }
        }
};

#endif

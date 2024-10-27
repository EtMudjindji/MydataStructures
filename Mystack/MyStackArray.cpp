#ifndef MYSTACKARRAY_H
#define MYSTACKARRAY_H

using namespace std;
#include <iostream>
template<typename T>

class MyArrayStack {
    public:
        int size;
        T* Number;
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

        void push(T data) {
            if (isFull()) {
                resize();
            }
            Number[++top] = data;
        }

    // Peek Function return the value at that position
        T peek(int position)
        {
            return Number[position];
        }

        int stackSize()
        {
            if(!IsEmpty())
            {
                return top += 1;
            }

            else {
                return -1;
            }
        }
        T pop()
        {
            return Number[top+1];
            top -= 1;
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

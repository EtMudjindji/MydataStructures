#include<iostream>

using namespace std;

#include "Stack.cpp"

int main()
{
    MyStack stack;

    if(stack.isEmpty() == true)
    {
        cout << "Empty " << endl;
    }

    else{
        cout << "Stack not empty\n";
    }
    

    stack.push(5);
    //stack.pop(4);
    stack.push(3);
    stack.push(2);

    stack.printValues();


    return 0;

    // simple stack file. 
}
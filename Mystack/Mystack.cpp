#include <iostream>
using namespace std;
#include "Stack.cpp"

int main() {
    MyStack stack;
    stack.push(3);
    stack.push(2);
    stack.push(10);


    cout << stack.pop();

  //  cout << stack.peek(0); // This should print 2, the top of the stack
    return 0;
}

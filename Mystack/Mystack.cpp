#include <iostream>
using namespace std;
#include "Stack.cpp"

int main() {
    MyStack stack;
    /*
                    stack.push(3);
                stack.push(2);
                stack.push(10);
                stack.pus


                cout << stack.pop();

            //  cout << stack.peek(0); // This should print 2, the top of the stack
    */

   for(int i = 0 ; i < 25; ++i)
   {
        stack.push(i);
   }
/**
   for(int i = 0 ; i  < stack.stackSize(); ++i)
   {
    cout << stack.peek(i) << endl;
   }
   

   cout << stack.stackSize() << endl;
   int value = stack.pop();
   //stack.pop();

   cout << value << endl;

   //cout << stack.stackSize() << endl;

   */

  cout << stack.peek(2) << endl;

  stack.changeValueAt(2,100);
  cout << stack.peek(2);
    
    return 0;
}

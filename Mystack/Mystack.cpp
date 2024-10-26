// Problem
/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every close bracket has a corresponding open bracket of the same type.

Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false

Example 4:
Input: s = "([])"
Output: true
*/

#include <iostream>
using namespace std;
#include "Stack.cpp"
#include "MyStackArray.cpp"
#include <string>
#include <vector>

/*
bool isValid(string s) {
    MyStack<char> Newstack; // Stack to keep track of opening brackets

    // Loop through each character in the string
    for (char current : s) {
        // Push opening brackets onto the stack
        if (current == '(' || current == '[' || current == '{') {
            Newstack.push(current);
        } else if (current == ')' || current == ']' || current == '}') {
            // If a closing bracket is found and the stack is empty, return false
            if (Newstack.isEmpty()) return false;

            // Pop the top element from the stack
            char top = Newstack.pop();

            // Check if the popped element matches the corresponding closing bracket
            switch (current) {
                case ')':
                    if (top != '(') return false; // If not matching, return false
                    break;
                case ']':
                    if (top != '[') return false; // If not matching, return false
                    break;
                case '}':
                    if (top != '{') return false; // If not matching, return false
                    break;
                default:
                    return false; // Invalid character, return false
            }
        }
    }

    // After processing all characters, check if the stack is empty
    return Newstack.isEmpty(); // If empty, all brackets are balanced
}

*/

int main() {
    /*
    
     Test cases
    string s1 = "(]";
    cout << (isValid(s1) ? "True\n" : "False\n");

    string s2 = "()";
    cout << (isValid(s2) ? "True\n" : "False\n");

    string s3 = "()[]{}";
    cout << (isValid(s3) ? "True\n" : "False\n");

    string s4 = "([])";
    cout << (isValid(s4) ? "True\n" : "False\n");
    */

   MyArrayStack mystack1;

   mystack1.push(100);
    mystack1.push(10);
     mystack1.push(50);

cout << mystack1.peek(0);

if(mystack1.IsEmpty() == true)
{
    cout << "Stack is Empty\n";
}
  
else{

    cout << "Stack is not Empty\n";
}
//cout << mystack1.Number[0];

mystack1.printStack();

    return 0;
}

#include<iostream>

using namespace std;
#include "LinkedList.cpp"

int main()
{
    LinkedList mylist;

    mylist.Append(5);
    mylist.Append(20);

    mylist.print();
    mylist.Remove(5);

    mylist.print();
   // Node node1(5);
    

    //cout << node1.data << endl;

    return 0;
}

// In this file, I will implement my own personal linked list.

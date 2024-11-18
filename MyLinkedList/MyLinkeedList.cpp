#include<iostream>

using namespace std;
#include "LinkedList.cpp"

int main()
{
    LinkedList mylist;

    mylist.Append(20);
    mylist.Append(5);
    mylist.Append(100);

    //mylist.Remove(5);
    mylist.sortList();

    mylist.print();

    //cout << mylist.find(5);

    

    return 0;
}

// In this file, I will implement my own personal linked list.

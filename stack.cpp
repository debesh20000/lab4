#include<iostream>
#include "ll.cpp"
//c++ header file learn it
using namespace std;

class Stack
{
public:
  Node * top;
  LinkedList lol;
    Stack ()
  {
    top = lol.head;
  }
  //insert void in the top
  void push (int value)
  {
    //void insertAt(int pos,int value){
    lol.insertAt (1, value);
    //top = new_head
    top = lol.head;
  }
  //delete the top element
  void pop ()
  {
    //void deleteAt(int pos)
    lol.dltAt (1);
    //top = new_head;
    top = lol.head;
  }
  //checks whether the stack is empty
  bool isEmpty ()
  {
    if (top == NULL)
      return true;
    return false;
  }
  //count the number of items in the stack
  int size ()
  {
    return lol.countItem ();
  }
  //display the top eelement
  void topDisplay ()
  {

  }
  void display ()
  {
    l1.display ();
  }

};

int
main ()
{
  Stack sol;

  cout << sol.isEmpty () << endl;
  for (int i = 1; i < 5; i++)
    {
      sol.push (i);
    }
  sol.display ();
  sol.pop ();
  sol.display ();
  sol.push (8);
  sol.push (9);
  sol.display ();
  cout << "The number of elements in sol" << sol.size () << endl;
  cout << sol.isEmpty () << endl;

}
#include<iostream>
using namespace std;

class QueueArr
{
public:
  int front, end;
  int Queue[];
  
    QueueArr ()
  {
    front = -1;
    end = -1;
    Queue[0];
  }
  void enqueue (int x)
  {
    end++;
    Queue[end] = x;


  }
  void dequeue ()
  {


    if (end == -1)
      {
	cout << "there has to an element to pop one" << endl;
      }
    else
      {
	int k = end;
	int l = k-1;
	while (k != 0)
	  {
	    int a = Queue[end];
	    Queue[end] = Queue[l];
	    Queue[l] = a;
	    k--;
	  }
	end--;
      }


  }
 
  int size ()
  {
    return end + 1;
  }
  void display ()
  {
    for (int i = 0; i < (end + 1);)
      {
	cout << Queue[i] << "->";
	i++;
      }
        cout<<endl;
  }

};

int
main ()
{
  QueueArr q1;

  q1.enqueue (1);
  q1.enqueue (2);
  q1.enqueue (3);
  q1.enqueue (4);
  q1.display ();
  q1.dequeue ();
  q1.display ();
  cout << "no. of elements is " << q1.size () << endl;


}
#include <iostream>
#include <queue>

using namespace std;

void displaypq(priority_queue<int> pq)
{
  priority_queue<int> pqueue = pq;
  while (!pqueue.empty())
  {
    cout << pqueue.top() <<" ";
    pqueue.pop();
  }
  cout <<endl;
}

int main()
{
  priority_queue<int> pq;
  pq.push(1);
  pq.push(3);
  pq.push(5);
  pq.push(7);
  pq.push(9);

  cout << "Size of the queue: " << pq.size()<<endl;
  cout << "Top element of the queue: " << pq.top()<<endl;
  cout << "The priority queue pq is : ";
  displaypq(pq);

  cout << "Priority queue, after pq.pop() operation : ";
  pq.pop();
  displaypq(pq);

  return 0;
}
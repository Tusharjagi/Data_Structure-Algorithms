#include <iostream>
using namespace std;
 
#define SIZE 1000
 
class Queue
{
    int *arr;       
    int capacity;   
    int front;      
    int rear;       
    int count;     
 
public:
    Queue(int size = SIZE){   
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0; 
    }
    
    ~Queue()
    {
        delete[] arr;
    }                
 
    int dequeue()
    {
        if (isEmpty())
    {
        cout << "Underflow";
        exit(EXIT_FAILURE);
    }
 
    int x = arr[front];
    cout << "Removing " << x << endl;
 
    front = (front + 1) % capacity;
    count--;
 
    return x;
    }


    void enqueue(int x)
    {
        if (isFull())
    {
        cout << "Overflow";
        exit(EXIT_FAILURE);
    }
 
    cout << "Inserting " << x << endl;
 
    rear = (rear + 1) % capacity;
    arr[rear] = x;
    count++;

    }

    int peek()
    {
        if (isEmpty())
        {
        cout << "Underflow";
        exit(EXIT_FAILURE);
        }
        return arr[front];
    }

    int size()
    {
        return count;
    }

    bool isEmpty()
    {
        return (size() == 0);
    }

    bool isFull()
    {
        return (size() == capacity);
    }
    
};
  
int main()
{

    Queue q(5);
 
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
 
    cout << "The front element is " << q.peek() << endl;
    q.dequeue();
 
    q.enqueue(4);
 
    cout << "The queue size is " << q.size() << endl;
 
    q.dequeue();
    q.dequeue();
    q.dequeue();
 
    if (q.isEmpty()) {
        cout << "The queue is empty"<<endl;
    }
    else {
        cout << "The queue is not empty"<<endl;
    }
 
    return 0;
}
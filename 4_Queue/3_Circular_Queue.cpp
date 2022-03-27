#include<iostream>
using namespace std; 
   
class Queue { 
    public:

    int rear;
    int front; 
    int size; 
    int *circular_queue; 
   
    Queue(int sz) { 
       front = rear = -1; 
       size = sz; 
       circular_queue = new int[sz]; 
    } 
   void enQueue(int elem); 
    int deQueue(); 
    void displayQueue(); 
}; 
   
void Queue::enQueue(int elem) 
{ 
    if ((front == 0 && rear == size-1) || (rear == (front-1)%(size-1)))  { 
        cout<<"Queue is Full"; 
        return; 
    } 
    else if (front == -1) {    
         front = rear = 0; 
        circular_queue[rear] = elem; 
    } 
   else if (rear == size-1 && front != 0) { 
        rear = 0; 
        circular_queue[rear] = elem; 
    } 
    else {  
        rear++; 
        circular_queue[rear] = elem; 
    } 
}

int Queue::deQueue() 
{ 
    if (front == -1)  { 
        cout<<"Queue is Empty"; 
        return -1; 
    } 
   
    int data = circular_queue[front]; 
    circular_queue[front] = -1; 
    if (front == rear)  { 
        front = -1; 
        rear = -1; 
    } 
    else if (front == size-1) 
        front = 0; 
    else
        front++; 
   
    return data; 
} 
  
void Queue::displayQueue() 
{ 
    if (front == -1) { 
        cout<<"Queue is Empty"; 
        return; 
    } 
    cout<<endl;
    cout<<"Circular Queue elements: "; 
    if (rear >= front) { 
        for (int i = front; i <= rear; i++) 
        {
            cout<<circular_queue[i]<<" "; 
        }
            
    } 
    else  { 
        for (int i = front; i < size; i++) 
        {
            cout<<circular_queue[i]<<" "; 
        }    
   
        for (int i = 0; i <= rear; i++) 
        {
            cout<<circular_queue[i]<<" ";
        }
    
             
    } 
    cout<<endl;
} 
   
int main() 
{ 
    Queue pq(5); 
   
    pq.enQueue(2); 
    pq.enQueue(4); 
    pq.enQueue(6); 
    pq.enQueue(8); 
   
    pq.displayQueue(); 
    
    cout<<"Element Dequeued = "<<pq.deQueue()<<endl; 
    cout<<"Element Dequeued = "<<pq.deQueue()<<endl; 
   
    pq.displayQueue(); 
   
    pq.enQueue(10); 
    pq.enQueue(12); 
    pq.enQueue(14); 
   
    pq.displayQueue(); 
   
    pq.enQueue(10); 
    return 0; 
}
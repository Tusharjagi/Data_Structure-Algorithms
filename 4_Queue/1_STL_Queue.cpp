#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    queue<int> q;

    q.push(11);
    cout<<"Front of q is : "<<q.front()<<endl;
    q.push(15);
    cout<<"Front of q is : "<<q.front()<<endl;
    q.push(16);
    cout<<"Back of q is : "<<q.back()<<endl;
    q.push(13);
    cout<<"Back of q is : "<<q.back()<<endl;

    cout<<"Size of queue is :: "<< q.size() <<endl;

    q.pop();
    q.pop();
    q.pop();
    q.pop();

    cout<<"Size element in queue :: "<< q.size()<<endl;



    if(q.empty())
    {
        cout<<"Queue is empty "<<endl;
    }
    else
    {
        cout<<"Queue is not empty "<<endl;
    }
    
    return 0;
}
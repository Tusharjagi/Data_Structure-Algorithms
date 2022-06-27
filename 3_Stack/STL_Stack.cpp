#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// LIFO

int main(){
    stack<int> s;

    s.push(2);
    s.push(5);

    s.pop();

    cout<< "Print top element "<<s.top() <<endl;

    if(s.empty()){
        cout<<"Stack is Empty "<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }


    
    return 0;
}
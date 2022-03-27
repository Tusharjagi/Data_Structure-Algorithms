#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Stack
{
    // Properties
    public:
        int *arr;
        int top;
        int size;

    // Behaviour
    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1 ;
    }

    void push(int element)
    {
        if(size - top > 1)
        {
            top ++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow "<<endl;
        }

    }

    void pop ()
    {
        if(top >= 0)
        {
            top--;
        }
        else
        {
            cout<<"Stack UnderFlow "<<endl;
        }

    }
    
    int peek()
    {
        if(top >= 0 )
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is Empty "<<endl;
            return -1;
        }
        

    }

    bool Empty()
    {
        if(top == -1)
            return true;
        else
            return false;

    }

};

int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(65);

    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;

    if(st.Empty())
    {
        cout<<"Stack is Empty "<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }



    
    return 0;
}
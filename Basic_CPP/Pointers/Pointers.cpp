#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int num = 5;    

    cout<<num<<endl;


    cout<<"Address of num is "<<&num<<endl;

    int *ptr = &num;

    cout <<"Value is :: " << *ptr << endl;
    cout <<"Address of ptr :: " << ptr << endl;

    double d = 45.3;
    double *ptr2 = &d;

    cout<<"Address is :: "<<&d<<endl;
    cout<<"Value is :: "<<ptr2<<endl;


    int i = 5;
    int* p =  0;
    p = &i;

    cout<<&i<<endl;
    cout<<p<<endl;

    // copy pointer
    int *q = p ;
    cout<<q <<" -- "<<p<<endl;
    cout<<*q <<" -- "<<*p<<endl;
    
    return 0;
}
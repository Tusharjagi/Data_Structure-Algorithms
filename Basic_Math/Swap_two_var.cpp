#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the value of a :: ";
    cin>>a;
    cout<<"Enter the value of b :: ";
    cin>>b;
    
    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"Value of a :: "<<a<<endl;
    cout<<"Value of b :: "<<b<<endl;

    return 0;
}

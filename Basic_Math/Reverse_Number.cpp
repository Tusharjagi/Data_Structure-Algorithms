#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the any Positive Number :: ";
    int n, rem, rev =0;
    cin>>n;
    while (n!=0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n/= 10;

    }
    cout<<"Reverse of those number is :: "<<rev<<endl;
    
    return 0;
}
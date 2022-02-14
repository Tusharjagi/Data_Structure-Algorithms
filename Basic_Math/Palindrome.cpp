#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the any positive number :: ";
    int n, temp, rem, rev = 0;
    cin>>n;
    temp = n;

    while (n!=0)
    {
        rem = n % 10;
        rev = rev* 10 + rem;
        n/= 10;

    }
    if (rev == temp)
    {
        cout<<"This is palindrome. "<<endl;
    }
    else 
    {
        cout<<"Not a Palindrome"<<endl;
    }
    

    return 0;
}
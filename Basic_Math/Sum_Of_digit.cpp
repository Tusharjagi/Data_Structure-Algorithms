#include<iostream>
using namespace std;

int main(){
    int n,rem, sum = 0;
    cout<<"Enter the any positive Number :: ";
    cin>>n;

    while (n!=0)
    {
        rem = n % 10;
        sum = sum + rem;
        n/= 10;

    }
    cout<<"Sum of digit is :: "<<sum;
    
    return 0;
}
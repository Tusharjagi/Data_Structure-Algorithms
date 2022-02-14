#include<iostream>
using namespace std;

int main(){
    int n,rem,temp, sum =0,pal=0;
    cout<<"Enter the any positive number :: ";
    cin>>n;
    temp = n;
    while (temp!=0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem ;
        // sum +=  rem * rem * rem ;
        temp/=10;

    }
    if (sum == n)
    {
        cout<<"Artmstrong "<<endl;
    }
    else
    {
        cout<<"Not a Armstrong "<<endl;
    }
    
    return 0;
}
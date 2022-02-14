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
        sum +=  rem * rem * rem ;
        temp/=10;

    }
    if (sum == n)
    {
        cout<<"It is Artmstrong Number "<<endl;
    }
    else
    {
        cout<<"Sorry !!! Not a Armstrong "<<endl;
    }
    
    return 0;
}
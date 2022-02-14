#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the Postive Number :: ";
    int n, rem, arm=0, temp,sum=0;
    cin>>n;
    temp = n;

    while (n!=0)
    {
        rem = n % 10;
        arm = rem * rem * rem ;
        sum = sum + arm;
        n/=10;

    }
    if (temp == sum)
    {
        cout<<"This is armstrong "<<endl;
    }
    else
    {
        cout<<"Sorry !!!!! This is not armstrong number "<<endl;
    }
    

    return 0;
}
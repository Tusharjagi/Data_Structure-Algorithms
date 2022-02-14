#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the any Positive Number :: ";
    cin>>n;
    if (n==0||n==1)
    {
       cout<<"The Smallest Prime Number is 2. "<<endl;
    }
    
    for (i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<"Not a Prime Number."<<endl;
            break;
        }
        
    }

    if (n==i)
    {
        cout<<"Prime number. "<<endl;
    }
    
    

    return 0;
}
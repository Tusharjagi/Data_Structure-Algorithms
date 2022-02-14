#include<iostream>
using namespace std;

int main(){
    int n, first=0, second=1, next;
    cout<<"Enter the how many series you want :: ";
    cin>>n;
    for (int i = 0; i <= n ; i++)
    {
        cout<<first<<" ";
        next = first + second;
        first = second;
        second = next;

    }
    
    return 0;
}
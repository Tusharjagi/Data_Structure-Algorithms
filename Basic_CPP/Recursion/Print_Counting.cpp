#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Count(int n)
{
    // Base Case
    if(n==0)
    {
        return;
    }
    // Recursive call
    Count(n-1);

    cout<< n <<" ";

}

int main(){
    int n;
    cin>>n;
    Count(n);
    return 0;
}
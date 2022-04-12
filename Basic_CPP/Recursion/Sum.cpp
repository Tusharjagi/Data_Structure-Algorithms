#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int SUM(int* arr, int n)
{
    // Base Case
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return arr[0];
    }

    // RC
    // int remainingPart = SUM(arr + 1, n-1);
    // int sum = arr[0] + remainingPart;
    return arr[0] + SUM(arr + 1, n-1) ;


}

int main(){
    int arr[] = {4,4,4};
    int size = 3;
    int ans = SUM(arr,size);
    cout<<ans<<" ";
    
    return 0;
}
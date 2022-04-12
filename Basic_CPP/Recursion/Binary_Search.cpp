#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(int* arr, int s, int e, int k )
{
    // Base Case
    
    // Element Not Found 
    if(s > e)
        return 0;

    int mid = s + (e - s)/2;

    // Element Found
    if(arr[mid] == k)
        return 1;

    if(arr[mid] < k)
    {
        return BinarySearch(arr,mid+1,e, k);
    }
    else{
        return BinarySearch(arr,s,mid-1,k);
    }

}

int main(){
    int arr[6]  = {12,26,37,43,58};
    int size = 6;
    int key = 26;

    cout<<"Present or Not "<<BinarySearch(arr,0,5,key)<<endl;
   

    return 0;
}
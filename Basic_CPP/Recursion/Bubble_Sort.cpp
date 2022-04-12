#include<iostream>
using namespace std;

void Bubble_Sort(int* arr, int n)
{
    // Base Case
    if(n == 0 || n == 1)
    {
        return;
    }

    for(int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1] );
        }
    }

    // Revursive Call

    Bubble_Sort(arr,n-1);
}

int main(){

    int arr[5] = {9,5,3,0,2};
    Bubble_Sort(arr,5);

    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    return 0;
}
#include<iostream>
using namespace std;

void printArray (int arr[] , int size)
{
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    
}

void Insertion_Sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i-1;
        while (current < arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
        
    }
    
    
}

int main(){
    int arr[] = {12,45,23,51,19,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    Insertion_Sort(arr, size);
    printArray(arr,size);
    return 0;
}
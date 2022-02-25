#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Merge_Sort(int arr[], int size)
{
   
    
}

int main(){
    int arr[] = {12, 45, 23, 51, 19, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    Merge_Sort(arr, size);
    printArray(arr, size);
    return 0;
}
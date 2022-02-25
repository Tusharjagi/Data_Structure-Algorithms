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

void Bubble_Sort(int arr[], int size)
{
    int count = 1;
    while (count < size)
    {
        for (int i = 0; i < size-count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
            
        }
        count ++;
        
    }
    
}

int main(){
    int arr[] = {12, 45, 23, 51, 19, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Unsorted Array :: ";
    printArray(arr, size);
    Bubble_Sort(arr, size);
    cout<<"Sorted Array :: ";
    printArray(arr, size);
    return 0;
}
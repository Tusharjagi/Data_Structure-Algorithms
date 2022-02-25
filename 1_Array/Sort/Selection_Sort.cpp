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

void Selection_Sort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            
        }
        
    }
    
}

int main(){
    int arr[] = {12, 45, 23, 51, 19, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Unsorted Array :: ";
    printArray(arr, size);
    Selection_Sort(arr, size);
    cout<<"Sorted Array :: ";
    printArray(arr, size);

    return 0;
}
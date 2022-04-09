#include<iostream>
using namespace std;

void Printarray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

void insertion_Sort(int arr[],int size)
{
    for (int i = 1; i < size; i++)
    {
        int j;
        int temp = arr[i];
        for (j = i -1 ; j >= 0; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+ 1] = arr[j];
            }
            else{
                break;
            }         
        }
        arr[j+ 1] =temp;
    }
    
}

int main(){
    int arr[] = {23,24,64,22,76,80};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertion_Sort(arr,size);
    Printarray(arr,size);
    
    return 0;
}
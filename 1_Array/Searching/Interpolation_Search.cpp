#include<iostream>
using namespace std;

int interpolation_Search(int arr[], int key, int arrSize)
{
    int start = 0;
    int end = arrSize - 1 ;
    int position;

    while (start <= end)
    {
        position = start + ((key-arr[start])/(arr[end]-arr[start])) * (end - start);
        if (arr[position] == key)
        {
            return position;
        }
        else if (arr[position] > key)
        {
            end = position - 1;
        }
        else
        {
            start = position + 1;
        }
        
        
    }
    return - 1;


}

int main(){
// 1. sorted array 
// 2. Uniformly distributed
    int arr[10] = {10,20,30,40,50,60,70,80,90,100}; 
    int key = 80;
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int result = interpolation_Search(arr, key, arrSize);
    cout<<"Result of index :: "<<result;
     

    
    return 0;
}
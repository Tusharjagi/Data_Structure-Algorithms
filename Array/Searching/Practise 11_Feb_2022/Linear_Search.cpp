#include<iostream>
using namespace std;

int Linear_Search(int arr[], int key, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        if(arr[i]==key)
        {
            return i + 1;
        }
    }
    return -1;
    
}

int main(){
    int arr[8] = {2,5,4,3,1,6,8,9};    
    int key = 4;
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int result = Linear_Search(arr, key, arrSize);
    cout<<"Your Element present at index no. :: "<<result;
    
    return 0;
}
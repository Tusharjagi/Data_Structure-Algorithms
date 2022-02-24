#include<iostream>
using namespace std;

int Binary_Search(int arr[], int key, int arrSize)
{
    int start = 0;
    int end = arrSize -1 ;
    int mid = start + (end- start)/2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
           start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Enter the key :: ";
    int key;
    cin>>key;
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int result = Binary_Search(arr, key, arrSize);
    cout<<"Result :: "<<result;

    
    return 0;
}
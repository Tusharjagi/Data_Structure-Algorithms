#include<iostream>
using namespace std;

void Merge(int *arr, int s, int e)
{
    int mid = s + (e - s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy Values
    int mainArrayIndex = s;
    for(int i = 0; i< len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for(int i = 0; i< len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge 2 Sorted Arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            arr[mainArrayIndex++]= first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void Merge_Sort(int *arr, int s , int e)
{
    // Base case
    if(s >= e)
        return;

    int mid = s + (e - s)/2;

    // Left Part Sort
    Merge_Sort(arr, s,mid);

    // Rigth Part Sort
    Merge_Sort(arr, mid+1, e);

    // Merge 
    Merge(arr,s,e);


}

int main(){
    int arr[5] = {2,5,1,6,9};
    int n = 5;

    Merge_Sort(arr, 0, n-1);

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    
    return 0;
}
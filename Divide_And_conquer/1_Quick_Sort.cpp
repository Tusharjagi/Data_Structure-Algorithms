#include<iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];

    int count = 0;
    for(int i = s+1; i <= e; i++)
    {
        if(arr[i] <= pivot)
        {
            count++;
        }
    }

    // Place pivot at right palce
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // Left and right maintaing
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] < pivot)
        {
            i++;
        }

        while(arr[j] > pivot)
        {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
        return pivotIndex;
    }

}

void quickSort(int *arr, int s, int e)
{
    // Base Case
    if(s >= e)
        return;

    // Partition Array
    int p = partition(arr,s,e);

    // Left part
    quickSort(arr,s, p -1);

    // Rigth Part
    quickSort(arr,p+1,e);
}

int main(){
    int arr[10] = {9,4,2,7,3,1,8,5,6,0};
    int n = 10;

    quickSort(arr,0,n-1);

    for(int i = 0;i< n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
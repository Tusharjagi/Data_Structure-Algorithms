#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int first[len1];
    int second[len2];

    //copyvalues
    int k = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    //merge 2 sorted arrays

    int index1 = 0;
    int index2 = 0;
    k = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }


}

void merge_Sort(int arr[], int s, int e)
{
    //base case
    if (s >= e)
    {
        return;
    }


    int mid = (s + e) / 2;
    //left part sort

    merge_Sort(arr, s, mid);

    //right part sort
    merge_Sort(arr, mid + 1, e);

    //merge

    merge(arr, s, e);
}

int main()
{
    int arr[] = {3,7,0,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    merge_Sort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
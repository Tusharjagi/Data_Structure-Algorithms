#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // place pivot at rigth position
    int pivotINdex = s + cnt;
    swap(arr[pivotINdex], arr[s]);

    // left and rigth
    int i = s, j = e;
    while (i < pivotINdex && j > pivotINdex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotINdex && j > pivotINdex)
        {
            swap(arr[i++], arr[j--]);
        }
        }
    return pivotINdex;
}

void quick_sort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // partition

    int p = partition(arr, s, e);

    // left part sort
    quick_sort(arr, s, p - 1);

    // rigth part sort
    quick_sort(arr, p + 1, e);
}

int main()
{
    int arr[] = {3, 4, 8, 5, 0, 2, 6, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, 0, n - 1);

    printArray(arr, n);

    return 0;
}
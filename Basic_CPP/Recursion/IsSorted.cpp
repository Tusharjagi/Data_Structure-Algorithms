#include<iostream>
using namespace std;

bool isSorted(int *arr, int size)
{
    // Base Case
    if(size == 0 || size == 1)
    {
        return true;
    }

    if(arr[0] > arr[1])
    {
        return false;
    }
    else {
        bool remaningPart = isSorted(arr + 1, size-1);
        return remaningPart;
    }
}

int main(){
    int arr[] = {2,4,5,9,6,8};
    int size = 5;

    bool ans = isSorted(arr,size);

    if(ans){
        cout<< "Array is Sorted "<<endl;
    }
    else{
        cout<<"Array is Not Sorted "<<endl;
    }
    
    return 0;
}
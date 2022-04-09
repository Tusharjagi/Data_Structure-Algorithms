#include<iostream>
using namespace std;

void Bubble_Sort(int arr[], int size){

    for(int i = 1; i < size;i++ )
    {
        for(int j = i-1; j < size-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

}

int PrintArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {5,6,7,0,9,8,4,1,2,3};
    int size = 10;

    PrintArray(arr, size);
    Bubble_Sort(arr,size);
    PrintArray(arr,size);
    return 0;
}
#include<iostream>
using namespace std;

int Linear_Search(int arr[], int input, int Size)
{
    int i;
    for (i = 0; i < Size; i++)
        if(arr[i] == input )
           return i;
    return -1;
    
}

int main(void){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
   
    int input = 10;
    int Size = sizeof(arr)/sizeof(arr[0]);

    int result = Linear_Search(arr, input, Size);

    cout<<"Element present at index :: "<<result<<endl;
        
    
    return 0;
}
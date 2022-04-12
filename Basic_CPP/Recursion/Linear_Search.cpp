#include<iostream>
using namespace std;

int Linear_Search(int* arr, int size, int key)
{
    // Base Case
    if(size == 0)
        return false;

    if(arr[0] == key)
        return true;
    else{
        bool remp = Linear_Search(arr+1, size-1, key);
        return remp;
    }
}

int main(){
    int arr[5] = {3,5,1,2,6};
    int size = 0;
    int key = 4;
    bool ans = Linear_Search(arr, size, key);
    if(ans){
        cout<<"Present "<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }

    


    
    return 0;
}
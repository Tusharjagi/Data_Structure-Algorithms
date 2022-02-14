#include<iostream>
using namespace std;

int main(){
    int A1, A2, A3 , n , m;
    cout<<"Enter the size of coloum :: ";
    cin>>n;
    cout<<"Enter the size row :: ";
    cin>>m;
    cout<<"Enter the matrix A1 :: ";
    cin>>A1;
    for (int i = 0; i < n ; i++)
    {
        cin>>A1;
    }
    cin>>A2;
    for (int i = 0; i < m; i++)
    {
        cin>>A2;
    }
    for (int  i = 0; i < n*m; i++)
    {
        A3 = A1*A2;
    }
    for (int i = 0; i < n*m; i++)
    {
        cout<<A3<<" ";
    }
    

    
    

    return 0;
}
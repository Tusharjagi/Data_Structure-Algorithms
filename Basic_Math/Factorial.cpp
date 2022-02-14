#include<iostream>
using namespace std;

int main(){
    cout<<"Find out the any number of factorial :: ";
    int n, fact=1;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout<<"Factorial of "<<n<<" is :: "<<fact<<endl;


    return 0;
}
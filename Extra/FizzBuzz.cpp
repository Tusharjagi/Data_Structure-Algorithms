#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

void fizzBuzz(int n) {
    int i;
    if (n/3||n/5) {
    cout<<"FizzBuzz"<<endl;
    }
    if (n/5||n!/3)
    {
        cout<<"Fizz"<<endl;
    }
    if (n/3||n!5)
    {
       cout<<"Buzz"<<endl;
    }
    else
    {
        return n;
    }
    
    

}

int main()
{

}
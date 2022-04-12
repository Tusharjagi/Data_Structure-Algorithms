#include<iostream>
using namespace std;

void reverse(string& str, int i, int j)
{
    // Base Case
    if(i > j)
        return;
    
    swap(str[i],str[j]);
    i++;
    j--;

    // RC
    reverse(str,i,j);
}

int main(){
    string str = "tushar";

    reverse(str, 0 , str.length()-1);

    cout<< str <<endl;

    return 0;
}
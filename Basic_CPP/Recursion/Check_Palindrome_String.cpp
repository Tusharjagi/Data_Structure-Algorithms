#include<iostream>
using namespace std;

bool CheckPalindrome(string str, int i, int j)
{
    // Base Case
    if(i > j)
    {
        return true;
    }
    if(str[i] != str[j])
        return false;
    else    
        return CheckPalindrome(str, i+1, j-1);
}

int main(){
    string str = "BookkooB";
    cout<<endl;

    bool isPalindrome = CheckPalindrome(str, 0, str.length()-1);

    if(isPalindrome)
    {
        cout<<"Its a Palidrome"<<endl;

    }
    else{
        cout<<"Its Not a palidrome "<<endl;
    }
    
    
    return 0;
}
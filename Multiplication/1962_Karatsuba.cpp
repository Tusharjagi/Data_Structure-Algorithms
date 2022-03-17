#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*

---------> Karatsuba Algorithm <-------
-> Using Divide and Conquer
-> Always perform EVEN numbers


Step 0 : Divide the number two equal half a & b , a & c
Step 1 : Compute a.c              -> S1
Step 2 : Compute b.d              -> S2
Step 3 : Compute (a+b) * (c+d)    -> S3
Step 4 : S3-S2-S1                 -> S4
Step 5 : S1 * (b^n) + S4 * (b^n/2) + S2

b = Base
n = Number of digit

*/

string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
    {
        return 0;
    }

    vector<int> result(len1 + len2, 0);

    int index_len1 = 0;
    int index_len2 = 0;

    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';

        index_len2 = 0;

        for (int j = len2 - 1; j >= 0; j--)
        {
            int n2 = num2[j] - '0';

            int sum = n1 * n2 + result[index_len1 + index_len2] + carry;

            carry = sum / 10;

            result[index_len1 + index_len2] = sum % 10;

            index_len2++;
        }
        if (carry > 0)
        {
            result[index_len1 + index_len2] += carry;
        }
        index_len1++;
    }

    int i = result.size() - 1;

    while (i >= 0 && result[i] == 0)
    {
        i--;
    }

    if (i == -1)
        return "0";

    string s = "";

    while (i >= 0)
    {
        s += std::to_string(result[i--]);
    }

    return s;
}

int main()
{
    string str1 = "1235421415454545454545454544";
    string str2 = "1714546546546545454544548544544545";

    if((str1.at(0) == '-' || str2.at(0) == '-') &&
        (str1.at(0) != '-' || str2.at(0) != '-'))
        cout<<"-";

    if(str1.at(0) == '-')
        str1= str1.substr(1);

    if(str2.at(0) == '-')
        str2 = str2.substr(1);

    cout<<multiply(str1,str2);

    return 0;
}
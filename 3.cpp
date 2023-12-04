/*Given an integer n, count the total number of digit 1 appearing in all non-negative integers less than or equal to n.*/

#include <bits/stdc++.h>
using namespace std;
int countDigitOne(int n)
{
    int countr = 0;
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        countr += count(str.begin(), str.end(), '1');
    }
    return countr;
}
 

int main()
{
    int n = 13;
    cout << countDigitOne(n) << endl;
    return 0;
}
/*
Given a variable value  return the size of the variable. It can be of any data type like int, float, char, double, etc. 
Example 1:
Input:
1(int)
Output: 
4
*/
#include <bits/stdc++.h>
using namespace std;

template <typename T>
int sizeOfValue(T value)
{
    int ans = sizeof(value);
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            double a;
            cin >> a;
            cout << sizeOfValue<double>(a);
        }
        else if (c == 2)
        {
            int a;
            cin >> a;
            cout << sizeOfValue<int>(a);
        }
        else
        {
            char a;
            cin >> a;
            cout << sizeOfValue<char>(a);
        }
        cout << endl;
    }
}

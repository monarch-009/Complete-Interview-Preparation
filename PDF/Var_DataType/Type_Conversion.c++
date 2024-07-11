/*

Given a double value d, typecast it to an integer value.
Example 1:
Input:
d = 10.23
Output:
10

*/
#include <bits/stdc++.h>
using namespace std;

int typeCast(double d)
{
    int a = (int)d;
    return a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double d;
        cin >> d;

        int answer = typeCast(d);

        cout << answer << endl;
    }
}
/*
Given one variable a, it can be of any datatype like int, long, double, etc. You have been given a fun() function with variable 'a' as parameter. You have to print its type id name.
Example 1:
Input: a = 5
Output: i

Example 2:
Input: a = 4.5
Output: d

Your Task:
Your task is to complete a function fun() which takes a as input parameter and print type id name of 'a'. Don't print a new line.
*/
#include <bits/stdc++.h>
using namespace std;

void fun(auto a)
{
    cout << typeid(a).name(); // This is Code for this question
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
            int a;
            cin >> a;
            fun(a);
        }
        else if (c == 2)
        {
            double a;
            cin >> a;
            fun(a);
        }
        else
        {
            long long a;
            cin >> a;
            fun(a);
        }
        cout << endl;
    }
    return 0;
}

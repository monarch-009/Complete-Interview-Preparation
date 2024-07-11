/*
You are given a function utility() which prints count  every time it is called. The function will be called by the driver's code n times.

Example 1:
Input: n = 4
Output: 1 2 3 4
*/
#include <iostream>
using namespace std;

void utility()
{
    static int count = 0; // use of static variable 
    count++;

    cout << count;
}

int main()
{
    int t;
    cin >> t;

    int n;
    cin >> n;

    while (n--)
    {

        utility();
        cout << " ";
    }

    return 0;
}

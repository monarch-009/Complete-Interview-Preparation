/*
Given 2 numeric values a and b, they can be of any datatype like int, long, double, etc. Find the value of (a + b). After computation the answer will have the data type as a and b.
Example 1:
Input: a = 5, b = 2
Output: 7
*/
#include <bits/stdc++.h>
using namespace std;

template<typename T, typename U>
T add(T a, U b){
    return a+b;
}

int main()
{
    
    int t;
    cin >> t;
    
    while(t--){
        
        int c;
        cin>>c;
        if(c==1)
        {
            int a, b;
            cin >> a >> b ;
            cout << add(a, b) << endl;
            
        }
        else if(c==2)
        {
            double a, b;
            cin >> a >> b ;
            cout << add(a, b) << endl;
                
        }
        else
        {
            long long a, b;
            cin >> a >> b ;
            cout << add(a, b) << endl;
        
        }
    }
    return 0;
} 

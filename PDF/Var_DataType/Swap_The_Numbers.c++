/*
Given two numbers a and b, you need to swap their values so a holds the value of b and b holds the value of a.
Example 1:
Input:
a = 1
b = 2
Output: 
2 1

*/
#include <bits/stdc++.h>
using namespace std;

void utility(int &a, int &b)
{
    
    int temp = a;
    a = b;
    b = temp;
    
}

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    
	    utility(a, b);
	    
	    cout<<a<<" "<<b<<endl;
	}
	
}

/*
You just have to initialize a global variable g having int type and value as 10.

You are given with complete functions getter() and setter(int x) for the variable g. getter() will return the value of g and setter(x) will set the value of g as x. Functions will be called by the driver's code, it will set the value of g as 10 and will print the value through getter().

Example 1: 
Input:
No Input
Output:
10
*/
#include <iostream>
using namespace std;

int g = 10; // Gloabal 

int getter() 
{ 
	return g; 
} 

void setter(int x){
    g = x;
}

int main() 
{ 
	setter(g);
	cout << getter() << endl; 
	
	return 0;
} 

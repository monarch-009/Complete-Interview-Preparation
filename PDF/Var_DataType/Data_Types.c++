/*
Working with Data Types is very important in the programming world. Here, we will learn to manipulate the basic data types in CPP.
You will be given four different variables of different data types: a (int), b (float), c (double), l (long long), d (string). Your task is to do step-wise operations as given below:
1. Divide b by c.
2. Divide b by a.
3. Divide c by a (cast to int).
4. Add result of step 3 with l.
5. Print the given string, and the 4th (0-based indexing) character of the string both separated by a space.

Example 1:
Input:
1 2 3 5
gfgc
Output:
0.666667 2 3 8 
gfgc c

*/
#include <iostream>
using namespace std;
 
void dataTypes(int, float, double, long long, string);

void dataTypes(int a, float b, double c, long long l, string d){
    
    float p = b/c  ; 
    double q = b/a ;
    int r = c/a  ; 
    long long m = r+l ;

    cout << p << " " << q << " " << r <<" "<< m <<endl;
    cout << d << " " << d[3] << endl; 

}

int main()
{
    int a;
    float b;
    double c;
    long long l;
    string d;
    
    int t;
    cin >> t;
    
    while(t--){
        
        cin >> a >> b >> c >> l >> d;
    
        dataTypes(a, b, c, l, d);
    }
    
    return 0;
} 
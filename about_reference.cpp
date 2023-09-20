// reference is a feature in C++
// a nick name of an variable 
// if you have a variable a = 10; and you declare int &r = a; that's mean you have a second name of your 
// variable. look at the example to explained
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a = 10;
    int &k = a;
    cout<<a<<endl;
    k++;  
    // see, you have a variable but you 2 two name to use it, we also call this one is "alias".
    // k is alias.
    cout<<a;
    return 0;
}
// Today we say about a pointer to structure


#include <iostream>
#include <stdio.h>

using namespace std;

// create a struct about the rectangle
struct Rectangle
{
    int lenghth;
    int breath;

};


int main()
{
    // struct Rectangle R = {10, 15};
    // struct Rectangle *p = &R;
    // in stactic memory
    // (*p).lenghth = 20; // syntax change value from a pointer in C++
    // (*p).breath = 30;
    // p->lenghth = 15;  // syntax change value from a pointer in C
    // p-> breath = 10;

    // // The two syntax is the same meaning, you can choose 1 of 2
    // cout<<(*p).breath<<endl;
    // cout<<(*p).lenghth;

    // In heap memory
    struct Rectangle *p;
    p = (struct Rectangle*)malloc(sizeof(struct Rectangle));
    p->lenghth = 15;
    p->breath = 10;
    printf("dien tich hinh chu nhat la: %d", p->lenghth*p->breath);

    


    return 0;
}
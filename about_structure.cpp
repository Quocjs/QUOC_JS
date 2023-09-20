// 

#include <iostream>
#include <cstring>


using namespace std;

// basic of structure
struct rectangle
{
    int length;
    int breath;

};

// example of structure
struct complec_number
{
    int real; // for real number of complex number
    int imagine; // for imagine number of complex number
};

struct student_member
{
    int roll; // the number indicate of student
    char name[25]; // the name of student
    char address[10]; // the address of student
};

struct card
{
    int face;
    int shape;
    int color;
};






int main()
{
    // Basic of structure:
    //struct rectangle r; // decleration
    struct rectangle r = {1, 2}; // decleration and initialization
    // But we only choose 1 of 2 methods above. if you have declarationed a struct, you should not have done it again
    r.breath = 15; // modify and access the member of structure
    r.length = 10; // modify and access the member of structure
    cout<<"The Area of rectangle is:"<<r.breath*r.length<<endl;

    // example of structure: complex_number
    struct complec_number c;
    c.real = 1;
    c.imagine = 2;
    cout<<"The complex number is:"<<c.real<<"+"<<c.imagine<<"i"<<endl;

    // example of structure: student_member
    struct student_member s;
    s.roll = 1;
    strcpy(s.name, "John");
    strcpy(s.address, "Houston");
    cout<<s.name<<" nha o: "<<s.address<<endl;

    // example of structure: card
    // the face: 1, 2, 3, 4, ... 13 (ace, 2, 3, 4,... King)
    // the shape: 1, 2, 3, 4 (spades, clubs, heart, dinamond)
    // the color: 1, 2 (red, black)
    struct card play[3] = {{1, 1, 1}, {2, 1, 1}, {3, 1, 1}};
    printf("the first card is: %i", play[2].face);
    
    // combo quet don giup sach se terminal
    // getchar();
    // system("cls");
    // return 0;
}
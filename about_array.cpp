#include <iostream>

using namespace std;

void InMang()
{
    int A[5];

    A[0] = 15;
    A[1] = 6;
    A[2] = 20;
    cout<<sizeof(A)<<endl;
    cout<<"The First value of A is: "<<A[0]<<endl;
    printf("The second value of A is: %d", A[1]);

};

int ThucHienMang()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int B[n];
    B[0] = 1;
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d: %d \n", i+1, B[i]);
    }
    return 0;
};

void convat()
{
    string mang_convat[4] = {"heo", "bo", "ga", "ca"};
    for (int i = 0; i < 4; i++)
    {
        cout<<mang_convat[i]<<endl;
    }
}

void ThucHienMangDacBiet()
{
    // int MangDacBiet[10];
    int MangDacBiet2[] = {0, 1, 2, 3, 4};
    for (int i = 0; i < static_cast<int>(sizeof(MangDacBiet2)/sizeof(MangDacBiet2[0])); i++)
    {
        printf("Gia tri cua mang dac biet 2 la: %d \n", MangDacBiet2[i]);
    }
    printf("the size of Array is: %d", static_cast<int>(sizeof(MangDacBiet2)/sizeof(MangDacBiet2[0])));
};


int main()
{
    //InMang();
    //ThucHienMang();
    //ThucHienMangDacBiet();
    convat();
    return 0;

}
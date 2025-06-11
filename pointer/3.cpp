#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int *ptr=&a;
    int **ptr1=&ptr;
    int ***ptr2=&ptr1;

    cout <<*ptr <<endl;
    cout <<**ptr1 <<endl;
    cout <<***ptr2;



}
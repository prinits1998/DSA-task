#include<iostream>
using namespace std;

void oddeven(int a)
{
 if (a%2!=0)
 {
    cout<<"this number is odd";
 }
 else
 {
    cout<<"this number is even";
 }
 
}
int main()
{
    int a;

    cout <<"enter a value:";
    cin>>a;

    oddeven(a);
}
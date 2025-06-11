#include<iostream>
using namespace std;
int fact(int a)
{
    if (a<=1)
    {
        return 1;
    }
    else
    {
        return a * fact(a-1);
    }
    
}

int main()
{
    int a;
    cout<<"enter number:";
    cin>>a;
    cout<<fact(a);
    
}
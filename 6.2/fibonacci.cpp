#include<iostream>
using namespace std;
int main()
{
    int user,x=-1,y=1,z;

    cout <<"enter a number:";
    cin >>user;

    for (int i = 0; i < user; i++)
    {
        z=x+y;
        cout << z <<" ";
        x=y;
        y=z;
    }
    
}
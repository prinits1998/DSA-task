#include<iostream>
using namespace std;
int main()
{
    int x=0,user;

    cout <<"enter value:";
    cin >>user;
    for (int i = 1; i <= user; i++)
    {
        x+=i;
    }
     cout <<"sum of n numbers:" <<x;
}
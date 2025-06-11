#include<iostream>
using namespace std;
int main()
{
    int sum=0,user;

    cout <<"enter value:";
    cin >>user;
    for (int i = 1; i <= user; i++)
    {
        sum+=i;
    }
     cout <<"sum of n numbers:" <<sum;
}
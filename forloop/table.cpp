#include<iostream>
using namespace std;
int main()
{
    int x,table;

    cout<<"enter a value:";
    cin>>x;

    for (int i = 1; i <=10; i++)
    {
        table=x*i;
        cout <<x<<"*" <<i<<"=" << table <<" ";
    }
    
}
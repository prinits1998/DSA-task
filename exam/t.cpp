#include<iostream>
using namespace std;
int main()
{
    int user,table;

    cout<<"enter a value:";
    cin>>user;

    for (int i = 1; i <=10; i++)
    {
        table=user*i;
        cout << user <<"*" <<i<<"=" << table <<" ";
    }
    
}
     



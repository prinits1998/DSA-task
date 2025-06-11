#include<iostream>
using namespace std;
int main()
{
    char user='a';

    cout <<"enter a value:";
    cin >>user;
    do
    {
     cout <<user;
     user=user+4;
        
    } while (user<='z');
    

}
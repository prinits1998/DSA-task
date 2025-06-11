#include<iostream>
using namespace std;
int main()
{
    int user,i=2;

    cout <<"enter a number:";
    cin >> user;
    cout <<"even number is 1 to " << user << "are:";


    do
    {
        if (i % 2 == 0)
        {
            cout << i <<" ";
        }
         i+=2;
        
    } while (i <= user);
    
    
}
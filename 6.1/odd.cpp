#include<iostream>
using namespace std;
int main()
{
    int user;
  
     cout <<"enter a value n:";
     cin >> user;
    while (user > 0)
    {
        if (user%2 != 0)
        {
            cout <<user <<endl;
        }
         user--;
    }
    
}
#include<iostream>
using namespace std;
int main()
{
    int user,a=1,b=1,c;

    cout <<"enter user value:";
    cin>>user;

   for ( int i = 0; i < user; i++)
   {
      c=a+b;

      cout <<c <<" ";
      a=b;
      b=c;

   }
   
}
#include<iostream>
using namespace std;
void vowel(char user)
{

    if (user == 'a' || user =='e' || user=='i' || user=='o' || user=='u')
    {
        cout<<"is vowel";
    }
    else
    {
          cout<<"is consonant";
    }
    
}


int main()
{
   char user;
   
   cout<<"enter value:";
   cin>>user;

    vowel(user);
    
}
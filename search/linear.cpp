#include<iostream>
using namespace std;

int main()
{
   int array[] ={10,30,50,20,60};
   int key=20;

   for (int i = 0; i < 5; i++)
   {
    if (key == array[i])
    {
        cout<<"your key is succefull match:";
    }
    
   }

   for (int i = 0; i < 5; i++)
   {
    cout<<array[i];
   }
   
   
    
}
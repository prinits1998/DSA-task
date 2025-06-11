#include<iostream>
using namespace std;

 class student
 {
 private:

     string name;
     int age;

public:
     void set(string a , int b)
     {
        name=a;
        age=b;    
     }
     void get()
     {

        cout<<this->name<<endl;
        cout<<this->age<<endl;
        cout<<"---------------------------------------" <<endl;
         
     }

 };

int main()
{
     string a;
     int b;

     int size;
      cout <<"enter size of array:";
      cin>>size;

     student students[size];

     for (int i = 0; i < size; i++)
     {
         cout <<"enter your name:";
         cin>>a;

         cout <<"enter your age:";
         cin>>b;

         students[i].set(a,b);
     }

     for (int i = 0; i < size; i++)
     {
         students[i].get();
     }
     
     
     
    
}
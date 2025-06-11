#include<iostream>
using namespace std;

class student
{
    public:

    int age;
    string name;
    student(int x,string y)
    {

         age=x;
         name=y;
         cout<<"age:="<<x <<endl;
         cout<<"name:="<<y <<endl;
    }
    ~student()
    {
        cout<<"hello......" <<endl;
        cout<<"hello......" <<endl;
    }

};

int main()
{
    student s1(20,"riya");
}
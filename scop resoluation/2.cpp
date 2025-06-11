#include<iostream>
using namespace std;

class student
{
    public:

    int a=10;

    static int s()
    {
         int a=20;
         return a;
    }
};

int main()
{
       cout <<student::s();

}
#include<iostream>
using namespace std;

class a{
    public:

    void get()
    {
        cout<<"Class A"<<endl;
    }

};
class b
{
    public:
    void set()
    {
    cout<<"Class B"<<endl;
    }

};
class c : public a,public b
{
    public:
    void push()
    {
    cout<<"Class c"<<endl;
    }

};

int main()
{
     c c1;
     c1.get();  
}

#include<iostream>
using namespace std;

class a
{
    public:

    void get()
    {
        cout<<"Class A"<<endl;
    }

};
class b : public a
{
    public:
    void set()
    {
    cout<<"Class B"<<endl;
    }

};
class c : public b
{
    public:
    void push()
    {
    cout<<"Class C"<<endl;
    }

};


int main()
{
     c c1;
     c1.get(); 
}

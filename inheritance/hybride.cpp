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
class b: public a
{
    public:
    void set()
    {
    cout<<"Class B"<<endl;
    }

};
class c : public a
{
    public:
    void push()
    {
    cout<<"Class c"<<endl;
    }

};
class d : public b,public c
{
    public:
    void pop()
    {
    cout<<"Class D"<<endl;
    }

};

int main()
{
     d d1;
    //  d1.get();//amiguity error
    d1.b::get();//solve amiguity error
    d1.pop();
    d1.push();
    d1.set();

}

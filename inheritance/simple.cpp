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

int main()
{
     b b1;
     b1.get();  
}

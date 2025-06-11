#include<iostream>
using namespace std;
void swap(int x,int y)
{
    x = x + y;
    y = x - y;
    x = x - y;

    cout<<"swap value of x:" <<x <<endl;
    cout<<"swap value of y:" <<y;
}
int main()
{
    int x,y;
     cout<<"enter value x:";
     cin>>x;
     cout<<"enter value y:";
     cin>>y;

     swap(x,y);
}
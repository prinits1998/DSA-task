#include<iostream>
using namespace std;
int sum(int s1,int s2)
{
       return s1 + s2;

}
int main()
{
    int s1,s2;
    cout <<"enter first value:";
    cin>>s1;
    cout <<"enter second  value:";
    cin>>s2;

    cout << sum(s1,s2);

}
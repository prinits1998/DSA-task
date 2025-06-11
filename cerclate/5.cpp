#include<iostream>
using namespace std;

int main()
{
    for(int a=1; a<=5; a++)
    {
        for(int b=5; b>a ;b--)
        {
			cout <<" " <<" ";
        }

        for(int c=6-a; c<=5; c++)
        {
			cout << c <<" ";
        }

        for(int d=4; d>=6-a; d--)
        {
			cout << d <<" ";

        }
			cout <<endl;

    }

}
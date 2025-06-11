#include<iostream>
using namespace std;
int main()
{
    int firstyear,secondyear;

    cout <<"enter a first year:";
    cin >>firstyear;
    cout <<"enter a second year:";
    cin >>secondyear;

    cout <<"leap year between" << firstyear << "and" << secondyear << "are:";

    while (firstyear <= secondyear)
    {
        if (firstyear%4 == 0)
        {
            cout << firstyear <<" ";
        }
        
        firstyear++;
    }
    
}
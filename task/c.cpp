#include<iostream>
using namespace std;

int main()
{

    int number,first=0,temp,last=0;

    cout << "Enter Number :: ";
    cin >> number;

    temp=number;

    last=temp%10;

    if (number < 10 && number >= 0 )
    {
        cout << " you entered one digit :)  == "<<number;
    }
    else
    {
        while (number > 0)
    {
        first=number%10;
        number/=10;
    }

    cout<<"Sum of First And Last Digit = "<<endl<<(first+last)<<endl;

   }
}
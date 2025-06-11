#include <iostream>
using namespace std;

int main()
{

    //        *
    //      * * *
    //    * * * * *
    //  * * * * * * *
    //* * * * * * * * *

    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k > i; k--)
        {

            cout << "  " << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << "  ";
        }
        for(int l=i-1;l>=1;l--)
        {
        cout<<"*"<<"  ";

        }

        cout << endl;
    }
}
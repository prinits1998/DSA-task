#include<iostream>
using namespace std;

int main()
{

    for (int a = 1; a <= 5; a++)
    {

        for (int  b = 1; b <= 5; b++)
        {

            if ((a == 2 && b >= 2 && b <= 4) || (a == 4 && b >= 2) || (a == 5 && b >= 2))
            {
                cout << "  ";
            }

            else
            {
                cout << "* ";
            }

        }

        cout <<endl;

    }

}
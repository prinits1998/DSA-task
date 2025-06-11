#include<iostream>
using namespace std;

int main()
{
    for (int row= 1; row<=5; row++)
    {
        for (int i = 2; i<=row; i++)
        {
            cout<<" "<<"  ";
        }
        
        for (int  col = 5; col >= row; col--)
        {
            if (col%2 != 0)
            {
                cout<<" 1 ";
            }
            else{
                cout<<" 0 ";
            } 
        }

        cout<<endl;   
    }

}
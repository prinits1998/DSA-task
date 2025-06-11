#include<iostream>
using namespace std;

int main()
{
    int rowsize=3,colsize=3,sum=0;
    int box[rowsize][colsize];

    for (int row = 0;row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            cout <<"elements=";
            cin >>box[row][col];
        }
        
    }
    for (int row = 0;row < rowsize; row++)
    {
        for (int col = colsize-1; col >= 0; col--)
        {
            cout << box[row][col];
        }
        cout << endl;
    }
    
    for (int row = 0;row < rowsize; row++)
    {
        for (int col = colsize-1; col >= 0; col--)
        {
            if(row == col)
            {
            sum +=box[row][col];
            }
        }
    }
    cout<< sum; 
}


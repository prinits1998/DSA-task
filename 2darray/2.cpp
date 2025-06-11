#include<iostream>
using namespace std;

int main()
{
    int rowsize=3,colsize=3,sum;
    int box[rowsize][colsize];

    for (int row = 0;row  < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            cout <<"elements=";
            cin >>box[row][col];
        }
        
    }
    for (int row = 0;row  <rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            if(row == col)
            {
                cout<< box[row][col];
           }
             cout<< endl;
        }
    }

}
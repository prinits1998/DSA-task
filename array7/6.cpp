#include <iostream>
using namespace std;

int main() 
{

    int rowsize=3,colsize=3;
    int box1[rowsize][colsize];

    for (int row = 0; row < rowsize; row++) 
    {
        for (int col= 0; col < colsize; col++)
        {
            cout <<"enter the value=";
            cin>> box1[row][col];
        }  
    }
    for (int row = 0; row < rowsize; row++) 
    {
        for (int col= 0; col < colsize; col++)
        {
            
            cout<< box1[row][col];
        }
        
        cout<< endl;
    }


    int box2[rowsize][colsize];
    for (int row = 0; row < rowsize; row++) 
    {
        for (int col= 0; col < colsize; col++)
        {
            cout <<"enter the value=";
            cin>> box2[row][col];
        }  
    }
    for (int row = 0; row < rowsize; row++) 
    {
        for (int col= 0; col < colsize; col++)
        {
            
            cout<< box2[row][col];
        }
        
        cout<< endl;
    }

    int box3[rowsize][colsize];
    
    for (int row = 0; row < rowsize; row++) 
    {
        for (int col= 0; col < colsize; col++)
        {
            
            box3[row][col]=box1[row][col] + box2[row][col];
            cout <<box3[row][col] <<endl;
        }
        
        
    }
}
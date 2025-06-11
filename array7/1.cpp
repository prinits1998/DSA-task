#include<iostream>
using namespace std;

int main()
{
    int rowsize=3,colsize=3,sum1=0,sum2=0,sum3=0;
    int box[rowsize][colsize];

    
    for (int row = 0; row  < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            cout <<"elements=";
            cin>>box[row][col];
        }
     
        
    }
    for (int row = 0; row  < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
             if (row == 0)
             {
                sum1 = sum1+box[row][col];

             } 
         }  
    }

    cout<<sum1 <<" ";

    for (int row = 0; row  < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
             if (row == 1)
             {
                sum2 = sum2+box[row][col];

             } 
         }  
    }

    cout<<sum2 <<" ";

    for (int row = 0; row  < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
             if (row == 2)
             {
                sum3 = sum3+box[row][col];

             } 
         }  
    }

    cout<<sum3 <<" ";
    
    

}
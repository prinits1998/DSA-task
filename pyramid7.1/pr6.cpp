#include<iostream>
using namespace std;

int main()
{

    //1 0 1 0 1
    //1 0 1 0
    //1 0 1
    //1 0
    //1
    
    for (int row= 1; row<=5; row++)
    {
        bool flag=1;
        for (int  col = 5; col >= row;col--)
        {
            cout<<flag<<" ";
            flag= !flag;
        }

        cout<<endl;
        
    }
    

}
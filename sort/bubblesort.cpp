#include<iostream>
using namespace std;

int main()
{
    int user,temp;

    cout<<"enter the size of array:";
    cin>>user;

    int array[user];

    for (int i = 0; i < user; i++)
    {
        cout <<"enter the vale:"<<endl;
        cin>>array[i];
    }

    for (int i = 0; i <= user-1; i++)
    {
        for (int j = 0; j <= user-1; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < user; i++)
    {
        cout<<array[i] <<endl;
    }
    
    
}
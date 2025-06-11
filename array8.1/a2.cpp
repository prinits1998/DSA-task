#include<iostream>
using namespace std;

int main()
{
    int size;

    cout<<"enter the array size=";
    cin>>size;

    int a[size],b[size],c[size];

    cout <<"enter value of a:"<<endl;
    

    for (int i = 0; i < size; i++)
    {
        cout <<"array [" << i <<"]=";
        cin >>a[i];
    }

    cout <<"enter value of b:"<<endl;

    for (int i = 0; i < size; i++)
    {
        cout <<"array [" << i <<"]=";
        cin >>b[i];
    }
    for (int i = 0; i < size; i++)
    {
       c[i]=a[i]+b[i];
    }
    
     for (int i = 0; i < size; i++)
     {
        
        cout<<"Sum is:"<< c[i] << endl;
    

     }
     
    
}

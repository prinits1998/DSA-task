#include<iostream>
using namespace std;
int max(int a[],int n)
{
    int max=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        
    }
    cout<<"Max is :: "<<max;  
    
}

int main()
{
    int size;
    cout<<"Enter size of array:: ";
    cin>>size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout <<"enter elements:";
        cin >>a[i];
    }
    
    max(a,size);

}
#include<iostream>
using namespace std;
int main()
{
    int size;
    float sum=0,average;

    cout <<"enter size of array:";
    cin >>size;

    int array[size];

    cout <<"enter array element" <<endl;

    for(int i = 0; i < size; i++)
    {
        cout <<"array [" << i << "]= ";
        cin >>array[i];
        sum=sum + array[i];
    }
    
    average=sum/size;
    
    cout <<average;

}
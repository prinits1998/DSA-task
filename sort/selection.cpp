#include<iostream>
using namespace std;

int main()
{
    int temp;
    int arr[5] = {10,30,20,50,40};

    for (int i = 0; i < 5; i++)
    {
        int minvalue = i;

        for (int j = i; j < 5; j++)
        {
            if (arr[j] < arr[minvalue])
            {
                minvalue = j;
            }
            temp = arr[i];
            arr[i] = arr[minvalue];
            arr[minvalue] = temp;
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        cout<< arr[i] << " "; 
    }   
}
#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {50,40,20,30,10};

    for (int i = 1; i < 5; i++)
    {
        int key = arr[i]; //40
        int j = i - 1; // 1-0 = 0

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        
    }

    for (int i = 0; i < 5; i++)
    {
        cout<< arr[i] << " ";
    }
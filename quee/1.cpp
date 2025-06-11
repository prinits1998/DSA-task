#include<iostream>
using namespace std;

void Enqueue(int data, int first, int arr[])
{
    arr[first]=data;

    for (int i = 0; i <= first; i++)
    {
        cout<<arr[i] << " ";
    }
    
}

void Dequeue(int arr[], int &first)
 { 
   
        for (int i = 0; i < first; i++) 
        {
            arr[i] = arr[i + 1];
        }

        first--; 

        for (int i = 0; i <= first; i++) 
        {
            cout << arr[i] << " ";
        }
    
}

void Front(int arr[])
{
    cout<< arr[0];
}

void Rear(int first,int arr[])
{
    cout<< arr[first];
}

void isEmpty( int arr[] , int first)
{
    if (arr[first] == 0)
    {
        cout<<"The stack is empty";
    }
    else
    {
        cout<<"The stack is not empty";
    }
    
}

void isFull(int size, int first,int arr[])
{
    if (arr[first] == size)
    {
        cout<< "The stack is full";
    }
    else
    {
        cout<< "The stack is not full";
    }
    
}

void Queuesize(int first)
{
    cout<< first;
}


int main()
{
    int user,size;

    cout<< "enter the size of array = ";
    cin>>size;

    int *arr = new int[size];

    int first = -1;

    do
    {
        cout<<" press 1 : Enqueue" << endl;
        cout<<" press 2 : Dequeue" << endl;
        cout<<" press 3 : Front" << endl;
        cout<<" press 4 : Rear" << endl;
        cout<<" press 5 : isEmpty" << endl;
        cout<<" press 6 : isFull" << endl;
        cout<<" press 7 : size" << endl;
        cout<<" press 0 : Exit" << endl;

        cout<< "Enter the one option = ";
        cin>>user;

        switch (user)
        {

        case 1:
             first++;
             int data;
              cout<<"enter the data = ";
              cin>>data;
              Enqueue(data,first,arr);
              cout<< "---------------------------------------" << endl;
        break;
        case 2:
              Dequeue(arr,first);
              cout<< "---------------------------------------" << endl;
        break;
        case 3:
              Front(arr);
              cout<< "---------------------------------------" << endl;
        break;
        case 4:
              Rear(first,arr);
              cout<< "---------------------------------------" << endl;
        break;
        case 5:
              isEmpty(arr,first);
              cout<< "---------------------------------------" << endl;
        break;
        case 6:
             isFull(size,first,arr);
             cout<< "---------------------------------------" << endl;
        break; 
        case 7:
             Queuesize(first);
             cout<< "---------------------------------------" << endl;
         break;
        
        default:
        
            cout<<"INVALID CHOICE";
            break;
        }

    } while (user != 0);
}

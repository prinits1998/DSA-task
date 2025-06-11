#include <iostream>
using namespace std;

int main() 
{

    int user;

    
    cout << "Enter size of array: ";
    cin >> user;

    int array[user];

    
    cout << "Enter array element:"<<endl;

    for (int i = 0; i < user; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> array[i];
    }

    
    int Minimum = array[0];
    
    for (int i = 1; i < user; i++) 
    {
        if (array[i] < Minimum) 
        {
            Minimum= array[i];
        }
    }

    
    cout << "The minimum element : " << Minimum << endl;

}
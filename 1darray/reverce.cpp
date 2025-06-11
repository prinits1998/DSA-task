#include <iostream>
using namespace std;

int main() 
{

    int user;

    
    cout << "Enter the size of the array: ";
    cin >> user;

    int array[user];

    cout << "Enter the elements of the array:"<<endl;
    
    for (int i = 0; i < user; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> array[i];
    }

    
    cout << "The array in reverse order is: ";

    for (int i = user - 1; i >= 0; i--) 
    {
        cout << array[i] << " ";
    }

    cout << endl;


}
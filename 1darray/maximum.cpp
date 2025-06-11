#include <iostream>
using namespace std;

int main() 
{

    int user;

    
    cout << "Enter size of array: ";
    cin >> user;

    int array[user];

    
    cout << "Enter elements of array:"<<endl;

    for (int i = 0; i < user; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> array[i];
    }

    
    int Maximum = array[0];
	
    for (int i = 1; i < user; i++) 
    {
        if (array[i] > Maximum) 
        {
            Maximum = array[i];
        }
    }

    
    cout << "maximum element: " << Maximum << endl;

}
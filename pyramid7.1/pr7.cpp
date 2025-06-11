#include <iostream>
using namespace std;

int main()
{

    // A 
    // B A
    // C B A
    // D C B A
    // E D C B A


    for (char row = 'A'; row <= 'E'; row++)
    {
        for (char col = row; col >= 'A'; col--)  
        {
            cout << col << " ";
        }
        cout << endl;
        
    }
    
}
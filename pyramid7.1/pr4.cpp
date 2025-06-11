#include <iostream>
using namespace std;

int main() 
{

    //1 2 3 4 5
    //1 2 3 4
    //1 2 3
    //1 2
    //1
    

   
        for (int row = 1; row <= 5; row++) 
        { 
            for (int col = row; col <= 5; col++) 
            { 
            cout <<col<< " "; 
        }
        cout << endl;
        
        }

}
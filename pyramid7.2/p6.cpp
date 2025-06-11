#include <iostream>
using namespace std;

int main() {
    
  //5 4 3 2 1
  //  5 4 3 2
  //    5 4 3
  //      5 4
  //        5
    

           for (int row = 1; row <=5; row++) 
        { 
             for (int space = 1; space<row; space++)
            {
            cout<<"-"<<" ";
            }
            
            for (int col = 5; col >=row; col--) 
            { 
            cout <<col<< " "; 
            }
        
             cout << endl;
             
        }

}
#include<iostream>
using namespace std;
int main()
{
    int user;
    int size=0;
    int array[size];
    
    cout <<"enter any oparation=";
    cin >>user;

    cout <<"1 for insert" <<endl;
    cout <<"2 for read" <<endl;
    cout <<"3 for update" <<endl;
    cout <<"4 for remove" <<endl;
    cout <<"0 for exit" <<endl;

    switch (user)
    {
    case 1:
             for (int i=0; i < size; i++)
             {
                cin>>array[i];
                
             }
             

        break;
     case 2:
    
        break;
    case 3:
    
        break;
    case 4:
    
        break;
    
    default:
            cout <<"";
        break;
    }

}
#include<iostream>
using namespace std;
class node{

       public:
       int data;
       node *next;

       node(int val)
       {
        data=val;
              
       }
};
void insertvalue()
{

}

int main()
{
      int user;
      node *head;

    do
    {
        cout<<"pleace select your choice:"<<endl;
        cout<<"insert:"<<endl;
        cout<<"read:"<<endl;
        cout<<"update:"<<endl;
        cout<<"delete:"<<endl;
        cout<<"--------------------------------------------"<<endl;

        cout<<"enter the value:"<<endl;
        cin>>user;

    } while (user !=0);

    switch (user)
    {
    case 1:
    insert:
           int choice;

           cout<<"enter your option:"<<endl;
           cin>>choice;
           cout<<"-------------------------------------------------"<<endl;

           cout<<"press 1:for adding node in the starting in the list:"<<endl;
           cout<<"prees 2:for adding node for any possition:"<<endl;
           cout<<"press 3:for adding node last of a list:"<<endl;
    break;
    case 2:
    read:
    
    default:
        break;
    }
    
      

}
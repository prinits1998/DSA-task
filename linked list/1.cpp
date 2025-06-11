#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int val)
    {
        data=val;
        next=NULL;

    }
    //node(int val) : data(val), next(NULL) { }
};


 int main()
{

node *ptr=NULL;
node *head =new node(5);

ptr=head;

node *current =new node(6);
head->next=current;

current =new node(7);
head->next->next=current;

current =new node(8);
head->next->next->next=current;


while (ptr!=NULL)
{
    cout << ptr->data <<"-" << ptr->next <<endl;
    ptr=ptr->next; 

}

       
}
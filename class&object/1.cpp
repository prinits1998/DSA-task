#include<iostream>
using namespace std;
class watch
{
    public:
    int price;
    string model;
    string company;

    void store(int price,string model,string company){
        price=this->price;
        model=this->model;
        company=this->company;
        

    }

    void value(){
        cout<<this->price<<endl;
        cout<<this->model<<endl;
        cout<<this->company<<endl;

    cout<<"----------------------------------------"<<endl;
        

    }

};

int main()
{
    watch titan,noise,fastrack,nebula,fireboult,boat;
    // watch price;
    // watch model;
    // watch company;

    titan.store(2000,"titan zeal","titan");

     titan();

}
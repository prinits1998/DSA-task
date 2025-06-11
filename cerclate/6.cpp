#include<iostream>
using namespace std;
int main()
{

	for(int a=1; a<=5; a++)
	{

		for(int b=1; b<=a; b++)
		{
			cout << b <<" ";
		}

		for(int c=4; c>=a; c--)
		{
			cout<<"    ";
		}

		for(int d=a; d>=1; d--)
		{
		    
			cout << d <<" ";
		}

		cout<<endl;
	}

}

#include<iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout<<"Enter the Numbers : ";
	cin>>num1>>num2;
	
	if(num1>num2)
	{
		cout<<"Largest out of "<<num1<<" and "<<num2<<" is : "<< num1;
	}
	else
	{
		cout<<"Largest out of "<<num1<<" and "<<num2<<" is : "<< num2;
	}
}

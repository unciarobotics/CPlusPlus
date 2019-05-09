//Using Pointers in functions

//Program to swap numbers using pointers and functions

#include<iostream>
using namespace std;

void swapNumbers(int *num1,int *num2)
{
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
}

int main()
{
	int n1=5;
	int n2=8;
	cout<<"Before Swapping\t: "<<n1<<" "<<n2<<endl;
	
	swapNumbers(&n1,&n2);
	
	cout<<"After Swapping\t: "<<n1<<" "<<n2<<endl;
	
return 0;
}

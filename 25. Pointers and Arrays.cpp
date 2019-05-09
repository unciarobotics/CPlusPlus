// Pointers and Array are closely realated to each other

// FOR ALL THE OUTPUT STATEMENTS RESULT WILL BE THE SAME

#include<iostream>
using namespace std;

int main()
{
	const int size=4;
	int numbers[size]={4,6,2,9};
	int *ptrnumbers=&numbers[0];
	
	for(int i=0;i<size;i++)
	{
		cout<<numbers[i]<<" ";
	}
	
cout<<endl;
	for(int j=0;j<size;j++)
	{
		cout<<*(numbers+j)<<" ";
	}

cout<<endl;	
	for(int k=0;k<size;k++)
	{
		cout<<*(ptrnumbers+k)<<" ";
	}
cout<<endl;

cout<<*numbers<<" "<<*(numbers+1)<<" "<<*(numbers+2)<<" "<<*(numbers+3)<<endl;


return 0;
}

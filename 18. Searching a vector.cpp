//Program to search for randomly generated number using vectors

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

int main()
{	vector<int> vect;
	int entry;
	int found;
	srand(time(NULL));
	for(int i=0;i<10;i++)
	{vect.push_back(rand()%10+1);}
	for(int i=0;i<10;i++)
	{cout<<vect[i]<<endl;}
	cout<<"Enter your number: ";
	cin>>entry;
	found=vect.at(entry);
	
	cout<<"Your number was found at "<<found<<"th location";
	
return 0; 
}

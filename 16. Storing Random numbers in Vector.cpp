#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

void displayVector(vector<int> &vect)
{
	for(int j=0;j<vect.size();j++)
	{
		cout<<vect[j]<<" ";
	}
	
}

int main()
{	int number;
	vector<int>num;
	
	srand(time(NULL));				//seeding random number
	for(int i=0;i<100;i++)
	{
		number = rand() %100+1;
		num.push_back(number);
	}
displayVector(num);
return 0;	
}

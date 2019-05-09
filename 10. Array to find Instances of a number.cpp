// Program to find instances of a particular number in randomly generated array
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void initArray(int array[],int size)
{
	for(int a=0;a<size;a++)
	{array[a]=0;}
}

void generateNumbers(int array[], int size)
{
	srand(time(NULL));
	for(int i=0;i<size;i++)
	{array[i]=rand()% 100 + 0;}
}

void displayNumbers(int array[],int size)
{
	for(int j=0;j<size;j++)
	cout<<array[j]<<endl;
}

int findInstances(int array[],int compare[], int size)
{	
	for(int z=0;z<size;z++)
	{
		compare[z]=0;
	}

	for(int k=0;k<size;k++)
	{
		for(int l=0;l<size;l++)
		{
			if(array[1]==k)
			{compare[k]=compare[k]+1;}
		}
	}
return compare[size];
}


int main()
{
	int size=100;
	int numbers[size]; 
	int comparison[size];
	initArray(numbers,size);
	generateNumbers(numbers,size);
	displayNumbers(numbers,size);
	findInstances(numbers,comparison,size);
	
	for(int i=0;i<size;i++)
	{
		cout<<i<<": "<<comparison[i]<<endl;
	}
	initArray(numbers,size);
return 0;
}

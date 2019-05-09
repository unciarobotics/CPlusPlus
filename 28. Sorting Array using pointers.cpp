// Program to sort an array using swap function

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void buildArray(int arr[],int size)
{	
	srand(time(NULL));
	for(int i=0;i<size;i++)
	{arr[i]=rand()%10+1;}
}

void displayArray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{cout<<arr[i]<<" ";}
}

void ptrSwap(int *num1,int *num2)
{
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
}

void swapSortAlgorithm(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{	for(int j=i+1;j<size;j++)
		{	if(arr[i]>arr[j])
			ptrSwap(&arr[i],&arr[j]);
		}
	cout<<endl;
	displayArray(arr,size);
	}
}

int main()
{
	const int size=20;
	int numbers[size];
	buildArray(numbers,size);
	displayArray(numbers,size);
	swapSortAlgorithm(numbers,size);
	
	
return 0;
}

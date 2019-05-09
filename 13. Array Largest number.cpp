// Finding Largest number in an array

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int findLargest(int arr2[],int getSize)
{	int maxValue=arr2[0];
	for (int j=0;j<getSize;j++)
	{
		if(maxValue<arr2[j])
		{
			maxValue=arr2[j];
		}	
	}
return maxValue;
}

int findSmallest(int arr3[],int getSize)
{	int minValue=arr3[0];
	for (int j=0;j<getSize;j++)
	{
		if(minValue>arr3[j])
		{
			minValue=arr3[j];
		}	
	}
return minValue;
}

void displayArray(int ar[],int getSize)
{
	for(int k=0;k<getSize;k=k+5)
	{
		cout<<ar[k]<<"\t"<<ar[k+1]<<"\t"<<ar[k+2]<<"\t"<<ar[k+3]<<"\t"<<ar[k+4]<<endl;
	}
	cout<<endl;
}

int main()
{
	const int size=100;
	int arr[size];
	srand(time(NULL));
	for(int i=0;i<size;i++)
	{
		arr[i]=rand()% 999+0;
	}
cout<<"Your randomly generated numbers are:\n";	
displayArray(arr,size);
int max=findLargest(arr,size);
int min=findSmallest(arr,size);
cout<<"\nLargest number is\t: "<<max<<endl;
cout<<"Smallest number is\t: "<<min<<endl;
}

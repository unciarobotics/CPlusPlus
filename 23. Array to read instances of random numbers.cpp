// Program to count instance of randomly generated numbers

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void buildArray(int arr[],int size)
{
	srand(time(NULL));
	for(int i=0;i<size;i++)
	{
		arr[i]=rand()%size+0;
	}
}

void initArray(int arr[], int size)
{
	for(int i=0;i<size;i++)
	arr[i]=0;
}

void displayArray(int arr[],int size)
{
	for(int j=0;j<size;j++)
	{
		cout<<arr[j]<<endl;
	}
cout<<"_____________________"<<endl;
}

/*void initInstance(int inst[],int size)
{
	for(int z=0;z<size;z++)
	{ inst[z]=z;}
}*/
int main()
{	
	const int size=100;
	int numbers[size];
//	int instance[size];
	int histgm[size];
	initArray(histgm,size);
	initArray(numbers,size);
	buildArray(numbers,size);
	cout<<"RANDOM NUMBERS\n";
	displayArray(numbers,size);
//	initInstance(instance,size);
	
for(int m=0;m<size;m++)
	{
		for(int n=0;n<size;n++)
		{
			if(m==numbers[n])
			{histgm[m]+=1;}
		}
	}
cout<<"\nINSTANCES\n";
for (int q=0;q<size;q++)	
	{
		cout<</*instance[q]*/q<<": "<<histgm[q]<<endl;
	}
return 0;
}

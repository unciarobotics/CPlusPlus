#include<iostream>
using namespace std;

int largest(int num1, int num2, int num3)
{	int max;
	if(num1>=num2&&num1>=num3)
	{max=num1;}
	else if(num2>=num1&&num2>=num3)
	{max=num2;}
	else{max=num3;}
	return max;
}

int main()
{	int x,y,z;

	cout<<"_________________________________________________________________\n\n";
	cout<<"|\tPROGRAM TO CALCULATE LARGEST OF THREE NUMBERS\t\t|\n";
	cout<<"|  Note: Enter all three numbers with space, Press 000 to exit\t|\n";
	cout<<"_________________________________________________________________\n\n";
	
	
while(1)
	{
	cout<<"Enter you numbers (with space) : ";
	cin>>x;
	if(x==000)
	{break;	}
	else
	{
	cin>>y>>z;
	int answer=largest(x,y,z);
	cout<<"\nLargest number is : "<<answer<<endl<<endl;
    }
    }
return 0;
}

// Performiong Calculations on mmultidimensional Arrays

#include<iostream>
using namespace std;

double findSum(int sumArray[][5],int fix)
{	int sum=0;
	for(int k=0;k<5;k++)
	{
		 sum=sum+sumArray[fix][k];
	}
return sum;
}

int main()
{	
	cout<<"._______________________________________________________________.\n\n";
	cout<<"|\t\t     XYZ SCHOOL (STUDENT'S DATA)     \t\t|\n";
	cout<<"|\t     Note: Dont exchange numbers with strings     \t|\n";
	cout<<"|\tType null to stop entering data and seee results\t|\n";
	cout<<"._______________________________________________________________.\n\n";
	int array[100][5];
	string name[20];
	int arraySize=0;
	int counter=0;
	double total;
	double per;
	
	while(1)
	{
	cout <<"Enter Name of the student: ";
	cin>>name[counter];
	if(name[counter]!="null")
	{
	cout<<"Enter marks (Physics Chemistry Maths Computers English): ";
	for (int i=0;i<5;i++)
	{
		cin>>array[counter][i];
	}
	counter++;
	}	
	else
	{
		break;
	}
	}

cout<<"\n\n\t\t\t\tSTUDENTS DATA\n\n";
cout<<"=============================================================================\n";
cout<<"S.NO.\tNAMES\t\tPHY\tCHEM\tMATH\tCOMP\tENG\tTOTAL\tPER%\n\n";
cout<<"=============================================================================\n";
for(int j=0;j<counter;j++)
{	cout<<" "<<j+1<<"\t"<<name[j]<<"\t\t";
	for(int k=0;k<5;k++)
	{
		cout<<array[j][k]<<"\t";
	}
	total=findSum(array,j);
	per=total/5;
	cout<<total<<"\t";
	cout<<per<<"\t";
	total=0;
	cout<<endl;
}
cout<<"=============================================================================\n";
return 0;
}


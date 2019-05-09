#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<algorithm>
using namespace std;

void displayNumbers(vector<int> &vect)
{	for(int l=0;l<vect.size();l++)
	{cout<<vect[l]<<endl;}
	cout<<endl;
}

void generateNumbers(vector<int> &gnum,int value)
{	srand(time(NULL));
	for(int m=0;m<value;m++)
	{	gnum.push_back(rand()%value+1);	}
}

void generateString(vector<string> &names)
{   string name;
	cout<<"\nENTER NAMES YOU WANT TO SORT, TYPE n WHEN DONE\n\n";
while(1)
{
	cout<<"Enter a name: ";
	cin>>name;
	if(name=="n")
	{
		break;
	}
	else
	{
		names.push_back(name);
	}
}

}

void displayString(vector<string>&dispNames)
{
	for(int k=0;k<dispNames.size();k++)
	{
		cout<<dispNames[k]<<endl;
	}
cout<<endl;
}

int main()
{	

	cout<<"_________________________________________________________________\n\n";
	cout<<"|\t\tPROGRAM TO SORT NUMBERS OR NAMES\t\t|\n";
	cout<<"|\tNote: Numbers will be automatically generated whereas\t|\n";
	cout<<"|\t\tnames should be entered manually\t\t|\n";
	cout<<"_________________________________________________________________\n\n";
	vector<int>numbers;
	int num;
	string choice;
while(1)	
{	char cntrl;
	int control=0;
	cout<<"\nYou want to generate numbers or names? ";
	cin>>choice;
	
	if (choice=="numbers")
	{
	cout<<"How many numbers you want to generate ? ";
	cin>>num;
	generateNumbers(numbers,num);
	displayNumbers(numbers);
	cout<<endl;
	sort(numbers.begin(),numbers.end());
	cout<<"\nAfter sorting numbers are: \n";
	displayNumbers(numbers);
	cout<<"Want to continue? (y/n): ";
	cin>>cntrl;
		if(cntrl=='n')
		{
			control=1;
		}
		if(cntrl=='y')
		{
			control=0;
		}
	}
	
	if(choice=="names")
	{	vector<string>myNames;
		generateString(myNames);
		cout<<"\nAfter sorting Names are: \n";
		sort(myNames.begin(),myNames.end());
		displayString(myNames);
		cout<<"Want to continue? (y/n): ";
		cin>>cntrl;
		if(cntrl=='n')
		{
			control=1;
		}
		if(cntrl=='y')
		{
			control=0;
		}	
	}
	
	if(control==1)
	{
		break;
	}
}
	
return 0;
}

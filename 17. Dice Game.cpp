#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	cout<<"._______________________________________________________________.\n\n";
	cout<<"|\t\t\t     DICE GAME     \t\t\t|\n";
	cout<<"|\t\t\tType n to exit game\t\t\t|\n";
	cout<<"._______________________________________________________________.\n\n";
	
	char entry;
	int num;
	
	while(1)
	{	
		cout<<"Do you want to roll the dice (y/n): ";
		cin>>entry;
		srand(time(NULL));
		if(entry=='y')
		{	num=rand()%6+1;
			cout<<"Rolling the dice.......\n";
			cout<<num<<endl<<endl;
		}
		if(entry=='n')
		{
			break;
		}
	}
return 0;	
}

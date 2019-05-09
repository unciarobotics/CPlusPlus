#include<iostream>
#include<vector>
using namespace std;

int main()
{	int i;
	vector<string>names;
	
	cout<<"ENTER NAMES YOU WANT TO DISPLAY LATER\n";
	while(1)
	{   string name;
		while(1)
		{
		cout<<"Enter Name :";
		cin>>name;
		if(name=="end")
		{break;}
		else
		{names.push_back(name);}
		}
		break;
	}
	cout<<"\n\nYou Entered these Names\n";
	for(int j=0;j<names.size();j++)
	{
		cout<<names[j]<<endl;
	}
return 0;
}

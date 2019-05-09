// Program that will accept your Name and show initials

#include<iostream>
using namespace std;

string getinitials(string fname,string lname)
{
	string fstinit,lstinit;
	fstinit=fname.substr(0,1);
	lstinit=lname.substr(0,1);
	return fstinit + lstinit;

}

int main()
{	
	string firstName, lastName,result;
	cout<<"_________________________________________________________________\n\n";
	cout<<"|\t\tPROGRAM TO GET INITIALS IN A NAME\t\t|\n";
	cout<<"|\t\tNote: Type exit to halt the Program\t\t|\n";
	cout<<"_________________________________________________________________\n\n";
	while(1)
	{
	cout<<"Enter Your Full Name (with Space): ";
	cin>>firstName;
	if(firstName=="exit")
	{break;}
	else
	{cin>>lastName;
	result=getinitials(firstName,lastName);
	cout<<"your initials are: "<<result<<endl<<endl;
	}
	}
return 0;	
}

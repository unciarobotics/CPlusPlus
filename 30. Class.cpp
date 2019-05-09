#include<iostream>
using namespace std;

class Name{
	private:
		string firstName;
		string lastName;
	
	public:
		Name(string fName,string lName)
		{
			firstName=fName;
			lastName=lName;
		}
		
		string getName()
		{
			return firstName+" "+lastName;
		}
		
};

int main()
{	string first, last;
	cout<<"Enter first Name: ";
	cin>>first;
	cout<<"Enter last Name: ";
	cin>>last;
	
	Name myName(first,last);
	cout<<"Your Name is: "<<myName.getName()<<endl;
return 0;
}

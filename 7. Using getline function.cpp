#include<iostream>
using namespace std;

int main()
{
	string answer;
	int count=0;
//	cout<<"Name the last planet in solar system:  ";

//FIRST METHOD

/*	getline(cin,answer);
	if
	(answer=="pluto"|answer=="Pluto")
	{
		cout<<"You got it correct "<<endl;
	}
	else
	{
		cout<<"Sorry its incorrect"<<endl;
	}
*/




//  SECOND METHOD

/*	getline(cin,answer);
	while(answer=="pluto")
	{
	cout<< "You got it correct."<<endl;
	break;
	}
	cout<<"incorrect"<<endl;
*/	
	

// THIRD METHOD							my favourite
	while(1)
	{   cout<<"Name the last planet in solar system: ";
		getline(cin, answer);
		if(answer=="pluto"||answer=="Pluto")
		{   int x=1;
			cout<< "Your answer is correct"<<endl;	
			cout<<"Type 0 and hit enter to exit\n";
			cin>>x;
			if(x==0)
			{break;}
			else
			{while(1)
			  {
			  cout<<"There is nothing more to do with this Program. The Program will halt itself\n";
			  break;
			  }
			}break;
		}
		else
		{
			count=0;
			cout<<"Incorrect...... Try Again"<<endl;
		}
		

	}
	
return 0;
}

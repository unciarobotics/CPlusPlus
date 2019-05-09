#include<iostream>
#include<cstdio>	// For using printf
#include<iomanip>	// For using setprecision()
using namespace std;

int main()
{   double pi = 3.14159265;
	

	while(1)
	{int num=1;
	string hello="Hello World !";
	cout<< hello <<"\n";
	//Aliter;	
	printf("%s\n","Hello World !\n");
	
	//without set Precision
	cout<<"Without using setprecision pi = "<<pi<<endl<<endl;

	//Using setprecision
	cout<<setprecision(10);
	cout<<"Using setprecision pi = "<<pi<<endl<<endl;
    
    cout<<"Type 0 and press Enter to exit.";
    cin>>num;
    if(num==0)
    {break;}
    }
return 0;
}

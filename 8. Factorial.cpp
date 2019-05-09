//Program for Factorial
#include<iostream>
using namespace std;

int main()
{
  unsigned long factorial; int num,fix;char response;
  cout<<"FACTORIAL CALCULATION\n";

  while(response!='n')
  { 
  cout<<"\nEnter your Number : ";
  cin>>num;
  fix=num;
  factorial=num;
  	while(num!=1)
  	{
  	num--;
  	factorial*=num;
 	}
  cout<<"\n"<<fix<<" factorial is equal to "<<factorial;
  cout<<"\nWant to continue? y/n : ";
  cin>>response;
  
  }
  return 0;
}

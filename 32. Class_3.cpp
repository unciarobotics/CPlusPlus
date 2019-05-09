#include<iostream>
using namespace std;

class Date{
	int day,month, year;
	public:
	
	Date(int d,int m, int y)
	{
		day=d;month=m;year=y;
	}
	
	int getday()
	{
		return day;
	}
	
	int getmonth()
	{
		return month;
	}
	
	int getyear()
	{
		return year;
	}
		
	int getDate(){
		cout<<"\nDate is\t: "<<getday()<<"."<<getmonth()<<"."<<getyear()<<endl;
	}
};

int main()
{
	Date today(31,07,2016);
	
	cout<<"Day\t: "<<today.getday()<<endl;
	cout<<"Month\t: "<<today.getmonth()<<endl;
	cout<<"Year\t: "<<today.getyear()<<endl;
	today.getDate();
	
return 0;
}


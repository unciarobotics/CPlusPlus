#include<iostream>
using namespace std;

class Date{
	private:
		int day,month,year;
		
	public:
		Date(int d,int m,int y)
		{
			d=day;
			m=month;
			y=year;
		}
	
		int getDay()
		{
			return d;
		}
		
		int getMonth()
		{
			return m;
		}
		
		int getYear()
		{
			return y;
		}
};

int main()
{
	Date today(30,7,2016);
	int dt=today.getDay();
	int dm=today.getMonth();
	int dy=today.getYear();
	
	cout<<"Date Today: "<<dt<<"/"<<dm<<"/"<<dy; 
return 0;
}

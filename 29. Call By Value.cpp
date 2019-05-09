#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int x,y;
	cout<<"Enter Numbers: ";
	cin>>x>>y;
	cout<<"\nBefore Swapping\t: "<<x<<" "<<y<<endl;
	swap(&x,&y);
	cout<<"After Swapping\t: "<<x<<" "<<y<<endl;
	
return 0;
}

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

int main()
{
	srand(time(NULL));
	int number;
	for(int i=1;i<=10;i++)
	{
		number=rand()%100+1;
		cout<<number<<endl;
	}
return 0;
}

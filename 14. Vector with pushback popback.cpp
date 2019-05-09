#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<string>names;
	names.push_back("Aryabhat");
	names.push_back("Raman");
	names.push_back("Ramanujan");
	names.push_back("Pythagoras");
	
	for(int i=0;i<4;i++)
	{
	 for(int j=0;j<names.size();j++)
	 {cout<<names[j]<<" ";}
	 names.pop_back();
	 cout<<endl;
	}

return 0;
}

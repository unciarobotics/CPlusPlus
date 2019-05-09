//Pointer Declaration and definition

#include<iostream>
using namespace std;

int main()
{
	int Num=10;
	int Num2=24;
	int Num3=45;
	
	int *ptrNum=&Num;
	int	*ptrNum2=&Num2;
	int *ptrNum3=&Num3;
	
	cout<<"Address: "<<ptrNum<<"\t"<<ptrNum2<<"\t"<<ptrNum3<<endl;
	cout<<"Numbers: "<<*ptrNum<<"\t\t"<<*ptrNum2<<"\t\t"<<*ptrNum3<<endl;
	
return 0;
	
}


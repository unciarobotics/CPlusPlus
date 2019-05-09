#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
double month1, month2;
month1 = 1061.2363;
month2 = 1073.47;

cout<<setprecision(10);
cout<<"Month\t"<<"Reading\n\n";
cout<<1<<"\t"<<month1<<"\n";
cout<<2<<"\t"<<month2<<"\n";
return 0;
}

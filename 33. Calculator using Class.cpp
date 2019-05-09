//Calculator using class

#include<iostream>
using namespace std;

class calculator{
	public:
		double add(double n1, double n2){
			return n1 + n2;
		}
		
		double sub(double n1, double n2){
			return n1 - n2;
		}
		
		double mult(double n1,double n2){
			return n1 * n2;
		}
		
		double div(double n1, double n2){
			return n1 / n2;
		}
		
		double calculate(double n1, double n2, char op){
			if (op=='+'){
				return add(n1, n2);
			}
			if(op=='-'){
				return sub(n1,n2);
			}
			if(op=='*'){
				return mult(n1,n2);
			}
			if(op=='/'){
				return div(n1,n2);
			}
		}
};

int main()
{
	calculator c;
	double num1, num2;
	char operand;
	while(true){
		cout<<">";
		cin>>num1>>operand>>num2;
		cout<<"Result\t:"<<c.calculate(num1,num2,operand)<<endl;
	}
return 0;
}

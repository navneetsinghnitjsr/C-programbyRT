//Write a program to illustrate the use of unary postfix increment and decrement operators.
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number";
	cin>>num;
	//using postfix unary increment operator
	cout<<"\nVariable Value is"<<num;
	cout<<"\nVariable value aftr postfix(num++)"<<num++;
	cout<<"\nand now variable Value is"<<num;
	//using postfix unary decrement operator
	cout<<"\n\nvariable value is:"<<num;
	cout<<"\nVariable value of aftr postfix decrement operator:"<<num--;
	cout<<"\nValue of variable is:"<<num;
	return 0;
}

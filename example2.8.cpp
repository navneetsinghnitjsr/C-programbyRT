//Write a program to illustrate the use of unary prefix increment and decrement operators.
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number";
	cin>>num;
	cout<<"\nthe Number entered is :\t"<<num;
	//using prefix unary increment operator
	cout<<"\nThe increaments (++num) value of number is:\t"<<++num;
	cout<<"\nThe variable value is :\t"<<num;
	//using prefix unary decrement operator
	cout<<"\nThe value of num is :\t"<<num;
	cout<<"\nThe increament (--num) value of number is:\t"<<--num;
	cout<<"\nthe value of num is :\t"<<num;
	return 0;
}

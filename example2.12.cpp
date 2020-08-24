//write a program to demonstate the use of assignment operator
#include<iostream>
using namespace std;
int main()
{
	int num1=3, num2=5;
	cout<<"\n Initial Value of Num1 ="<<num1<<"\n Initial Value of Num2 ="<<num2;
	num1 +=num2*4-7; //assignment operatr
	cout<<"\n After evaluation of the Expression Num1 ="<<num1<<" and num2 ="<<num2;
	return 0;
}

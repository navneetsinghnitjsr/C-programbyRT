//write a program to calculate the average of two numbers and print their deviation
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	float avg,dev1,dev2;
	cout<<"Enter 2 Numbers : ";
	cin>>num1>>num2;
	avg=(num1+num2)/2;
	dev1=num1-avg;
	dev2=num2-avg;
	cout.precision(3);
	cout<<"\nDeviation of First number is :"<<dev1;
	cout<<"\nDeviation of Second number is :"<<dev2;
	return 0;
	
}

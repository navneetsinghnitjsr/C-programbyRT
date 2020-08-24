//write a program to swap two number using temporary varibale
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,temp;
	cout<<"Enter Two numbers respectively :";
	cin>>num1>>num2;
	cout<<"\nEntered number is 1st Numebr :"<<num1<<"\n and Second Number is :"<<num2;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<"\n\n After swaping \n\nThe numebr is 1st number is :"<<num1<<"\n and Second Number is : "<<num2;
	return 0;
 } 

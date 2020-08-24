//write a program to addition substraction multiplication division of two floating number
#include<iostream>
using namespace std;
int main()
{
	float n1,n2;
	cout<<"Enter two numbers";
	cin>>n1>>n2;
	cout.precision(3);
	cout<<endl<<"Addtion of two Given number is : "<<n1+n2;
	cout<<endl<<"Substraction of two Given number is : "<<n1-n2;
	cout<<endl<<"Multiplication of two Given number is : "<<n1*n2;
	cout<<endl<<"Division of two Given number is : "<<n1/n2;
	//cout<<endl<<"Modulo of two Given number is : "<<n1 % n2;
	return 0;
	
}

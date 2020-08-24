//Write a program to convert degree fahrenheit into degree celsius
#include<iostream>
using namespace std;
int main()
{
	float fahrenheit, celsius;
	cout<<"Enter Temprature into fahrenheit : ";
	cin>>fahrenheit;
	celsius=(0.56)*(fahrenheit-32);
	cout<<"\n\nThe Temprature into Celsius is : "<<celsius;
	return 0;
}

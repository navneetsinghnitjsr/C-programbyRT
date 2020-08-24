//Write a program calculate Area of a circle
#include<iostream>
#define Pi 3.14
using namespace std;
int main()
{
	float radius;
	double area, circumference;
	cout<<"Enter the Radius of the circle";
	cin>>radius;
	area=Pi*radius*radius;
	circumference=2*Pi*radius;
	cout<<"\n The Area of the circle is = "<<area<<"\n The Circumference of the Circle is = "<<circumference;
	return 0;
}

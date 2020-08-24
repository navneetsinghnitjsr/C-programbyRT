//write a program to calculate area of triangle using Heron's Formula. area=(sqrt(S*(S-a)*(s-b)*(s-c)))
#include<iostream>
//#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,S,area;
	cout<<"Enter the values of sides : \t";
	cin>>a>>b>>c;
	S=(a+b+c)/2;
	//sqrt is mathametical function defind in math header file
	area=(sqrt(S*(S-a)*(S-b)*(S-c)));
	cout<<"Area of the triangle is : \t"<<area;
	return 0;
}

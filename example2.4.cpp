//write a program to calculate the distance between 2 point
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float x1,x2,y1,y2;
	float distance;
	cout<<"Enter the first cordinate of x and y";
	cin>>x1>>y1;
	cout<<"\n Enter the second cordinate of x and y";
	cin>>x2>>y2;
	//sqrt function defind in Math header file
	distance=(sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
	//cout.precision(2);
	cout<<"\n Distance is = "<<distance;
	return 0;
}

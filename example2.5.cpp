//write a program to perform addition, subtraction, mulriplication, division, integer division and modulo divisoion on two integer
#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	int add_res=0,sub_res=0,mul_res=0,div_res=0,idiv=0,mdiv=0;
	float fdiv=0.0;
	cout<<"Enter the 2 Numbers";
	cin>>num1>>num2;
	add_res=num1+num2;
	sub_res=num1-num2;
	mul_res=num1*num2;
	idiv=num1/num2;
	mdiv=num1%num2;
	fdiv=(float)(num1/num2);//not working
	cout<<endl<<num1<<" + "<<num2<<" = "<<add_res;
	cout<<endl<<num1<<" - "<<num2<<" = "<<sub_res;
	cout<<endl<<num1<<" * "<<num2<<" = "<<mul_res;
	cout<<endl<<num1<<" / "<<num2<<" = "<<idiv<<"\t Integer Division";
	cout<<endl<<num1<<" % "<<num2<<" = "<<mdiv<<"\t Modulo Division";
	cout<<endl<<num1<<" / "<<num2<<" = "<<fdiv<<"\t Normal Division";
	return 0;
}

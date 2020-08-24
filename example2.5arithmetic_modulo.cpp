#include<iostream>
using namespace std;
int main()
{
	int c;
	cout<<"enter Real Number"<<endl;
	cin>>c;
	cout<<"Result is ="<<c%5;
	//wrong. modulus operator is being applied to the float operand
	return 0;
}

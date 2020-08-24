//write a program to swap 2 number without using temporary Varidable
#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"Enter 2 numebrs";
	cin>>n1>>n2;
	cout<<"\nBefore swap"<<"\n\t\tNumber 1st:"<<n1<<"\n\t\tNumber 2nd: "<<n2;
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	cout<<"\nAfter swap"<<"\n\t\tNumber 1st:"<<n1<<"\n\t\tNumber 2nd: "<<n2;
	return 0;
}

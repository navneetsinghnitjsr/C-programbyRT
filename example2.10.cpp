//write a program to find largest two numebrs using ternary(conditional) operator
#include<iostream>
using namespace std;
int main()
{
int a,b,large;
cout<<"Enter Two Numbers:";
cin>>a>>b;
//condition operator applying
large=((a>b)?a:b);
cout<<"\nThe Largest number is :"<<large;
return 0;
}

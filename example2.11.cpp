//write a program to find largest three numebrs using ternary(conditional) operator
#include<iostream>
using namespace std;
int main()
{
int a,b,c,large;
cout<<"Enter Three Numbers:";
cin>>a>>b>>c;
//condition operator applying
large=((a>b)?((a>c?a:c)):((b>c)?b:c));
cout<<"\nThe Largest number is :"<<large;
return 0;
}

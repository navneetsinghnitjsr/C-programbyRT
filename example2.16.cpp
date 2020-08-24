//write a program to print the 1's place of a number of the putted number
#include<iostream>
using namespace std;
int main(){

int num,n;
cout<<"enter the Number : ";
cin>>num;
cout<<"Entered number is :"<<num;
n=num%10;
cout<<"\nThe 1's place of the putted number is :"<<n;
return 0;
}

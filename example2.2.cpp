//Write a program to read and print values of variables of diffrent data types
#include<iostream>
using namespace std;
int main()
{
	//declare variable datatype
	int num;
	float amt;
	double pi;
	char a;
	long int population_of_india;
//	long int &y=population_of_india;//using reference variable of long int datatype
	char msg[]="hello";
	cout<<"Enter the Number";
	cin>>num;
	cout<<endl<<"Enter amount";
	cin>>amt;
	cout<<endl<<"Enter PI value";
	cin>>pi;
	cout<<endl<<"Enter Charector";
	cin>>a;
	cout<<endl<<"Enter population of india";
	cin>>population_of_india;
	//cout<<endl<<"Enter Massage";
	//cin>>msg;
	//print all the values simulteniously
	cout<<"\n Number is"<<num<<"\n Amount is"<<amt<<"\n PI value is"<<pi<<"\n Charactor is"<<a<<"\n Population is"<<num<<population_of_india<<"\n Massage is"<<msg;
	return 0;
}

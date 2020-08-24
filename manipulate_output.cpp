//Using manipulate Obtain the same output 
#include<iostream>
#include<math.h>
setw(int);
swtfill(char);
using namespace std;
int main()
{
	int num;
	int n=10;
	cout<<"\n Enter the number";
	cin>>num;
	//Display hexadecimal of num
	cout<<"Hexadecimal of"<<num;
	cout<<setw(10)<<setfill("_")<<hex<<num;
	return 0;
}

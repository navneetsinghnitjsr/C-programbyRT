//write a program read the charactor to the upper case and print the lower case
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter the Uppercase character : ";
	cin>>ch;
	cout<<"\nThe Charecter entered is "<<ch<<"and its lower case character is :"<<(char)tolower(ch);
	return 0;
}

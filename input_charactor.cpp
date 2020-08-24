#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout<<"Enter charector";
	//cin.get(grade); //the value for grade is read
	grade=cin.get(); //a charector is read and assign to variable grade;
	cout<<"Greade inserted "<<grade<<endl;
	cout.put(grade); //print charector using cout.put() function
	return 0;
}

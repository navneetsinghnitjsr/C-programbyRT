/*write a program to determine the character entered by user */
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    char ch;
    while(1)
    {
        cout<<"\n Enter any key";
    cin>>ch;
    if(isalpha(ch)>0)
        cout<<"\n Entered Character";
    if(isdigit(ch)>0)
        cout<<"\n Entered Digit";
    /*if(isprint(ch)>0)
        cout<<"\n \tPrintable character";*/
    if(ispunct(ch)>0)
        cout<<"\n \n Entered Punctuation Mark";
    if(isspace(ch)>0)
        cout<<"Space character";
    }
    return 0;
}

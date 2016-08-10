#include<iostream.h>
#include<conio.h>
void main()
{
int first,second;
char choice;
cin>>first;
cin>>choice;
switch(choice)
{
case '+':
cin>>second;
cout<<"addition "<<(first+second);
 break;
case '-':
cin>>second;
cout<<"minus "<<(first-second);
break;

case '/':
cin>>second;
cout<<"divide "<<(first/second);
break;

case '*':
cin>>second;
cout<<"muttiplication "<<(first*second);
break;
}
getch();
}

#include<iostream.h>
#include<conio.h>
void main()
{
int a=34,b=0,c;
try{


c=a/b;


throw "exception bitch";
cout<<c;
}
catch(char *p){
cout<<p;
}
getch();
}


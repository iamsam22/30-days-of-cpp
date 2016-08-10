#include<iostream.h>
#include<conio.h>

class Simple {
public:
int a,b;
public:
void input()
{
cout<<"enter the two numbers";
cin>>a>>b;
}

   int add() {
        		 return (a+b);
   }

  		 int subtract() {
   		   		return (a-b);
   }

};



void main() {
Simple s1;
s1.input();
int a = s1.add();
int b = s1.subtract();
cout<<a<<endl;
cout<<b<<endl;



getch();
}
#include<iostream.h>
#include<conio.h>
class simple{
int a;
public:
void parA (int a)
	{
   this->a = a;
   }
void showA ()
	{
   cout<<a<<endl;
   }
};
class captain : public simple {
int b;
public:
void parB (int b)
	{
   this->b = b;
   }
void showB ()
	{
   cout<<b<<endl;
   }
};

class rodger : public captain{
int c;
public:
void paraC (int c)
	{
   this->c = c;
   }
void showC()
	{
   cout<<c<<endl;
   }
};



void main(){
rodger s1;

s1.parA(90);
s1.parB(56);
s1.paraC(69);
s1.showA();
s1.showB();
s1.showC();

getch();
}

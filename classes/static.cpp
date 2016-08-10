#include<iostream.h>
#include<conio.h>

class Simple{

public:

static int a = 10;

int b;

void static show() {
cout<<"value of a:"<<a<<endl;

}
void integer(int z){
b=z;
cout<<"value of b: " <<b<<endl;
 }

};

void main() {
Simple s1;

Simple :: show();
s1.integer(20);

getch();
}
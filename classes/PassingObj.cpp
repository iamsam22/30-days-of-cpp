#include<iostream.h>
#include<conio.h>

class Simple {

int a, b;
public:
Simple() { }

Simple(int a, int b) {
this->a = a;
this->b = b;
}


Simple add(Simple s) {
Simple t;
t.a = a + s.a;
t.b = b + s.b;
return t;
}

void show() {
cout<<"Value of a: "<<a<<endl;
cout<<"Value of b: "<<b<<endl;
}

};

void main() {

Simple s1(4, 8);
Simple s2(1, 9);
Simple s3;

s3 = s2.add(s1);
s3.show();
getch();
}



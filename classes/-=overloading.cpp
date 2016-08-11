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




void operator-=(Simple s){
a-=s.a;
b-=s.b;

}



void show() {
cout<<"Value of a: "<<a<<endl;
cout<<"Value of b: "<<b<<endl;
}

};

void main() {

Simple s1(4, 8);
Simple s2(5,7);
s1-=s2;
s1.show();
getch();
}

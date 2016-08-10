#include<iostream.h>
#include<conio.h>
#include<stdio.h>


template<class T>    // T is generic DataType

class Demo {
public:
T a, b;

void set(T a, T b) {
this->a = a;
this->b = b;
}

void display() {
cout<<"Value of a: "<<a<<endl;
cout<<"Value of b: "<<b<<endl;
}

void add(){
cout<<"total: "<(a+b)<<endl;
}};




void main() {

Demo<int> demo;
demo.set(23, 78);
demo.display();
demo.add();
getch();

}

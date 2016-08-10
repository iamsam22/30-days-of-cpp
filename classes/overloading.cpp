#include<iostream.h>
#include<conio.h>


class OptrOverDemo {

int a, b;
public:

OptrOverDemo() {
}

OptrOverDemo(int a, int b) {
this->a = a;
this->b = b;
}

void copy(OptrOverDemo e) {
a = e.a;
b = e.b;
}

OptrOverDemo add(OptrOverDemo e) {
OptrOverDemo t;
t.a = a + e.a;
t.b = b + e.b;
return t;

}


void operator++() {
a++;
b++;
}

void show() {
cout<<"Value of a: "<<a<<endl;
cout<<"Value of b: "<<b<<endl;
}

};



void main() {

OptrOverDemo d(4, 7);
OptrOverDemo d1;
OptrOverDemo d2;
d1.copy(d);

d2 = d1.add(d);
d2.show();
getch();
}

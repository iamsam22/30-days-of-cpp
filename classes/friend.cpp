#include<iostream.h>
#include<conio.h>

class enemyDemo;
class FriendDemo {
int a;

public:

FriendDemo(int a) {
this->a = a;

}

friend void add (FriendDemo,enemyDemo);


};

class enemyDemo {
int b;

public:

enemyDemo(int b) {
this->b = b;

}

friend void add (FriendDemo a,enemyDemo b);

};
void add (FriendDemo a,enemyDemo b)
{
cout<<" "<<(a.a + b.b)<<endl;

}



void main() {
FriendDemo s1(4);
enemyDemo s2(2);
add(s1,s2);



getch();
}


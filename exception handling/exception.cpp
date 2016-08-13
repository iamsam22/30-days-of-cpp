#include<iostream.h>
#include<conio.h>
#define SIZE 5

void main() {


int a[SIZE],i,d,n;

cout<<"how many elements you want to enter";
cin>>n;


cout<<"enter values";
try{
for (i = 0;i < n; i++){

if(i >= SIZE) {
throw "exception\n" ;
}
cin>>a[i];
}

}
catch(char *p){
cout<<p;
}

for(i=0;i<SIZE;i++){
cout<<"\n"<<a[i];
}
getch();
}

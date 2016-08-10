#include<iostream.h>
#include<conio.h>
void main(){
int a[] = {3, 65, 1, 7, 8} , i,big,small,sb;
sb=a[0];
small=a[0];
big=a[0];

for(i = 0;i < 5; i++) {
if(a[i]>big)
{
big=a[i];
}

if(a[i]<small)
{
small=a[i];
}
if(a[i] < big && a[i] > sb)
{
sb=a[i];
}


}

cout<<big;
cout<<"    "<<small;
cout<< "   " <<sb;



getch();
}



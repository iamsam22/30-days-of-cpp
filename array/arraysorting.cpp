#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,c,a[10];
   clrscr();
   printf("\n enter the elements \n");
	for(i=0;i<=9;i++)
  {
  	scanf("%d",&a[i]);
    }
   for(i=0;i<=9;i++)
  {
   for(j=0;j<=9;j++)
  {
   if (a[j]>a[j+1])
   {
   c=a[j];
   a[j]=a[j+1];
   a[j+1]=c;
    }}}
   for(i=0;i<=9;i++)
  {
  	printf("\n sorted no. is %d",a[i]);

    }


   getch();
}



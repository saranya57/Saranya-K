#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,i,t=0,n;
clrscr();
printf("enter the number of terms\n");
scanf(%d",&n);
printf("the fibonacci series is");
for(i=1;i<=n;i++)
{
printf("%d ",a);
t=a+b;
a=b;
b=t;
}
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("enter the number\n");
scanf("%d\n",&a);
b=a;
while(a>0)
{
c=a%10;
d=d+c;
a=a/10;
}
printf(" tne number of digits for number %d =%d",b,d);
getch();
}

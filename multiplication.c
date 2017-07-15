#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the number");
scanf("%d %d",&a);
for(b=1;b<=10;b++)
{
printf("multiplication table %d * %d =%d",a,b,a*b);
}
getch();
}


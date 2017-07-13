#include<stdio.h>
#include<conio.h>
void main()
{
int b,e,r;
clrscr();
printf("enter the value for e\n");
scanf("%d\n",&e);
printf("enter the value for b\n");
scanf("%d\n",&b);
while(e!=0)
{
r=r*b;
e--;
}
printf(" the power of a numbers %d ^  %d =%d \n);
getch();
}

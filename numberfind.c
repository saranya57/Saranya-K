#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("enter the value for num");
scanf("%d\n",&num);
if(num<0.0)
{
printf("the number is negative\n");
elseif(num>0.0)
{
printf("the number is positive\n");
else
{
printf("the number is zero\n");
}
}
}
}


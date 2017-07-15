#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,b,r=0;
clrscr();
printf("enter three digits number\n");
scanf("%d\n",&n);
a=n;
while(a!=0)
{
b=a%10;
r=b*b*b;
a/=10;
}
if(r==n)
{
printf(" %d is a amstorng number");
}
else
printf(" %d is not a armstrong number");
getch();
}

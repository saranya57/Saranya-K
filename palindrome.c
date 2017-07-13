#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,r=0;
clrscr();
printf("enter the value for n");
scanf("%d\n",&n);
a=n;
while(a!=0)
{
r=(r*10)+(n%10);
n=n%10;
}
if(r==a)
{
printf("the number is palindrome");
}
else
{
printf("the number is not a palindrome");
}
getch();
}

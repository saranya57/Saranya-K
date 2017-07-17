#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,i,gcd;
clrscr();
printf("print the two numbers");
scanf("%d,%d",&a,&b);
for(i=1;i<=a&&i<=b;i++)
{
if(a%i==0 && b%i==0)
gcd==i;
}
printf("gcd is %d",&gcd);
getch();
}

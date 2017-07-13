#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the values for a and b");
scanf("\n %d \n %d",&a,&b);
if(a<b)
{
for(c=a;c<=b;c++);
{
if(c%2==1)
printf(" %d",c);
}
}
else
{
for(c=b;c<=a;c++)
{
if(c%2==1)
printf("%d",c);
}
getch();
}


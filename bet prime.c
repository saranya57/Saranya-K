#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,i,f;
clrscr();
printf("enter the two numbers");
scanf("%d  %d",&a,&b);
while(a<b)
{
f=0;
for(i=2;i<a/2;i++)
{
if(a%i==0)
{
f=1;
break;
}
}
if(f==0)
printf("%d",a);
++a;
}
return 0;
getch();
}

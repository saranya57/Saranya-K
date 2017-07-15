#include<stdio.h>
#include<math.h>
void main()
{
int a,f=1,n;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(a=1;a<=n;a++)
f=f*a;
printf("the factorial number is %d",f);
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int number,sum=0,i=1;
clrscr();
printf("enter the number\n");
scanf("%d\n",&number);
for(i=1;i<=number;i++)
{
sum=sum+number;
}
printf("sum=%d",sum);
getch();
}

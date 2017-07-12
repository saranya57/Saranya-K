#include<stdio.h>
#include<conio.h>
void main()
{
int y;
clrscr();
printf("enter the year\n");
scanf("%d\n",&y);
if(y%4||y%100||y%400)
printf("the year is leap year");
else
prinrf("It is not a leap year");
getch();
}

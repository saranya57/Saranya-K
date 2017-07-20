#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 int t,i;
 char s[30];
 printf("Enter any string: ");
 gets(s);
 for(i=0; s[i]!='\0'; i++)
 {
   if(s[i-1]==' ' || i==0)
   {
     if(s[i]>='a' && s[i]<='z')
       s[i]=s[i]-32;
     else
       if(s[i]>='A' && s[i]<='Z') 
     s[i]=s[i]+32; 
   }
   printf("%c",s[i]);
 }
 getch();
 return 0;
}

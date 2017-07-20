#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
     char s[20],t;
     int i,j;
     clrscr();
     printf("\nEnter a string : ");
     scanf("%s",s);
     printf("\n\nOriginal String     : %s",s);
     for(i=0;i<strlen(s);i=i+2){
     t = s[i];
     s[i] = s[i+1];
     s[i+1] = t;
     }
     printf("\nAfter Swap String      : %s",s);
     getch();
}
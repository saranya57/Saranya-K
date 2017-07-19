#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 
int main(){
    char input[20];
    printf("Enter a String for Integer conversion \n");
    gets(input);
 
    printf("Integer: %d \n", atoi(input));
    getch();
    return 0;
}
#include <stdio.h>
#define MAX_SIZE 100 


int main()
{
    char str[M_S];
    int as, ds, os, i;

    as = ds = os = i = 0;


  
    printf("Enter any string : ");
    gets(str);

    
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            as++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            ds++;
        }
        else
        {
            os++;
        }

        i++;
    }

    printf("As = %d\n", as);
    printf("Ds = %d\n", ds);
    printf("Special characters = %d", os);

    return 0;
}
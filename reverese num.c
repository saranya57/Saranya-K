#include <stdio.h>
int main()
{
    int n, rnum = 0, r;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        r = n%10;
        rnum = rnum*10 + r;
        n /= 10;
    }

    printf("Reversed Number = %d", rnum);

    return 0;
}
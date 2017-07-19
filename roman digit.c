#include <stdio.h>

 

void predig(char num1, char num2);

void postdig(char c, int n);

 

char roval[1000];

int i = 0;

int main()

{

    int j;

    long num;

 

    printf("Enter the number: ");

    scanf("%d", &num);

    if (num <= 0)

    {

        printf("Invalid number");

        return 0;

    }

    while (num != 0)

    {

        if (num >= 1000)

        {

            postdig('M', number / 1000);

            num = num - (num / 1000) * 1000;

        }

        else if (num >= 500)

        {

            if (num < (500 + 4 * 100))

            {

                postdig('D', number / 500);

                num= num- (num / 500) * 500;

            }

            else

            {

                predig('C','M');

                num = num - (1000-100);

            }

        }

        else if (num >= 100)

        {

            if (num < (100 + 3 * 100)) 

            {

                postdig('C', num / 100);

                num = num - (num / 100) * 100;

            }

            else

            {

                predig('L', 'D');

                num = num - (500 - 100);

            }

        }

        else if (num >= 50 )

        {

            if (num < (50 + 4 * 10))

            {

                postdig('L', num / 50);

                num = num - (num / 50) * 50;

            }

            else

            {

                predig('X','C');

                num = num - (100-10);

            }

        }

        else if (num >= 10)

        {

            if (num < (10 + 3 * 10))

            {

                postdig('X', num / 10);

                num = num - (num / 10) * 10;

            }

            else

            {

                predig('X','L');

                num = num - (50 - 10);

            }

        }

        else if (num >= 5)

        {

            if (num < (5 + 4 * 1))

            {

                postdig('V', num / 5);

                num = num - (num / 5) * 5;

            }

            else

            {

                predig('I', 'X');

                num = num - (10 - 1);

            }

        }

        else if (num >= 1)

        {

            if (num < 4)

            {

                postdig('I', num / 1);

                num = num - (num/ 1) * 1;

            }

            else

            {

                predig('I', 'V');

                num = num - (5 - 1);

            }

        }

    }

    printf("Roman number is: ");

    for(j = 0; j < i; j++)

        printf("%c", roval[j]);

    return 0;

}

 

void predig(char num1, char num2)

{

    roval[i++] = num1;

    roval[i++] = num2;

}

 

void postdig(char c, int n)

{

    int j;

    for (j = 0; j < n; j++)

        roval[i++] = c;

}
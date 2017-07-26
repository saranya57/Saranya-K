#include <iostream>
using namespace std;

int main()
{
    int no, rNum = 0, r;

    cout << "Enter an integer: ";
    cin >> no;

    while(no != 0)
    {
        r = no%10;
        rNum = rNum*10 + r;
        no /= 10;
    }

    cout << "Reversed Number = " << revNum;

    return 0;
}
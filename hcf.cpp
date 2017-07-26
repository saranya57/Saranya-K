#include <iostream>
using namespace std;

int main()
{
    int no1, no2;

    cout << "Enter two numbers: ";
    cin >> no1 >> no2;
    
    while(no1 != no2)
    {
        if(no1 > no2)
            no1 -= no2;
        else
            no2 -= no1;
    }

    cout << "HCF = " << no1;
    return 0;
}


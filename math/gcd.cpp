#include <iostream>
#include <stdlib.h>

using namespace std;

void print(int num1, int num2, int gcd, int i)
{
    printf("=================\n");
    printf("Num1: %d\n", num1);
    printf("Num2: %d\n", num2);
    printf("GCD:  %d\n", gcd);
    printf("I:    %d\n", i);
    printf("=================\n");
}

int calcGcd(int num1, int num2, int *i)
{
    int gcd = 0;

    while (num1 > 0 && num2 > 0)
    {
        if (num1 > num2)
            num1 = num1 % num2;
        else
            num2 = num2 % num1;
        *i = *i + 1;
    }

    return num1 > num2 ? num1 : num2;
}

void readNum(int *num1, int *num2)
{
    cout << "Inform 2 number to calc the GCD:" << endl;
    cout << "Num1: ";
    cin >> *num1;
    cout << "Num2: ";
    cin >> *num2;
}

void setArgs(int *num1, int *num2, char const *argv[])
{
    *num1 = atoi(argv[1]);
    *num2 = atoi(argv[2]);
}

int main(int argc, char const *argv[])
{
    int num1 = 0, num2 = 0, gcd = 0, i = 0;

    if (argc == 3)
        setArgs(&num1, &num2, argv);
    else
        readNum(&num1, &num2);

    gcd = calcGcd(num1, num2, &i);

    print(num1, num2, gcd, i);
    return 0;
}

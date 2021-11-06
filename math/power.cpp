#include <iostream>

using namespace std;

void readNumbers(int *num, int *power)
{
    cout << "Enter a number: ";
    cin >> *num;

    cout << "Enter the number to power: ";
    cin >> *power;
}

void printResult(int num, int power, int powerResult)
{
    cout << "=======================" << endl;
    cout << "Readed Number: " << num << endl;
    cout << "Number^" << power << "    : " << powerResult << endl;
    cout << "=======================" << endl;
}

int powerNum(int num, int power)
{
    if (power == 0)
        return 1;

    return powerNum(num, power - 1) * num;
}

int powerNum2(int num, int power)
{
    if (power == 0)
        return 1;
    if (power % 2 == 0)
        return powerNum2(num * num, power / 2);

    return num * powerNum2(num * num, (power - 1) / 2);
}

int main(int argc, char const *argv[])
{
    int num, power, powerResult;

    readNumbers(&num, &power);

    powerResult = powerNum(num, power);

    printResult(num, power, powerResult);

    powerResult = powerNum2(num, power);

    printResult(num, power, powerResult);

    return 0;
}

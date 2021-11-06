#include <iostream>

using namespace std;

int readNumber()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

void printResult(int num, int factorial)
{
    cout << "=======================" << endl;
    cout << "Readed Number: " << num << endl;
    cout << "! Number     : " << factorial << endl;
    cout << "=======================" << endl;
}

int calcFactorial(int num)
{
    if (num == 0)
        return 1;
    if (num < 0)
        return num;

    return calcFactorial(num - 1) * num;
}

int main(int argc, char const *argv[])
{
    int num, factorial;

    num = readNumber();

    factorial = calcFactorial(num);

    printResult(num, factorial);

    return 0;
}

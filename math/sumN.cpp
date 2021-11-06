#include <iostream>

using namespace std;

int readNumber()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

void printResult(int num, int sum)
{
    cout << "=======================" << endl;
    cout << "Readed Number: " << num << endl;
    cout << "Numbers sum  : " << sum << endl;
    cout << "=======================" << endl;
}

int sumNum(int num)
{
    if (num == 0)
        return 0;

    return sumNum(num - 1) + num;
}

int main(int argc, char const *argv[])
{
    int num, sum;

    num = readNumber();

    sum = sumNum(num);

    printResult(num, sum);

    return 0;
}

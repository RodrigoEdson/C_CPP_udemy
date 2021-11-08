#include <iostream>

using namespace std;

void readNumbers(int *ePower, int *aproximation)
{
    cout << "Enter a number: ";
    cin >> *ePower;

    cout << "Enter the times to calculate: ";
    cin >> *aproximation;
}

void printResult(int ePower, int aproximation, double e)
{
    cout << "=======================" << endl;
    cout << "Readed Number: " << ePower << endl;
    cout << "Times        : " << aproximation << endl;
    cout << "Result        : " << e << endl;
    cout << "=======================" << endl;
}

double calcTaylorSeries(int ePower, int aproximation)
{
    static double power = 1, factorial = 1;
    double e;

    if (aproximation == 0)
        return 1;
    e = calcTaylorSeries(ePower, aproximation - 1);
    power *= ePower;
    factorial *= aproximation;

    return e + (power / factorial);
}

int main(int argc, char const *argv[])
{

    int ePower, aproximation;
    double e;

    readNumbers(&ePower, &aproximation);

    e = calcTaylorSeries(ePower, aproximation);

    printResult(ePower, aproximation, e);

    return 0;
}

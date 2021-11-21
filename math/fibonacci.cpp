#include <iostream>

using namespace std;

void printResult(int element, int value, int *arrayToStoreElementSequence)
{
    cout << "=======================" << endl;
    cout << "The Fibonacci's " << element << " element is " << value << endl;
    cout << "=======================" << endl;
    for (int i = 0; i <= element; i++)
        cout <<"Element " << i << " = " << arrayToStoreElementSequence[i] << endl;
}

int readElement()
{
    int element;

    cout << "Enter the Fibonacci element to be calculated: ";
    cin >> element;

    return element;
}

int *createFibonacciArray(int element)
{
    int *a = new int[element + 1];

    for (int i = 0; i <= element; i++)
        a[i] = -1;

    return a;
}

int calcFibonacci(int element, int *arrayToStoreElementSequence)
{
    if (element <= 1)
    {
        arrayToStoreElementSequence[element] = element;
        return element;
    }
    else
    {
        if (arrayToStoreElementSequence[element - 2] == -1)
            arrayToStoreElementSequence[element - 2] = calcFibonacci(element - 2, arrayToStoreElementSequence);
        if (arrayToStoreElementSequence[element - 1] == -1)
            arrayToStoreElementSequence[element - 1] = calcFibonacci(element - 1, arrayToStoreElementSequence);

        arrayToStoreElementSequence[element] = arrayToStoreElementSequence[element - 2] + arrayToStoreElementSequence[element - 1];
        return arrayToStoreElementSequence[element];
    }
}

int main(int argc, char const *argv[])
{
    int element, value;

    element = readElement();

    int *arrayFibonacciValues = createFibonacciArray(element);

    value = calcFibonacci(element, arrayFibonacciValues);

    printResult(element, value, arrayFibonacciValues);

    return 0;
}

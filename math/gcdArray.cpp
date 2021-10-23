#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct gdcStruct
{
    int arraySize;
    int *numList;
    char *numListDescr;
    int GCD;
    int calcIteration;
};

void setArgs(int argc, char const *argv[], gdcStruct *gdcData)
{
    gdcData->arraySize = argc;
    gdcData->numList = (int *)malloc(argc * sizeof(int));
    gdcData->numListDescr = (char *)malloc(sizeof(char));

    for (int i = 1; i < argc; i++)
    {
        gdcData->numList[i - 1] = atoi(argv[i]);
        if (i > 1)
            strcat(gdcData->numListDescr, ", ");
        strcat(gdcData->numListDescr, argv[i]);
    }
}

void readNumList(gdcStruct *gdcData)
{
    int arraySize;
    cout << "Enter the size of the Array: ";
    cin >> arraySize;

    gdcData->arraySize = arraySize;
    gdcData->numList = (int *)malloc(arraySize * sizeof(int));
    gdcData->numListDescr = (char *)malloc(sizeof(char));

    int num;
    char numChar[10];
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Inform element " << i + 1 << ": ";
        cin >> num;
        gdcData->numList[i] = num;
        if (i > 0)
            strcat(gdcData->numListDescr, ", ");
        sprintf(numChar, "%d", num);
        strcat(gdcData->numListDescr, numChar);
    }
}

void print(gdcStruct *gdcData)
{
    printf("=================\n");
    printf("Num list:  %s\n", gdcData->numListDescr);
    printf("GDC:       %d\n", gdcData->GCD);
    printf("Iterations:%d\n", gdcData->calcIteration);
    printf("=================\n");
}

int calcGcd(int num1, int num2, int *i)
{
    int gcd = 0;
    *i = 0;
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

void calcGcdArray(gdcStruct *gdcData)
{
    int gcd = gdcData->numList[0];
    int iterations;
    for (int i = 1; i < gdcData->arraySize; i++)
    {
        gcd = calcGcd(gcd, gdcData->numList[i], &iterations);
        gdcData->calcIteration += iterations;
    }
    gdcData->GCD = gcd;
}

int main(int argc, char const *argv[])
{
    gdcStruct *gdcData = (gdcStruct *)malloc(sizeof(gdcStruct));

    if (argc >= 3)
        setArgs(argc, argv, gdcData);
    else
        readNumList(gdcData);

    calcGcdArray(gdcData);

    print(gdcData);
    free(gdcData);
    return 0;
}

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main(int argc, char const *argv[])
{
    cout << endl
         << "S T A R T" << endl;
    int *p;
    cout << sizeof(p) << endl;

    cout << "single variable" << endl;
    int a = 10;
    p = &a;

    printf("a value: %d\n", *p);
    printf("p value: %d = a address %d\n", p, &a);

    cout << endl
         << "Array" << endl;
    int varArray[5] = {1, 2, 3, 4, 5};
    p = varArray;
    for (int x : varArray)
        cout << "X value = " << x << endl;

    cout << endl
         << "Array in heap memory" << endl;

    cout << endl
         << "Using malloc" << endl;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    for (size_t i = 0; i < 5; i++)
        cout << "X value = " << p[i] << endl;
    free(p);

    cout << endl
         << "Using new" << endl;
    p = new int[5];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    for (size_t i = 0; i < 5; i++)
        cout << "X value = " << p[i] << endl;
    delete[] p;

    cout << endl
         << "Using struct" << endl;
    struct rectangle vRec = {10, 15};
    struct rectangle *pRec = &vRec;
    printf("Struct Rectangle values: %d, %d\n", (*pRec).length, (*pRec).breadth);
    printf("Struct Rectangle values: %d, %d\n", pRec->length, pRec->breadth);

    cout << endl
         << "Using struct in heap" << endl;
    pRec = (struct rectangle *)malloc(sizeof(struct rectangle));
    pRec->length = 10;
    pRec->breadth = 20;
    printf("Struct Rectangle values: %d, %d\n", (*pRec).length, (*pRec).breadth);
    printf("Struct Rectangle values: %d, %d\n", pRec->length, pRec->breadth);
    delete[] pRec;

    cout << endl
         << "E N D" << endl;
    return 0;
}

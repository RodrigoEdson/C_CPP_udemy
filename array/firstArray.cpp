#include <iostream>

using namespace std;

void print(int *varArray, int varSize)
{
    printf("=======================\n");
    for (int i = 0; i < varSize; i++)
        printf("%d element: %d\n", i, varArray[i]);
}

int main(int argc, char const *argv[])
{
    // Not intialized array
    int a[5]; // |?|?|?|?|?|
    print(a, 5);

    // Initialized rray
    int b[5] = {1, 2, 3, 4, 5}; // |1|2|3|4|5|
    print(b, 5);

    // First 2 elements initialized
    int c[5] = {1, 2}; // |1|2|0|0|0|
    print(c, 5);

    // Initialize all elementes with zero
    int d[5] = {0}; // |0|0|0|0|0|
    print(d, 5);

    // Declare an array of 5 elments
    int e[] = {1, 2, 3, 4, 5}; // |1|2|3|4|5|
    print(e, 5);

    return 0;
}

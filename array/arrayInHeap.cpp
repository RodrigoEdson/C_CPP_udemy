#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int A[5] = {2, 3, 5, 7, 11};

    int *p;

    // C
    p = (int *)malloc(5 * sizeof(int));
    //C++
    p = new int [5];
    p[0] = 3;
    p[1] = 2;
    p[2] = 9;
    p[3] = 5;
    p[4] = 30;

    for (int i = 0; i < 5; i++)
        printf("%d, ", A[i]);
    
    printf("\n");

    for (int i = 0; i < 5; i++)
        printf("%d, ", p[i]);
    

    return 0;
}

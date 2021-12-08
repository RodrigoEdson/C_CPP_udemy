#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // array inside stack
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 5, 9}, {8, 7, 6, 1}};

    // half stak, half heap
    int *B[3];
    B[0] = (int *)malloc(4 * sizeof(int));
    B[1] = (int *)malloc(4 * sizeof(int));
    B[2] = (int *)malloc(4 * sizeof(int));
    B[2][3] = 2;
    B[1][2] = 1;
    B[0][1] = 9;

    // Array inside heap
    int **C;
    C = (int **)malloc(3 * sizeof(int *));
    C[0] = (int *)malloc(4 * sizeof(int));
    C[1] = (int *)malloc(4 * sizeof(int));
    C[2] = (int *)malloc(4 * sizeof(int));
    C[2][3] = 2;
    C[1][2] = 1;
    C[0][1] = 9;

    // A
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    printf("\n");

    // B
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }
    printf("\n");

    // C
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}

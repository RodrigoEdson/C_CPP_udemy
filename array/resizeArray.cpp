#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
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
        printf("%d, ", p[i]);
    
    printf("\n");

    //Larger Array
    int *q;
    q = new int [10];

    //Coping values
    for (int i = 0; i < 5; i++)
        q[i] = p[i];

    //C
    //free(p);
    //C++
    delete [] p;

    p = q;
    q = NULL;

    for (int i = 0; i < 5; i++)
        printf("%d, ", p[i]);
    

    return 0;
}

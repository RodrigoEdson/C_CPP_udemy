#include <iostream>

using namespace std;

int *initArray(int s)
{
    int *p;
    p = (int *)malloc(s * sizeof(int));
    return p;
}

void setValue(int a[], int n)
{
    a[n - 1] = n * 2;
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5};
    for (int x : a)
        cout << x << " ";
    cout << endl;

    setValue(a, 2);

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}

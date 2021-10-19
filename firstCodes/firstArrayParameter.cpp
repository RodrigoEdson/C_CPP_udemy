#include <iostream>

using namespace std;

int *initArray(int s)
{
    int *p;
    //p = (int *)malloc(s * sizeof(int));
    p = new int[s];

    for (int i = 0; i < s; i++)
        p[i] = i + 1;

    return p;
}

void setValue(int a[], int n)
{
    a[n - 1] = n * 2;
}

int main(int argc, char const *argv[])
{
    int *a = initArray(5);
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    setValue(a, 2);

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}

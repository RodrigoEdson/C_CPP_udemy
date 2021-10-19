
#include<iostream>
#include<stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a[10] = {1,2,3,4,5,6,7,8,9};

    for (int i = 0; i < 10; i++)
        cout << a[i];
    cout << endl;


    for (int x:a )
        printf ("%d", x);
    cout << endl;

    return 0;
}

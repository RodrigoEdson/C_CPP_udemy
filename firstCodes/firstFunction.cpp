#include <iostream>

using namespace std;

int add(int a, int b)
{
    int c = a + b;
    return c;
}

//By address
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//By reference is for C++ only
void swapReference(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(int argc, char const *argv[])
{
    //add function sample -> Parameter by value
    int num1 = 10, num2 = 15, sum;
    sum = add(num1, num2);
    cout << sum << endl;
    printf("%d\n", sum);

    //swap function sample -> Parameter by address
    cout << num1 << " " << num2 << endl;
    swap(&num1, &num2);
    printf("%d %d\n", num1, num2);

    //swapReference function sample -> Parameter by reference
    cout << num1 << " " << num2 << endl;
    swapReference(num1, num2);
    printf("%d %d\n", num1, num2);

    return 0;
}

#include<iostream>
#include<stdio.h>

using namespace std;

struct firstStructure
{
    int length;
    int breadth;
} varGlobal;


int main(int argc, char const *argv[])
{
    struct firstStructure a;
    a.length = 4;
    a.breadth = 7;
    
    struct firstStructure b = {10,5};

    varGlobal.length = 10;
    varGlobal.breadth = 30;

    printf ("Area of Retangle is %d\n", a.breadth * a.length);
    cout << "Area of Retangle is " << b.breadth * b.length << endl ;
    printf ("Area of Retangle is %d\n", varGlobal.breadth * varGlobal.length);

    printf ("%lu\n",sizeof(varGlobal));

    return 0;
}

#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int areaByValue(struct Rectangle r)
{
    return r.breadth++ * r.length++;
}

int areaByReference(struct Rectangle *r)
{
    return r->breadth++ * r->length++;
}

int main(int argc, char const *argv[])
{
    Rectangle lR = {10, 15};

    printf("Befor area by value -> Length: %d, Breadth: %d\n", lR.length, lR.breadth);
    printf("Area: %d\n", areaByValue(lR));
    printf("After area by value -> Length: %d, Breadth: %d\n", lR.length, lR.breadth);

    lR = {10, 15};

    printf("\nBefor area by refrence -> Length: %d, Breadth: %d\n", lR.length, lR.breadth);
    printf("Area: %d\n", areaByReference(&lR));
    printf("After area by reference -> Length: %d, Breadth: %d\n", lR.length, lR.breadth);

    return 0;
}

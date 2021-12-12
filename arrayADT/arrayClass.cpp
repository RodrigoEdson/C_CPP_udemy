#include <iostream>

using namespace std;

class Array
{
private:
    int *A;
    int size;
    int length;
    void swapEements(int fromIndex, int toIndex);

public:
    Array();
    Array(int sz);
    ~Array();
    void display();
    void append(int value);
    void insert(int index, int value);
};

Array::Array()
{
    size = 10;
    A = new int[size];
    A[0] = 1;
    A[1] = 2;
    length = 2;
}

Array::Array(int sz)
{
    size = sz;
    A = new int[sz];
    length = 0;
}

Array::~Array()
{
    delete[] A;
}

void Array::display()
{
    cout << "Array Values:" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << i << " element = " << A[i] << endl;
    }
}

void Array::swapEements(int fromIndex, int toIndex)
{
    int temp = A[fromIndex];
    A[fromIndex] = A[toIndex];
    A[toIndex] = temp;
}

void Array::append(int value)
{
    if (length < size)
    {
        A[length++] = value;
    }
    else
        cout << "Array is full" << endl;
}

void Array::insert(int index, int value)
{
    if (index >= 0 && index < length && length < size)
    {
        for (int i = length - 1; i >= index; i--)
            A[i + 1] = A[i];
        A[index] = value;
        length++;
    }
}

int main(int argc, char const *argv[])
{
    Array *arr = new Array;

    cout << "Start array value:" << endl;
    arr->display();

    arr->append(12);
    arr->append(13);

    cout << "After append:" << endl;
    arr->display();

    arr->insert(2,5);
    cout << "After insert:" << endl;
    arr->display();

    return 0;
}

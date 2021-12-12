#include <iostream>

using namespace std;

template<class T>
class Array
{
private:
    T *A;
    int size;
    int length;
    void swapEements(int fromIndex, int toIndex);

public:
    Array();
    Array(int sz);
    ~Array();
    void display();
    void append(T value);
    void insert(int index, T value);
};

template<class T>
Array<T>::Array()
{
    size = 10;
    A = new T[size];
    A[0] = 1;
    A[1] = 2;
    length = 2;
}

template<class T>
Array<T>::Array(int sz)
{
    size = sz;
    A = new T[sz];
    length = 0;
}

template<class T>
Array<T>::~Array()
{
    delete[] A;
}

template<class T>
void Array<T>::display()
{
    cout << "Array Values:" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << i << " element = " << A[i] << endl;
    }
}

template<class T>
void Array<T>::swapEements(int fromIndex, int toIndex)
{
    T temp = A[fromIndex];
    A[fromIndex] = A[toIndex];
    A[toIndex] = temp;
}

template<class T>
void Array<T>::append(T value)
{
    if (length < size)
    {
        A[length++] = value;
    }
    else
        cout << "Array is full" << endl;
}

template<class T>
void Array<T>::insert(int index, T value)
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
    Array<float> *arr = new Array<float>;

    cout << "Start array value:" << endl;
    arr->display();

    arr->append(12.5);
    arr->append(13.7);

    cout << "After append:" << endl;
    arr->display();

    arr->insert(2,5.7);
    cout << "After insert:" << endl;
    arr->display();

    return 0;
}

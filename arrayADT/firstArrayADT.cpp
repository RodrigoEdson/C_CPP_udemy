#include <iostream>

using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void readArray(struct Array *arr)
{

    printf("Enter the array size: ");
    scanf("%d", &arr->size);

    arr->A = (int *)malloc(arr->size * sizeof(int));
    arr->length = 0;

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter all the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr->A[i]);

    arr->length = n;
}

void printArray(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
        printf("Element %d = %d\n", i, arr.A[i]);
}

void appendArray(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
    else
        printf("Array is full\n");
}

void insertArray(struct Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length && arr->length < arr->size)
    {
        for (int i = arr->length; i >= index; i--)
            arr->A[i] = arr->A[i - 1];

        arr->A[index] = x;
        arr->length++;
    }
    else
        printf("Insert not allowed\n");
}

void swapEements(int *fromIndex, int *toIndex)
{
    int temp = *fromIndex;
    *fromIndex = *toIndex;
    *toIndex = temp;
}

int deleteArray(struct Array *arr, int index)
{
    if (index >= 0 && index <= arr->length)
    {
        int x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i + 1];
        arr->length--;
        return x;
    }
    else
        return 0;
}

int linearSearch(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
        if (key == arr->A[i])
        {
            // keep searched elementes in the begining of the array
            // swapEements(&arr->A[i], &arr->A[0]);
            // return 0;

            // Promote the searched elemente one position to the beginning of the array
            swapEements(&arr->A[i], &arr->A[i - 1]);
            return i - 1;
        }

    return -1;
}

int main(int argc, char const *argv[])
{

    struct Array arr;

    readArray(&arr);
    printf("Start array value:\n");
    printArray(arr);

    appendArray(&arr, 12);
    appendArray(&arr, 13);
    printf("After append:\n");
    printArray(arr);

    insertArray(&arr, 0, 14);
    insertArray(&arr, 2, 15);
    printf("After insert:\n");
    printArray(arr);

    printf("Position 3 element with value %d has been deleted\n", deleteArray(&arr, 3));
    printf("After delete:\n");
    printArray(arr);

    printf("Key 12 is in %d position\n", linearSearch(&arr, 12));
    printf("Key 12 is in %d position\n", linearSearch(&arr, 12));
    printf("Key 12 is in %d position\n", linearSearch(&arr, 12));
    printf("After Search:\n");
    printArray(arr);

    return 0;
}

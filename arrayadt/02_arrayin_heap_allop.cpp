#include <stdio.h>
#include <stdlib.h>

struct Array
{

    int A[10];
    int size;
    int length;

    /* data */
};

void Display(struct Array arr)
{
    int i;
    printf("\n Element are \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d \n", arr.A[i]);
    }
}

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for (i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = x;
        arr->length++;
    }
}

int main()
{ /** Arrray in heap */
    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};

    Append(&arr, 99999);
    insert(&arr, 1, 333);
    Display(arr);
    return 0;
}

// g++ 02_arrayin_heap_allop.cpp ; ./a
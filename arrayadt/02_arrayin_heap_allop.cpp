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

void Insert(struct Array *arr, int index, int x)
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

int Delete(struct Array *arr, int index)
{
    int x = 0;
    int i;
    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (i = index; index < arr->length; index++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int main()
{ /** Arrray in heap */
    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};

    Append(&arr, 99999);
    Insert(&arr, 1, 333);
    Display(arr);
    printf(" Deleted %d \n", Delete(&arr, 4));
    Display(arr);

    return 0;
}

// g++ 02_arrayin_heap_allop.cpp ; ./a
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

void Reverse(struct Array *arr)
{
    int i = 0;
    int j = arr->length - 1;
    int temp;

    while (i < j)
    {
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;

        i++;
        j--;
    }
}

void ReverseWithAuxArray(struct Array *arr)
{
    int *B;
    int i, j;
    B = (int *)malloc(arr->length * sizeof(int));
    // Copy A in reverse order into B
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];
    // Copy B back to A
    for (i = 0; i < arr->length; i++)
        arr->A[i] = B[i];

    free(B);
}

int main()
{ /** Arrray in heap */
    struct Array arr = {{10, 5, 11, 17, 34, 50, 70, 76, 78, 100}, 10, 10};
    ReverseWithAuxArray(&arr);
    Display(arr);
    return 0;
}

// g++ 04_binary_search.cpp ; ./a

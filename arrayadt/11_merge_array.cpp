#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[50];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are:\n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

struct Array *Merge(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length)
    {

        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    for (; j < arr1->length; j++)
        arr3->A[k++] = arr2->A[j];
    arr3->length = arr1->length + arr2->length;
    arr3->size = arr1->size + arr2->size;

    return arr3;
}

int main()
{
    // Array me 8 elements hain, toh length ko 8 kiya
    // Filtered: Contains only elements > 0
    struct Array arr1 = {{42, 56, 89, 100}, 20, 4};
    struct Array arr2 = {{15, 30, 45, 60, 75}, 10, 5};
    struct Array *arr3;

    arr3 = Merge(&arr1, &arr2);

    Display(*arr3);
    return 0;
}

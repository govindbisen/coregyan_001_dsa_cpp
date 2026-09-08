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

struct Array *DifferenceAminusB(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    // Dono arrays compare karte huye elements insert karna
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            j++;
        }
        else // Jab dono barabar hon (common element) -> sirf ek baar copy karein
        {
            i++;
            j++;
        }
    }

    // arr1 ke bache huye elements copy karein
    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }

    arr3->length = k;
    arr3->size = 50;

    return arr3;
}

int main()
{
    struct Array arr1 = {{42, 56, 89, 100}, 20, 4};
    struct Array arr2 = {{15, 30, 56, 75, 89}, 10, 5};

    struct Array *arr3;

    arr3 = DifferenceAminusB(&arr1, &arr2);

    Display(*arr3);

    free(arr3);

    return 0;
}

// g++ .\14_Set_difference.cpp ; .\a
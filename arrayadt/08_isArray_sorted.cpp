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

#include <stdbool.h>
bool isArraySorted(struct Array arr)
{
    int i;
    printf("\n Element are \n");
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{ /** Arrray in heap */
    struct Array arr = {{10, 5, 11, 17, 34, 50, 70, 76, 78, 100}, 10, 10};
    Display(arr);
    printf("%d", isArraySorted(arr));
    return 0;
}

// g++ 04_binary_search.cpp ; ./a
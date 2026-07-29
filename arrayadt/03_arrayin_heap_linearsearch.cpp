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

int LinearSearch(struct Array arr, int key)
{

    int i;
    for (i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
            return i;
    }
    return -1;
}

int main()
{ /** Arrray in heap */
    struct Array arr = {{11, 72, 31, 44, 35}, 10, 5};
    Display(arr);
    printf("index is %d for", LinearSearch(arr, 13));

    return 0;
}

// g++ 02_arrayin_heap_allop.cpp ; ./a
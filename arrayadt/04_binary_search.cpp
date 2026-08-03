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
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int LinearSearch(struct Array *arr, int key)
{

    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            // swap(&arr->A[i], &arr->A[i - 1]); // first way
            swap(&arr->A[i], &arr->A[0]); // second way to improve
            return i;
        }
    }
    return -1;
}

int BinarySearch(struct Array arr, int key)
{

    int low, mid, high;
    low = 0;
    high = arr.length - 1;

    while (low < high)
    {
        mid = (low + high) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int RecursiveBinarySearch(int a[], int l, int h, int key)
{
    int mid;

    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (key < a[mid])
        {
            return RecursiveBinarySearch(a, l, mid - 1, key);
        }
        else
        {
            return RecursiveBinarySearch(a, mid + 1, h, key);
        }
    }
    return -1;
}

int main()
{ /** Arrray in heap */
    struct Array arr = {{10, 5, 11, 17, 34, 50, 70, 76, 78, 100}, 10, 10};
    // Display(arr);
    printf("index is %d for \n", BinarySearch(arr, 50));
    printf("index is %d  for \n", RecursiveBinarySearch(arr.A, 0, arr.length - 1, 5));

    // Display(arr);
    return 0;
}

// g++ 04_binary_search.cpp ; ./a
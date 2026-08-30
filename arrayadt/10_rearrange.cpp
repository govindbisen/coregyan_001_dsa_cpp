#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
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

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Rearrange(struct Array *arr)
{
    int i = 0;
    int j = arr->length - 1;

    // 1. Shart ko (i < j) kiya
    while (i < j)
    {
        // Left side se tab tak aage badhein jab tak negative numbers hain
        while (i < arr->length && arr->A[i] < 0)
        {
            i++;
        }
        // Right side se tab tak peeche aayein jab tak positive numbers hain
        // 2. Yahan arr->A[j] kiya
        while (j >= 0 && arr->A[j] >= 0)
        {
            j--;
        }

        // Agar i aur j cross nahi hue hain, toh swap karein
        if (i < j)
        {
            swap(&arr->A[i], &arr->A[j]);
            i++; // 3. Swap ke baad agle elements par jaane ke liye pointer badhayein
            j--;
        }
    }
}

int main()
{
    // Array me 8 elements hain, toh length ko 8 kiya
    struct Array arr = {{-15, 42, -7, 89, -23, 56, -91, 100}, 10, 8};

    Rearrange(&arr);
    Display(arr);

    return 0;
}

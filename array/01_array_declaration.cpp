#include <stdio.h>

int main()
{
    int A[5];
    int B[5] = {1, 2, 3, 4, 5};
    int C[10] = {1, 2, 3};
    int D[5] = {4};
    int E[] = {1, 2, 3, 4, 5, 6, 7};

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%u \n", &A[i]); // contigious and 4 bit memory for each
    }

    return 0;
}
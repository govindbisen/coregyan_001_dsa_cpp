#include <cstdio>

void fun(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};

    int n = sizeof(A) / sizeof(A[0]);

    fun(A, n);

    return 0;
}
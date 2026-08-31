#include <stdio.h>

int sumrecursive(int n)
{

    if (n == 0)
    {
        return 0;
    }

    else
    {
        return n + sumrecursive(n - 1);
    }
}

int sumiterative(int n)
{
    int i = 0;
    static int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    printf("%d", sumrecursive(5));
    printf("%d", sumiterative(5));
}
#include <stdio.h>
#include <iostream>
using namespace std;

int powerRecursion(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return powerRecursion(m, n - 1) * m;
}

int powerRecursionOptimized(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return powerRecursionOptimized(m * m, n / 2);
    }
    else
    {
        return powerRecursionOptimized(m * m, n / 2) * m;
    }
}

int powerIteration(int m, int n)
{
    int i = 0;
    int power = 1;
    for (i; i < n; i++)
    {
        power = power * m;
    }
    return power;
}

main()
{
    int r = powerRecursion(3, 4);
    int ri = powerIteration(3, 4);
    int ro = powerRecursionOptimized(3, 4);
    printf("%d", r);
    cout << "=====";
    printf("%d", ri);
    cout << "=====";
    printf("%d", ro);
}
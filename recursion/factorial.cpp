#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int recursiveFactorial(int n)
{

    if (n < 0)
    {
        return 0;
    }

    if (n == 0)
    {
        return 1;
    }
    return recursiveFactorial(n - 1) * n;
}

int IterativeFactorial(int n)
{
    int f = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}

int main()
{
    int r, ir;
    r = recursiveFactorial(5);
    ir = IterativeFactorial(5);
    printf("%d \n", r);
    printf("------ \n");
    cout << ir;
    return 0;
}
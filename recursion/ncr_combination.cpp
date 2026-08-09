#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int fact(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}

// here factorial is recursive
int ncr(int n, int r)
{
    int num, den;
    num = fact(n);
    den = fact(r) * fact(n - r);
    return num / den;
}

int NCR(int n, int r)
{
    if (n == 1 || r == 1)
        return 1;
    return NCR(n - 1, r - 1) + NCR(n - 1, r);
}

// here fact as we ll as ncr is recursive using triangle of pascal

int main()
{
    cout << ncr(10, 2);
    return 0;
}
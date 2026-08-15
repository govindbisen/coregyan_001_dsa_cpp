#include <cstdio>
#include <iostream>
using namespace std;

// x and y are now references to the original variables
void swap_by_ref(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10, b = 20;
    swap_by_ref(a, b);
    printf("%d %d", a, b); // Output: 20 10
}

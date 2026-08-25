#include <cstdio>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

void fun(struct rectangle r)
{

    cout << r.length << endl;
    cout << r.breadth << endl;
};

int main()
{
    struct rectangle r = {10, 20};
    printf("main : Breadth %d  Length %d\n", r.breadth, r.length);
    printf("fun:\n");
    fun(r);

    return 0;
}

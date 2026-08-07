using namespace std;
#include <iostream>
#include <cstdlib>

struct Rectangle
{
    int length;
    int breadth;
};

// #include <stdlib>

int main()
{

    int *p;
    char *c;
    float *f;
    double *d;
    struct Rectangle *r;

    cout << sizeof(p) << endl; //  Every pointer is of the same size
    cout << sizeof(c) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(r) << endl;

    return 0;
}

// compiler and run
// g++ pointer.cpp -o compiledcode/pointer && ./compiledcode/pointer

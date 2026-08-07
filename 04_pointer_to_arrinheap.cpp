using namespace std;
#include <iostream>
#include <cstdlib>
// #include <stdlib>

int main()
{

    int *p;
    // c code to allocate memrory
    p = (int *)malloc(5 * sizeof(int));

    // cpp code to allowcate memory
    int *cp;
    cp = new int[5];

    p[0] = 10;
    p[1] = 20;
    p[2] = 40;
    p[3] = 50;
    p[4] = 60;

    // Check if memory allocation was successful
    if (p == nullptr)
    {
        cerr << "Memory allocation failed!" << endl;
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Array  " << i << " inside heap : " << p[i] << endl;
    }
    free(p);     // c delete
    delete[] cp; // c++ delete

    return 0;
}

// compiler and run
// g++ pointer.cpp -o compiledcode/pointer && ./compiledcode/pointer

using namespace std;
#include <iostream>

int main()
{
    int A[5] = {19, 30, 32, 56, 45};
    int *p;
    p = A;

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << "-- can access using p also hence p is name of A--- " << p[i] << endl;
    }
}

// compiler and run
// g++ pointer.cpp -o compiledcode/pointer && ./compiledcode/pointer

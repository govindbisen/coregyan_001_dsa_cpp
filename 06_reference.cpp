using namespace std;
#include <iostream>
#include <cstdlib>

int main()
{

    int a = 10;
    int &r = a;

    cout << "a:" << a << "| r:" << r;

    return 0;
}

// g++ 06_reference.cpp -o compiledcode/pointer && ./compiledcode/pointer

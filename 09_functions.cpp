//  g++ 09_functions.cpp -o compiledcode/objname && ./compiledcode/objname
#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int addv1(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 20;
    int y = 40;
    int z;

    z = addv1(x, y);

    cout << z << endl;
    printf("%d", z);

    return 0;
}

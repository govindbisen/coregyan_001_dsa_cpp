#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

struct rectangle *fun()
{
    struct rectangle *p = new rectangle;
    // struct rectangle *p = (struct rectangle *)malloc(sizeof(struct rectangle));

    p->length = 10;
    p->breadth = 30;

    return p;
}

int main()
{
    rectangle *p = fun();

    cout << "Length : " << p->length << endl;
    cout << "Breadth: " << p->breadth << endl;

    delete p; // memory free

    return 0;
}

// C style ---

#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int Area(struct Rectangle r)
{
    int a;
    a = r.length * r.breadth;
    return a;
}

int perimeter(struct Rectangle r)
{
    return 2 * (r.length + r.breadth);
}

void initialise(struct Rectangle *r, int l, int b)
{
    r->breadth = b;
    r->length = l;
}

int main()
{
    struct Rectangle r = {0, 0};

    int l, b;
    printf("Enter length \n");
    scanf("%d", &l);
    cout << "Enter breadth";
    cin >> b;

    initialise(&r, l, b);

    int ar = Area(r);
    printf("%d \n", ar);

    int pr = perimeter(r);
    cout << pr;

    return 0;
}
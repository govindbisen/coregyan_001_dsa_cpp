
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

int main()
{
    struct Rectangle r = {0, 0};

    printf("Enter length \n");
    scanf("%d", &r.length);

    cout << "Enter breadth";
    cin >> r.breadth;

    int ar = Area(r);
    printf("%d \n", ar);

    int pr = perimeter(r);
    cout << pr;

    return 0;
}
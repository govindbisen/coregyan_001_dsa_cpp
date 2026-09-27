
// C style ---

#include <iostream>
using namespace std;

// struct Rectangle or struct Class both are okay but struct member are default public and class default is private
class Rectangle
{
private:
    int length;
    int breadth;

public:
    int Area()
    {
        int a;
        a = length * breadth;
        return a;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }

    void initialise(int l, int b)
    {
        breadth = b;
        length = l;
    }
};
int main()
{
    Rectangle r;

    int l, b;

    printf("Enter length \n");
    scanf("%d", &l);
    cout << "Enter breadth";
    cin >> b;
    r.initialise(l, b);

    int ar = r.Area();
    printf("%d \n", ar);

    int pr = r.perimeter();
    cout << pr;

    return 0;
}
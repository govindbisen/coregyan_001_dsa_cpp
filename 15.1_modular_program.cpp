#include <iostream>
using namespace std;

int Area(int l, int b)
{
    int a;
    return l * b;
}

int main()
{
    int length = 0, breadth = 0;
    int ar;

    printf("Enter length");
    scanf("%d", &length);

    cout << "Enter breadth";
    cin >> breadth;

    ar = Area(length, breadth);
    printf("%d", ar);

    return 0;
}
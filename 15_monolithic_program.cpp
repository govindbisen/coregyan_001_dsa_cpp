#include <iostream>
using namespace std;

int main()
{
    int length;
    int breadth;

    printf("Enter length");
    scanf("%d", &length);

    cout << "Enter breadth";
    cin >> breadth;

    int area = length * breadth;
    printf("Area : %d ", area);

    return 0;
}
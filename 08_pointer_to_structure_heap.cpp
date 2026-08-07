// mkdir compiledcode
// export PATH="/c/msys64/ucrt64/bin:$PATH"
//  g++ x.cpp -o compiledcode/objname && ./compiledcode/objname
#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // struct Rectangle *p; // c
    Rectangle *p; // c++

    // p = new Rectangle //c
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // c

    p->breadth = 10;
    p->length = 30;

    cout << "---------------------" << endl;

    cout << (*p).breadth << endl;
    cout << (*p).length << endl;
}

//  g++ 08_pointer_to_structure_heap.cpp -o compiledcode/objname && ./compiledcode/objname
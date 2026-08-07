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
    Rectangle r = {10, 30};
    cout << r.breadth << endl;
    cout << r.length << endl;

    cout << "---------------------" << endl;
    Rectangle *p;
    p = &r;

    cout << p->breadth << endl;
    cout << p->length << endl;

    cout << "---------------------" << endl;

    cout << (*p).breadth << endl;
    cout << (*p).length << endl;
}

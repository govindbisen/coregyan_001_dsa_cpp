#include <iostream>
// Missing Namespace: cout lives inside the standard namespace.
// You must write std::cout,
// or add using namespace std; right below your #include <iostream> line.
int main()
{
    int a = 10;
    int *p; // Declares p as a pointer to an integer
    p = &a; // Stores the memory address of 'a' in pointer 'p' (removed the duplicate 'int')

    std::cout << a << "\n";
    // Added std:: prefix for cout
    std::cout
        << "Hello" << std::endl;

    // dereferenceing

    printf("using pointer--- %d \n", *p);

    printf("&a %d \n", &a);
    printf("p %d \n", p);
}

// compiler and run
// g++ pointer.cpp -o compiledcode/pointer && ./compiledcode/pointer

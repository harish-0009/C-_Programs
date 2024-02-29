#include <iostream>
using namespace std;

void addition(int a, int b)
{
    cout << "Addition is :" << a + b << endl;
}

void func(int n[])
{
    cout << n[1] << endl;
}

void hello_pointer(int *ptr)
{
    cout << ptr << "  &  " << *ptr << endl;
}

void pointer(int *p)
{
    cout << p << endl;
}

int main()
{
    int x = 10, y = 3;
    int a[] = {20, 41, 5};
    int *p = &x;

    addition(5, 3); // pass a value

    addition(x, y); // pass a variable

    func(a); // pass an array

    hello_pointer(p); // pass a pointer

    pointer(&y); // pass a address

    return 0;
}
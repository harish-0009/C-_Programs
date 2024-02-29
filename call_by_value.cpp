#include <iostream>
using namespace std;

void func(int n) // shallow copy
{
    n = n + 10;
}

int main()
{
    int a = 5;

    cout << "Before :" << a << endl;

    func(a); // call by value

    cout << "After :" << a << endl;

    return 0;
}
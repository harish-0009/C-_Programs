#include <iostream>
using namespace std;

void func(int &n) // deep copy
{
    n = n + 10;
}

int main()
{
    int a = 5;

    cout << "Before :" << a << endl;

    func(a); // call by reference

    cout << "After :" << a << endl;

    return 0;
}
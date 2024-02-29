#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    int *p;

    p = &a;

    cout << "Address is :" << p << endl;
    cout << "Value is :" << *p << endl;

    return 0;
}
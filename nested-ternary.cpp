#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a,b and c values:";
    cin >> a >> b >> c;

    (a < b)
        ? (a < c)
              ? cout << "Minimum number is :" << a
              : cout << "Minimum number is :" << c
    : (b < c)
        ? cout << "Minimum number is :" << b
        : cout << "Minimum number is :" << c;

    return (0);
}
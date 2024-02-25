#include <iostream>
using namespace std;

int main()
{
    int i, n, fact = 1;

    cout << "Enter a number :";
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is :" << fact << endl;

    return 0;
}
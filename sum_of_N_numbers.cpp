#include <iostream>
using namespace std;

// Write a program to print sum of N numbers.

int main()
{
    int i, n, sum = 0;

    cout << "Enter a Number :";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum is :" << sum << endl;

    return 0;
}
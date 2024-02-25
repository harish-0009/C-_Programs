#include <iostream>
using namespace std;

int main()
{
    int i, n, firstDigit, lastDigit, sum = 0;

    cout << "Enter any number :";
    cin >> n;

    lastDigit = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }

    firstDigit = n;

    sum = firstDigit + lastDigit;

    cout << "Sum of first and last digit is : " << sum << endl;

    return 0;
}
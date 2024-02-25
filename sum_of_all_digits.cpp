#include <iostream>
using namespace std;

int main()
{
    int i, n, lastDigit, sum = 0;

    cout << "Enter any number :";
    cin >> n;

    while (n > 0)
    {
        lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10;
    }
    cout << "Sum of all digits : " << sum << endl;

    return 0;
}
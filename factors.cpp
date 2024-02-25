#include <iostream>
using namespace std;

int main()
{
    int i, n;

    cout << "Enter a number :";
    cin >> n;

    cout << "Factors of " << n << " is :";

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
           cout << i << " ";
        }
    }
    return 0;
}
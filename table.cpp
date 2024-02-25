#include <iostream>
using namespace std;

int main()
{
    int i, n, ans = 0;

    cout << "Enter any number :";
    cin >> n;

    cout << "Table of " << n << " is :" << endl;

    for (i = 1; i <= 10; i++)
    {
        ans = i * n;
        cout << n << " * " << i << " = " << ans << endl;
    }
    return 0;
}
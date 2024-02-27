#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;

    cout << "Enter array size : ";
    cin >> n;

    int a[n];

    cout << "Enter array elements :" << endl;

    for (i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    cout << "Average is :" << sum / n << endl;

    return 0;
}
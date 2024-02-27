#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter array size :";
    cin >> n;

    int a[n], b[n], c[n];
    int i;

    cout << "Enter array a elements :" << endl;

    for (i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "Enter array b elements :" << endl;

    for (i = 0; i < n; i++)
    {
        cout << "b[" << i << "] = ";
        cin >> b[i];
    }

    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }

    cout << "array c is :" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "c[" << i << "] = ";
        cout << c[i] << endl;
    }

    return 0;
}
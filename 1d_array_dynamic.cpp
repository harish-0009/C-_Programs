#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter array size :";
    cin >> size;

    int a[size];
    int i;

    cout << "Enter array elements :" << endl;

    for (i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "=======================================" << endl;

    cout << "The array is :" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cout << a[i] << endl;
    }
    return 0;
}
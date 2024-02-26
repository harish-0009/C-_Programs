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

    cout << "The array is :" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cout << a[i] << endl;
    }

    a[2] = 15;
    cout << "Enter new element :";
    cin >> a[0];
    
    cout << "After modification the array is: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cout << a[i] << endl;
    }

    return 0;
}
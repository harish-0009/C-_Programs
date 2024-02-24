#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a,b and c values:";
    cin >> a >> b >> c;

    if (a == b && b == c && c == a)
    {
        cout << "All numbers are same." << endl;
        return (0);
    }

    if (a > b)
    {
        if (a > c)
        {
            cout << "Max number is :" << a;
        }
        else
        {
            cout << "Max number is :" << c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "Max number is :" << b;
        }
        else
        {
            cout << "Max number is :" << c;
        }
    }
    return (0);
}
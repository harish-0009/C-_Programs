#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a and b values:";
    cin >> a >> b;

    if(a>b)
    {
        cout << "Max number is :" << a ;
    }
    else
    {
        cout << "Max number is :" << b;
    }
    return(0);
}
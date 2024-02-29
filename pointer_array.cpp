#include <iostream>
using namespace std;

int main()
{
    int a[5] = {5, 12, 8, 63, 1};

    int *p[5]; // {*p[0], *p[1], *p[2], *p[3], *p[4]}

    int i;

    for (i = 0; i <= 4; i++)
    {
        p[i] = &a[i];
    }

    for (i = 0; i <= 4; i++)
    {
        cout << "Address is :" << p[i] << "  ,  value is :" << *p[i] << endl;
    }
    return 0;
}
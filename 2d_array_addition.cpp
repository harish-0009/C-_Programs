#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter array row and column : ";
    cin >> r >> c;

    int a[r][c], b[r][c], d[r][c];
    int i, j;

    cout << "Enter array a elements :" << endl;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    }
    cout << "Enter array b elements :" << endl;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "b[" << i << "][" << j << "]= ";
            cin >> b[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            d[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "array d is :" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "d[" << i << "][" << j << "]= ";
            cout << d[i][j] << endl;
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int r, c, i, j, sum = 0;

    cout << "Enter array row and column : ";
    cin >> r >> c;

    int a[r][c];

    cout << "Enter array elements :" << endl;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    }

    int length = sizeof(a) / sizeof(a[0][0]);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }
    }

    cout << "Average is :" << sum / length << endl;

    return 0;
}
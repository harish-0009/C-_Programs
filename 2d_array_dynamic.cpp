#include <iostream>
using namespace std;

int main()
{
    int row, column;

    cout << "Enter array row and column :";
    cin >> row >> column;

    int a[row][column];
    int i, j;

    cout << "Enter array elements :" << endl;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    }

    cout << "=======================================" << endl;

    cout << "The array is :" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << "a[" << i << "][" << j << "]= ";
            cout << a[i][j] << endl;
        }
    }
    return 0;
}
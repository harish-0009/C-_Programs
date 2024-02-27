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

    cout << "The array is :" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << "a[" << i << "][" << j << "]= ";
            cout << a[i][j] << endl;
        }
    }

    a[1][2] = 15;
    cout << "Enter new element :";
    cin >> a[0][0];

    cout << "After modification the array is: " << endl;
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
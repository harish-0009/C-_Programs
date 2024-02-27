#include <iostream>
using namespace std;

int main()
{
    int i, j, r, c, choice, row_sum = 0, col_sum = 0;

    cout << "Enter row and col size :";
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

    do
    {
        cout << "Press 1 for row-wise sum" << endl;
        cout << "Press 2 for col-wise sum" << endl;
        cout << "Press 0 for exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int row_index;
            cout << "Enter row index:";
            cin >> row_index;

            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    if (i == row_index)
                    {
                        row_sum = row_sum + a[i][j];
                    }
                }
            }

            cout << "Row-wise sum is:" << row_sum << endl;

            break;

        case 2:
            int col_index;
            cout << "Enter col index:";
            cin >> col_index;

            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    if (j == col_index)
                    {
                        col_sum = col_sum + a[i][j];
                    }
                }
            }

            cout << "Col-wise sum is:" << col_sum << endl;

            break;

        case 0:
            break;

        default:
            cout << "Enter valid choice...." << endl;
        }
    } while (choice != 0);

    return 0;
}
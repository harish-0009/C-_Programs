#include <iostream>
using namespace std;

int main()
{
    int a[5][5] = {{5, 8, 9, 3, 4},
                   {4, 3, 2, 3, 4},
                   {5, 2, 6, 7, 1},
                   {1, 6, 4, 2, 6},
                   {5, 3, 2, 4, 3}};

    int i, j;

    cout << "Boundary elements :" << endl;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 0 || i == 4 || j == 0 || j == 4)
            {
                cout << a[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
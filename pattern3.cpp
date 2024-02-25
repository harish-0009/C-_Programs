#include <iostream>
using namespace std;

/*  1 2 3 4 5
      1 2 3 4
        1 2 3
          1 2
            1  */

int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= i - 1; k++)
        {
            cout << "  ";
        }
        for (j = 1; j <= 6 - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
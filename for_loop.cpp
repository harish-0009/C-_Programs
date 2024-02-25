#include <iostream>
using namespace std;

// Write a program to print all odd numbers between 1 to 10.

int main()
{
    int i = 1;

    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 1)
        {
            cout << i << endl;
        }
    }

    return (0);
}
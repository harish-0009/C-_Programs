#include <iostream>
using namespace std;

// Write a program to print all even numbers between 1 to 10.

int main()
{
    int i = 1;

    do
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        i++;
    } while (i <= 10);

    return (0);
}
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age :";
    cin >> age;

    (age >= 18)
        ? cout << "Adult"
        : cout << "miner";

    return (0);
}
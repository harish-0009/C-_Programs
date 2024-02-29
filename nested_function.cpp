#include <iostream>
using namespace std;

void piyush()
{
    cout << "My name is Piyush." << endl;
}

void rahul()
{
    cout << "My name is Rahul." << endl;
    piyush();
}

int main()
{
    rahul();

    return 0;
}
#include <iostream>
using namespace std;

int square(int);

int main()
{
    cout << square(5) << endl;
    cout << square(7) << endl;
    cout << square(3) << endl;
    cout << square(10) << endl;

    return 0;
}

int square(int a)
{
    int ans;
    ans = a * a;

    return ans;
}
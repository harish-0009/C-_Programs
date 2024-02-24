#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3, total, avrg;

    cout << "enter s1,s2 and s3 values:";
    cin >> s1 >> s2 >> s3;

    total = s1 + s2 + s3;
    cout << "Total =" << total << endl;

    avrg = total / 3;
    cout << "Avrg =" << avrg << endl;

    return(0);
}
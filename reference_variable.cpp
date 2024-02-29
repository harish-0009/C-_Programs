#include <iostream>
using namespace std;

int main()
{
    int harish = 50;
    int &bablu = harish; // deep copy
    int raj = harish;    // shallow copy

    cout << harish << " & " << bablu << endl;
    cout << harish << " & " << raj << endl;

    harish = 100;

    cout << "Deep Copy :" << harish << " & " << bablu << endl;
    cout << "Shallow copy :" << harish << " & " << raj << endl;

    return 0;
}
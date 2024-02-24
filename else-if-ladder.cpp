#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "1 for Monday" << endl
         << "2 for Tuesday" << endl
         << "3 for Wednesday" << endl
         << "4 for Thursday" << endl
         << "5 for Friday" << endl
         << "6 for Saturday" << endl
         << "7 for Sunday" << endl
         << "Enter your choice :";
    cin >> day;

    if (day == 1)
    {
        cout << "Monday";
    }
    else if (day == 2)
    {
        cout << "Tuesday";
    }
    else if (day == 3)
    {
        cout << "Wednesday";
    }
    else if (day == 4)
    {
        cout << "Thursday";
    }
    else if (day == 5)
    {
        cout << "Friday";
    }
    else if (day == 6)
    {
        cout << "Saturday";
    }
    else if (day == 7)
    {
        cout << "Sunday";
    }
    else
    {
        cout << "Invalid Day...";
    }
    return (0);
}

#include <iostream>
using namespace std;

int main()
{
    int choice, type;
    cout << "Press 1 for order Pizza..." << endl;
    cout << "Press 2 for order Burger..." << endl;
    cout << "Press 3 for order Sandwitch..." << endl;
    cout << "Enter your choice :";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter 1 for Chesse Burst Pizza..." << endl;
        cout << "Enter 2 for Crispy Pizza..." << endl;
        cout << "Enter 3 for Corn Pizza..." << endl;
        cout << "Enter your type :";
        cin >> type;
        switch (type)
        {
        case 1:
            cout << "You ordered Chesse Burst Pizza...";
            break;
        case 2:
            cout << "You ordered Crispy Pizza...";
            break;
        case 3:
            cout << "You ordered Corn Pizza...";
            break;
        default:
            cout << "This type is not available...";
        }
        break;
    case 2:
        cout << "You ordered a Burger...";
        break;
    case 3:
        cout << "You ordered a Sandwitch...";
        break;
    default:
        cout << "Invalid choice...";
    }
    return (0);
}
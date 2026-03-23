#include <iostream>
#include <string>
using namespace std;

bool validator(string op)
{
    string valid[] = {
        "+", "-", "*", "/", "++", "--",
        "=", "==", "<=", ">=", ">", "<",
        "/=", "%=", "*="};

    int n = sizeof(valid) / sizeof(valid[0]);

    int i = 0;
    while (i < n)
    {
        if (op == valid[i])
        {
            return true;
        }
        i++;
    }

    return false;
}

int main()
{
    string op;
    char choice;

    cout << "Enter choice (y/n): ";
    cin >> choice;

    while (choice == 'y' || choice == 'Y')
    {
        cout << "Enter the operator: ";
        cin >> op;

        if (validator(op))
        {
            cout << "Valid operator." << endl;
        }
        else
        {
            cout << "Invalid operator." << endl;
        }

        cout << "Continue? (y/n): ";
        cin >> choice;
    }

    return 0;
}
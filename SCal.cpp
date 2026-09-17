#include <iostream>
using namespace std;

int main()
{
    double num1;
    double num2;
    char operation;

    cout << "Enter the First Number: ";
    cin >> num1;

    cout << "Enter the Second Number: ";
    cin >> num2;

    cout << "Enter the Operation (+, -, *, /): ";
    cin >> operation;

    double result;

    if (operation == '+')
    {
        result = num1 + num2;
    }
    else if (operation == '-')
    {
        result = num1 - num2;
    }
    else if (operation == '*')
    {
        result = num1 * num2;
    }
    else if (operation == '/')
    {
        if (num2 == 0)
        {
            cout << "Error: Cannot divide by zero!" << endl;
            return 1;
        }

        result = num1 / num2;
    }
    else
    {
        cout << "Invalid Operation!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double a, b, result;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    if (op == '+') result = a + b;
    else if (op == '-') result = a - b;
    else if (op == '*') result = a * b;
    else if (op == '/') {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 1;
        }
        result = a / b;
    }
    else {
        cout << "Invalid operator!" << endl;
        return 1;
    }
    cout << "Result: " << result << endl;
 
    return 0;
}
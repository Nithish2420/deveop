#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    double multiplication = a * b;

    cout << "Multiplication = " << multiplication << endl;

    if (b != 0) {
        double division = a / b;
        cout << "Division = " << division << endl;
    } else {
        cout << "Division by zero is not possible." << endl;
    }

    return 0;
}`

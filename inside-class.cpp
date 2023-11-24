#include <iostream>
using namespace std;
class Calculator {
private:
    double num1;
    double num2;

public:
    Calculator(double a, double b) : num1(a), num2(b) {}

    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Cannot divide by zero." <<endl;
            return 0;
        }
    }
};

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    Calculator calculator(num1, num2);

    cout << "Sum: " << calculator.add() << endl;
    cout << "Difference: " << calculator.subtract() << endl;
    cout << "Product: " << calculator.multiply() << endl;
    cout << "Quotient: " << calculator.divide() << endl;

    return 0;
}

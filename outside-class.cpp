#include <iostream>
using namespace std;
// Declaration of the Calculator class
class Calculator {
private:
    double num1;
    double num2;

public:
    // Constructor
    Calculator(double a, double b);

    // Member function declarations
    double add();
    double subtract();
    double multiply();
    double divide();
};

// Definition of the constructor
Calculator::Calculator(double a, double b) : num1(a), num2(b) {}

// Definition of the add member function
double Calculator::add() {
    return num1 + num2;
}

// Definition of the subtract member function
double Calculator::subtract() {
    return num1 - num2;
}

// Definition of the multiply member function
double Calculator::multiply() {
    return num1 * num2;
}

// Definition of the divide member function
double Calculator::divide() {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Cannot divide by zero." << endl;
        return 0;
    }
}

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Creating an instance of the Calculator class
    Calculator calculator(num1, num2);

    // Using member functions
    cout << "Sum: " << calculator.add() << endl;
    cout << "Difference: " << calculator.subtract() << endl;
    cout << "Product: " << calculator.multiply() << endl;
    cout << "Quotient: " << calculator.divide() << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main() {
    try {
        // Code that may throw an exception
        int numerator, denominator, result;
        
        // Input values
        cout << "Enter numerator: ";
        cin >> numerator;
        
        cout << "Enter denominator: ";
        cin >> denominator;
        
        // Check for division by zero
        if (denominator == 0) {
            throw std::runtime_error("Division by zero is not allowed.");
        }
        
        // Perform the division
        result = numerator / denominator;
        
        // Output the result
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        // Catch and handle exceptions
        cerr << "Exception caught: " << e.what() << endl;
    } catch (...) {
        // Catch any other unhandled exceptions
        cerr << "Unknown exception caught." << endl;
    }

    return 0;
}

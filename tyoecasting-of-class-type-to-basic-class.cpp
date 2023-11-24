#include <iostream>

class MyClass {
private:
    int value;

public:
    // Constructor
    MyClass(int val) : value(val) {}

    // Conversion operator to int
    operator int() const {
        return value;
    }
};

int main() {
    // Creating an object of MyClass
    MyClass myObject(42);

    // Implicit type conversion using the conversion operator
    int intValue = myObject;

    // Displaying the result
    std::cout << "Converted integer value: " << intValue << std::endl;

    return 0;
}

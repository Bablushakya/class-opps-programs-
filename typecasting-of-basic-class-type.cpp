#include <iostream>

class MyClass {
public:
    int value;

    // Constructor for type conversion
    MyClass(int v) : value(v) {}

    // Function to display the value
    void display() {
        std::cout << "Value in MyClass: " << value << std::endl;
    }
};

int main() {
    // Typecasting from int to MyClass
    int intValue = 42;
    MyClass myObject = intValue;  // Calls the constructor for type conversion

    // Displaying the result
    myObject.display();

    return 0;
}

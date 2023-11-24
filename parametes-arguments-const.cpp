#include <iostream>
#include <string>

class MyClass {
private:
    int integerValue;
    std::string stringValue;

public:
    // Zero-argument constructor (default constructor)
    MyClass() {
        std::cout << "Zero-argument constructor called" << std::endl;
        integerValue = 0;
        stringValue = "Default";
    }

    // Parameterized constructor
    MyClass(int intValue, const std::string& strValue) {
        std::cout << "Parameterized constructor called" << std::endl;
        integerValue = intValue;
        stringValue = strValue;
    }

    // Member function to display the values
    void displayValues() {
        std::cout << "Integer Value: " << integerValue << std::endl;
        std::cout << "String Value: " << stringValue << std::endl;
    }
};

int main() {
    // Creating objects using both constructors
    MyClass obj1;  // Zero-argument constructor called

    int intValue = 42;
    std::string strValue = "Hello, Constructor!";
    MyClass obj2(intValue, strValue);  // Parameterized constructor called

    // Displaying values of the objects
    std::cout << "\nValues of obj1 (zero-argument constructor):" << std::endl;
    obj1.displayValues();

    std::cout << "\nValues of obj2 (parameterized constructor):" << std::endl;
    obj2.displayValues();

    return 0;
}

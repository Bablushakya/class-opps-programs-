#include <iostream>

class MyClass {
public:
    // Static data member
    static int staticData;

    // Member function to modify the static data member
    static void updateStaticData(int value) {
        staticData = value;
    }

    // Member function to display the static data member
    static void displayStaticData() {
        std::cout << "Static Data: " << staticData << std::endl;
    }
};

// Initialization of the static data member
int MyClass::staticData = 0;

int main() {
    // Accessing static data member before creating an instance
    MyClass::displayStaticData();

    // Creating instances of MyClass
    MyClass obj1, obj2;

    // Displaying static data member for each instance
    obj1.displayStaticData();
    obj2.displayStaticData();

    // Updating static data member through one instance
    obj1.updateStaticData(42);

    // Displaying static data member for both instances after modification
    obj1.displayStaticData();
    obj2.displayStaticData();

    return 0;
}

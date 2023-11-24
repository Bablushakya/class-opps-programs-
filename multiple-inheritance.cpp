#include <iostream>
using namespace std;
// Base class 1
class Base1 {
public:
    void displayBase1() {
        cout << "Base1 class display" << endl;
    }
};

// Base class 2
class Base2 {
public:
    void displayBase2() {
        cout << "Base2 class display" << endl;
    }
};

// Derived class inheriting from Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void displayDerived() {
        cout << "Derived class display" << endl;
    }
};

int main() {
    // Create an object of the derived class
    Derived derivedObj;

    // Accessing members from Base1
    derivedObj.displayBase1();

    // Accessing members from Base2
    derivedObj.displayBase2();

    // Accessing members from Derived
    derivedObj.displayDerived();

    return 0;
}

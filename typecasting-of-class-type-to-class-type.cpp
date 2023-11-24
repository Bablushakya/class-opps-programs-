#include <iostream>

class Base {
public:
    int baseValue;

    Base(int val) : baseValue(val) {}

    void display() {
        std::cout << "Base class value: " << baseValue << std::endl;
    }
};

class Derived : public Base {
public:
    int derivedValue;

    Derived(int baseVal, int derivedVal) : Base(baseVal), derivedValue(derivedVal) {}

    void display() {
        std::cout << "Derived class value: " << derivedValue << std::endl;
    }
};

int main() {
    // Implicit typecasting (upcasting)
    Derived derivedObj(10, 20);
    Base* basePtr = &derivedObj;

    std::cout << "Implicit typecasting (upcasting):" << std::endl;
    basePtr->display();  // Calls Base class display() method

    // Explicit typecasting (downcasting)
    Base baseObj(5);
    Derived* derivedPtr = dynamic_cast<Derived*>(&baseObj);

    if (derivedPtr) {
        std::cout << "Explicit typecasting (downcasting):" << std::endl;
        derivedPtr->display();  // Calls Derived class display() method
    } else {
        std::cout << "Downcasting failed. Object is not of Derived type." << std::endl;
    }

    return 0;
}

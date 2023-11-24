#include <iostream>

// Base class with a virtual function
class Shape {
public:
    virtual void draw() const {
        std::cout << "Drawing a shape" << std::endl;
    }

    // Virtual destructor to ensure proper cleanup in derived classes
    virtual ~Shape() {}
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

// Derived class 2
class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a square" << std::endl;
    }
};

int main() {
    // Create objects of different derived classes
    Circle circle;
    Square square;

    // Using pointers to the base class to achieve polymorphism
    Shape* shapePtr1 = &circle;
    Shape* shapePtr2 = &square;

    // Call the draw() function, the actual function called depends on the object type
    shapePtr1->draw();  // Calls draw() of Circle class
    shapePtr2->draw();  // Calls draw() of Square class

    return 0;
}

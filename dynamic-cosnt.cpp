#include <iostream>
using namespace std;
class DynamicConstructorDemo {
public:
    // Default constructor
    DynamicConstructorDemo() {
        cout << "Default constructor called" <<endl;
        data = nullptr;
    }

    // Parameterized constructor
    DynamicConstructorDemo(int size) {
        cout << "Parameterized constructor called" <<endl;
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = i * 2; // Some arbitrary initialization
        }
    }

    // Destructor
    ~DynamicConstructorDemo() {
        cout << "Destructor called" << endl;
        delete[] data; // Release dynamically allocated memory
    }

    // Display data
    void displayData() {
        if (data) {
            for (int i = 0; i < size; ++i) {
                cout << data[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Data is nullptr" << endl;
        }
    }

private:
    int* data;
    int size = 5; // Default size, you can modify this as needed
};

int main() {
    // Create an object using the default constructor
    DynamicConstructorDemo obj1;

    // Create an object using the parameterized constructor
    DynamicConstructorDemo obj2(8);

    // Display data in both objects
    cout << "Data in obj1: ";
    obj1.displayData();

    cout << "Data in obj2: ";
    obj2.displayData();

    // The destructor will be called when objects go out of scope

    return 0;
}

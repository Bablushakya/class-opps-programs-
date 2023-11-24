#include <iostream>
using namespace std;
class MyClass {
public:
    // Const data member
    const int constData;

    // Constructor to initialize constData
    MyClass(int value) : constData(value) {}

    // Member function to display constData
    void displayConstData() const {
        cout << "Const Data: " << constData <<endl;
    }

    // Attempt to modify constData (will result in a compilation error)
    // void tryToModifyConstData() {
    //     constData = 42;  // This line would cause a compilation error
    // }
};

int main() {
    // Creating an instance of MyClass with constData initialized
    MyClass obj(10);

    // Displaying constData
    obj.displayConstData();

    // Attempting to modify constData (uncommenting the line in MyClass will cause a compilation error)
    // obj.tryToModifyConstData();

    return 0;
}

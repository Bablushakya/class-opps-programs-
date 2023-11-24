#include <iostream>
using namespace std;
class Counter {
private:
    int count;

public:
    // Default constructor
    Counter() : count(0) {}

    // Parameterized constructor
    Counter(int initialCount) : count(initialCount) {}

    // Overloading prefix increment (++counter)
    Counter operator++() {
        ++count;
        return *this;
    }

    // Overloading postfix increment (counter++)
    Counter operator++(int) {
        Counter temp = *this;
        ++count;
        return temp;
    }

    // Overloading prefix decrement (--counter)
    Counter operator--() {
        --count;
        return *this;
    }

    // Overloading postfix decrement (counter--)
    Counter operator--(int) {
        Counter temp = *this;
        --count;
        return temp;
    }

    // Getter function to retrieve the current count
    int getCount() const {
        return count;
    }
};

int main() {
    // Demonstrate the use of constructors and overloading

    // Default constructor
    Counter c1;
    cout << "Default Constructor: " << c1.getCount() << endl;

    // Parameterized constructor
    Counter c2(5);
    cout << "Parameterized Constructor: " << c2.getCount() << endl;

    // Overloaded prefix increment
    ++c2;
    cout << "After Prefix Increment: " << c2.getCount() << endl;

    // Overloaded postfix increment
    c2++;
    cout << "After Postfix Increment: " << c2.getCount() << endl;

    // Overloaded prefix decrement
    --c2;
    cout << "After Prefix Decrement: " << c2.getCount() << endl;

    // Overloaded postfix decrement
    c2--;
    cout << "After Postfix Decrement: " << c2.getCount() << endl;

    return 0;
}

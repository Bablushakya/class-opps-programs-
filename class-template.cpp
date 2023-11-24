#include <iostream>
using namespace std;
// Class template for a generic Pair
template <typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first(first), second(second) {}

    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }

private:
    T1 first;
    T2 second;
};

int main() {
    // Creating a Pair of integers
    Pair<int, int> intPair(1, 2);

    // Creating a Pair of double and char
    Pair<double, char> doubleCharPair(3.14, 'A');

    // Displaying the values
    cout << "Integer Pair: " << intPair.getFirst() << ", " << intPair.getSecond() <<endl;
    cout << "Double-Char Pair: " << doubleCharPair.getFirst() << ", " << doubleCharPair.getSecond() <<endl;

    return 0;
}

#include <iostream>
#include <cstdlib>

// Overloading new and delete operators
void* operator new(size_t size) {
    std::cout << "Custom new operator called. Allocating " << size << " bytes." << std::endl;
    void* ptr = malloc(size);
    return ptr;
}

void operator delete(void* ptr) noexcept {
    std::cout << "Custom delete operator called." << std::endl;
    free(ptr);
}

// Class to use the overloaded operators
class CustomClass {
public:
    int data;

    CustomClass(int val) : data(val) {
        std::cout << "Constructor called for CustomClass with data: " << data << std::endl;
    }

    ~CustomClass() {
        std::cout << "Destructor called for CustomClass with data: " << data << std::endl;
    }
};

int main() {
    // Using overloaded new operator
    CustomClass* obj = new CustomClass(42);

    // Using overloaded delete operator
    delete obj;

    return 0;
}

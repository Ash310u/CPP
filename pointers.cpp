#include <iostream>

int main() {
    int var = 42;
    int* ptr = &var;

    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Address of var: " << &var << std::endl;
    std::cout << "Value stored in ptr (address of var): " << ptr << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;

    // Changing value using pointer
    *ptr = 100;
    std::cout << "New value of var after modification through pointer: " << var << std::endl;

    int *pointer = nullptr;
    if (pointer == nullptr) {
        std::cout << "Value of pointer: (used nullptr): " << pointer << std::endl;
    }
    
    var = 111;
    pointer = &var;
    std::cout << "Value of pointer: (assigned &var to pointer): " << *pointer << std::endl;

    return 0;
}

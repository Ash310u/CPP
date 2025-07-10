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

    return 0;
}

#include <iostream>

// Global variable
int number = 0;

void printNumber(int number);

int main() {
    std::cout << "Global Var Value: " << number << std::endl;
    int number = 10;
    printNumber(number);
    
    // This reassigns the global variable 'number' to 30
    // This is because the global variable 'number' is being accessed through the scope resolution operator '::'
    ::number = 30;
    std::cout << "Reassigned Global Var inside printNumber Function '::number = 30;' Global Var Value: " << ::number << std::endl;
    return 0;
}

void printNumber(int number) {
    std::cout << "printNumber's parameter Local Var of Main Function Value: " << number << std::endl;
    number = 20;
    std::cout << "Reassigned printNumber's parameter Value: " << number << std::endl;
    std::cout << "Global Var Value: " << ::number << std::endl;
}
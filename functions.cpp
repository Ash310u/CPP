#include <iostream>
#include <string>

// Function declaration (prototype)
int& getReference(int& x);
void printMessage(std::string message = "Default message", int times = 1);
inline int multiply(int a, int b);
int max(int a, int b);
double max(double a, double b);
int max(int a, int b, int c);

int main() {
    // Reference function
    int value = 42;
    int& ref = getReference(value);
    ref = 100;
    std::cout << "Modified value: " << value << std::endl;
    
    // Default parameters
    printMessage();  // Uses default parameters
    printMessage("Custom message", 3);  // Uses provided parameters
    
    // Inline function
    std::cout << "Product: " << multiply(4, 6) << std::endl;
    
    // Function overloading
    std::cout << "Max of 10, 20: " << max(10, 20) << std::endl;
    std::cout << "Max of 3.5, 2.8: " << max(3.5, 2.8) << std::endl;
    std::cout << "Max of 15, 25, 35: " << max(15, 25, 35) << std::endl;
    
    return 0;
}

// Unique Function definitions

// Function returning reference
int& getReference(int& x) {
    return x;
}    

// Function with default parameters
void printMessage(std::string message, int times) {
    for (int i = 0; i < times; i++) {
        std::cout << message << std::endl;
    }    
}    

// Inline function
inline int multiply(int a, int b) {
    return a * b;
}    

// Function overloading
int max(int a, int b) {
    return (a > b) ? a : b;
}    

double max(double a, double b) {
    return (a > b) ? a : b;
}    

int max(int a, int b, int c) {
    return max(max(a, b), c);
}    


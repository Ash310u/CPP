#include <iostream>

int main() {
    int number;
    
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    // Using ternary operator
    std::cout << "Ternary operator result: ";
    std::cout << (number > 0 ? "Positive" : (number < 0 ? "Negative" : "Zero")) << std::endl;
    
    // Equivalent if-else statement
    std::cout << "If-else result: ";
    if (number > 0) {
        std::cout << "Positive";
    } else if (number < 0) {
        std::cout << "Negative";
    } else {
        std::cout << "Zero";
    }
    std::cout << std::endl;
    
    // Another example with ternary operator
    int age = 18;
    std::string status = (age >= 18) ? "Adult" : "Minor";
    std::cout << "Age " << age << " is " << status << std::endl;
    
    // Equivalent if-else
    std::string status2;
    if (age >= 18) {
        status2 = "Adult";
    } else {
        status2 = "Minor";
    }
    std::cout << "Age " << age << " is " << status2 << std::endl;
    
    return 0;
}

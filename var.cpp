#include <iostream>

int main() {
    // Primitive data types in CPP

    // Variable declaration and initialization
    // int = integer (whole numbers)
    // double = decimal (numbers with a decimal point)
    // char = character (single characters)
    // string = string is class (sequence of characters)
    // bool = boolean (true or false)
    // = is the assignment operator (assigns a value to a variable)
    
    int number = 42;
    double decimal = 3.14;
    char letter = 'A';
    std::string text = "Variables!";
    bool flag = true;
    
    // Displaying variables
    std::cout << "Integer: " << number << std::endl;
    std::cout << "Double: " << decimal << std::endl;
    std::cout << "Character: " << letter << std::endl;
    std::cout << "String: Hello " << text << std::endl;
    std::cout << "Boolean: " << std::boolalpha << flag << std::endl;
    
    // Variable modification
    number = 100;
    std::cout << "Modified integer: " << number << std::endl;
    
    return 0;
}

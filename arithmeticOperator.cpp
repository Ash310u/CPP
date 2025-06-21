#include <iostream>

int main() {
    int a = 10;
    int b = 3;
    
    // Addition operator (+)
    int sum = a + b;
    std::cout << "Addition: " << a << " + " << b << " = " << sum << std::endl;
    
    // Subtraction operator (-)
    int difference = a - b;
    std::cout << "Subtraction: " << a << " - " << b << " = " << difference << std::endl;
    
    // Multiplication operator (*)
    int product = a * b;
    std::cout << "Multiplication: " << a << " * " << b << " = " << product << std::endl;
    
    // Division operator (/) using int to get an int result
    int quotient = a / b;
    std::cout << "Division: " << a << " / " << b << " = " << quotient << std::endl;
    
    // Modulus operator (%)
    int remainder = a % b;
    std::cout << "Modulus: " << a << " % " << b << " = " << remainder << std::endl;
    
    std::cout << std::endl;
    
    // Demonstrating the difference between post-increment and pre-increment
    int num1 = 5;
    int num2 = 5;
    
    std::cout << "Post-increment example:" << std::endl;
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num1++ returns: " << num1++ << std::endl; // Returns 5, then increments to 6
    std::cout << "num1 after: " << num1 << std::endl;
    
    std::cout << "\nPre-increment example:" << std::endl;
    std::cout << "num2: " << num2 << std::endl;
    std::cout << "++num2 returns: " << ++num2 << std::endl; // Increments to 6, then returns 6
    std::cout << "num2 after: " << num2 << std::endl;
    
    // Demonstrating the difference between post-decrement and pre-decrement
    int num3 = 8;
    int num4 = 8;
    
    std::cout << "\nPost-decrement example:" << std::endl;
    std::cout << "num3: " << num3 << std::endl;
    std::cout << "num3-- returns: " << num3-- << std::endl; // Returns 8, then decrements to 7
    std::cout << "num3 after: " << num3 << std::endl;
    
    std::cout << "\nPre-decrement example:" << std::endl;
    std::cout << "num4: " << num4 << std::endl;
    std::cout << "--num4 returns: " << --num4 << std::endl; // Decrements to 7, then returns 7
    std::cout << "num4 after: " << num4 << std::endl;
   
    return 0;
}
#include <iostream>

int main() {
    int a = 10;
    int b = 3;

    // Implicit type conversion (integer division)
    double result = a / b;
    std::cout << "Implicit conversion result: " << result << std::endl;

    // Explicit type conversion using static_cast
    double result2 = static_cast<double>(a) / b;
    std::cout << "Explicit conversion result: " << result2 << std::endl;

    // More examples of type conversion
    int x = 5;
    int y = 2;
    
    // C-style cast (not recommended in modern C++)
    double result3 = (double)x / y;
    std::cout << "C-style cast result: " << result3 << std::endl;
    
    // Function-style cast
    double result4 = double(x) / y;
    std::cout << "Function-style cast result: " << result4 << std::endl;
    
    // Converting double to int (truncation)
    double pi = 3.14159;
    int rounded = static_cast<int>(pi);
    std::cout << "Double " << pi << " converted to int: " << rounded << std::endl;

    return 0;
}
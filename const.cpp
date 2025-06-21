#include <iostream>

int main() {
    // const is a keyword that is used to declare a constant variable
    // tells the compiler to prevent anything form modifying it. (read-only)
    const double pi = 3.14;
    double radius = 5.0;
    
    double circumference = 2 * pi * radius;
    double area = pi * radius * radius;
    
    std::cout << "Circumference: " << circumference << std::endl;
    std::cout << "Area: " << area << std::endl;
    // pi = 100; // this will cause an error because pi is a constant
    // std::cout << "Number: " << pi << std::endl;
    return 0;
}